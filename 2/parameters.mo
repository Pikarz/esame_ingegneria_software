
record Prm

parameter Integer ID = 1960447;  //  Sostituire qui la vostra matricola

parameter Integer MyMagicNumber = 1 + mod(ID, 173);  

// Aggiungere qui gli altri eventuali parametri del vostro modello

parameter Real HORIZON = 10000;  

parameter Integer T = 1;
parameter Real prob_new_req = T/10;
parameter Real Horizon = 10000;

end Prm;

