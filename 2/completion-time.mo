
block CompletionTime

InputBoolean x;  // newreq from env
InputReal values[3]; // values

OutputReal y;  // Expected value for development completion time

OutputReal z;  // StdDev completion time
OutputReal Y[3]; // expected value for value i
OutputReal Z[3]; // stddev for value i

Integer counter;    
Boolean delivery;
Real v;  // completion time
Real TimeLastDelivery;
Real y2;  // Second order moment for development completion time
Real Var;  // Variance completion time
Real Y2[3];

initial equation

  counter = 0;
  y = 0;
  z = 0;
  Var = 0;
  v = 0;
  TimeLastDelivery = 0;
  for i in 1:3 loop
    Y[i] = 0;
    Z[i] = 0;
    Y2[i] = 0;
end for;

equation

    delivery = x;

algorithm


when edge(delivery)  then

      v := (time - TimeLastDelivery);
      y := y*(counter/(counter + 1)) + v/(counter + 1) ;
      y2 := y2*(counter/(counter + 1)) + (v^2)/(counter + 1) ;

      Var := y2 - (y^2);
      z := sqrt(Var);
      
      counter := counter + 1;
      TimeLastDelivery := time;


    for i in 1:3 loop
          Y[i] := pre(Y[i])*(counter/(counter + 1)) + (values[i]/(counter + 1));
        Y2[i] := pre(Y2[i])*(counter/(counter + 1)) + (values[i]^2)/(counter + 1);
        Z[i] := sqrt((Y2[i]) - (Y[i]^2));
    end for;


end when;


end CompletionTime;

