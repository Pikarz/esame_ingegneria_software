
block Controller

Prm p;  

InputReal x[3];   // plant state: 
InputReal v[3];
InputReal r[3];  //  setpoint scelto dallo user: 
OutputReal u[3];  //  plant input


algorithm

    when sample(0, Prm.T) then
        u[1] := p.k1*(x[1] - r[1]) + p.k2*v[1];
        u[2] := p.k1*(x[2] - r[2]) + p.k2*v[2];
        u[3] := p.g + p.k1*(x[3] - r[3]) + p.k2*v[3];

    end when;


equation


end Controller;
