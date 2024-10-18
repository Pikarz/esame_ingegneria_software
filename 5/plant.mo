block Plant

Prm p;  // parameters

OutputReal x[3];   // plant state x
OutputReal v[3];    // plant state v
InputReal u[3];  //  plant input: u
InputReal w1; // wind value 1
InputReal w2; // wind value 2

initial equation
    for i in 1:3 loop
        x[i] = 0;
        v[i] = 0;
    end for;       

equation
    der(x[1]) = v[1];
    der(x[2]) = v[2];
    der(x[3]) = v[3];
    der(v[1]) = u[1] + w1;
    der(v[2]) = u[2] + w2;
    der(v[3]) = u[3] - p.g;

end Plant;

