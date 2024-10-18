
block Env

Prm p;   // parameters

// client input queue (ciq) where server (env) sends data to client
OutputInteger inputdata1[3];      // pair (timestamp, sensor-value)
OutputBoolean writesignal1;
OutputBoolean newreq;
InputBoolean spaceavailable1;

OutputInteger req[3];

Integer state, ValueFromClient, fifox;


algorithm

when initial() then

state := 0;
writesignal1 := false;
fifox := InitFifoIOState();
inputdata1[1] := 0;
inputdata1[2] := 0;
inputdata1[3] := 0;
ValueFromClient := 0;
newreq := false;

elsewhen sample(0, p.T)  then
if (state == 0) then 
    if (myrandom() <= p.prob_new_req) then // prep value or skip
        req[1] := generateValue();
        req[2] := generateValue();
        req[3] := generateValue();
        state := 10;
        newreq := true;
    else
        state := pre(state);
    end if;

elseif (state == 10) then // insert value in queue

    inputdata1 := pre(req);
    newreq := false;
      state := 20;  

elseif  (state == 20) then // send value to dqueueterminator

    (writesignal1, fifox) :=
    WriteToFIFO(pre(fifox), pre(writesignal1), pre(spaceavailable1));
     
     if (FifoIODone(fifox))
     then  // writing is over, value sent
           state := 0;  // loop
	   fifox := InitFifoIOState();
     end if;



else
    state := pre(state);   // loop

end if;


end when;


end Env;
