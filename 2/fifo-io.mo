/*
    Insieme di funzioni che lavorano sulle fifo
*/

// inizializza lo stato della fifo come pronta per l'utilizzo
function InitFifoIOState
output Integer x; // stato fifo
algorithm
   x := 0;
end InitFifoIOState;

// se lo stato della fifo è 2, allora è stata eseguita la lettura
function FifoIODone
input Integer x; // stato fifo
output Boolean done;

algorithm
    if (x == 2) then
       done := true;
    else
       done := false;
    end if;

end FifoIODone;

// 
function ReadFromFIFO
input Integer x;   // state
input Boolean datavailable; 
input Boolean readsignal;
output Boolean new_readsignal;
output Integer new_x;


algorithm
    new_readsignal := readsignal;
    if (x == 0) and datavailable then // se la fifo è nello stato 0 (è pronta) e ci sono dati, allora ci sono dati da leggere
        new_readsignal := not(readsignal); // mi preparo a leggere con il blocco che chiama questa funzione
        new_x := 1;
         
    elseif  (x == 1) then // ho letto i dati col blocco che chiama questa funzione
         new_x := 2;  // reading is over
    else  // hold
          new_x := x; 
    end if;

end ReadFromFIFO;



function WriteToFIFO
input Integer x;   // state
input Boolean writesignal;
input Boolean spaceavailable;
output Boolean new_writesignal;
output Integer new_x;

algorithm

    new_writesignal := writesignal;

    if (x == 0) then // value assigned // mi preparo a scrivere
        new_x := 1;
    elseif (x == 1) and spaceavailable then // there is space to write
        new_writesignal:= not(writesignal);
        new_x := 2;
    else  // hold
        new_x := x;
    end if;

end WriteToFIFO;