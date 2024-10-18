
block DQueueTerminator

Prm p;

// s2c
// client input queue (ciq) con la quale il client riceve dati dal server
OutputBoolean readsignal;
InputInteger outputdata[3];  // data to be received
InputBoolean datavailable;  


Integer state, fifox, ValueFromServer[3];

algorithm
    when initial() then
        state := 0;
        fifox := InitFifoIOState();
        ValueFromServer := {0,0,0};

    elsewhen sample(0, p.T)  then

        if (state == 0) then  // read from server
            (readsignal, fifox) := ReadFromFIFO(pre(fifox), pre(datavailable), pre(readsignal));
            if (FifoIODone(fifox)) then  // reading done, value ready for processing
                ValueFromServer := pre(outputdata);
                state := 0;
        	    fifox := InitFifoIOState(); 
            end if;  
        else
            state := pre(state);   // loop

        end if;
    end when;
end DQueueTerminator;
