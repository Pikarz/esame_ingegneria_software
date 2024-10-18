model System

Plant plant;
User user;
Controller ctr;
Monitor m;
Wind wind;

equation   
    for i in 1:3 loop
        connect(plant.x[i], ctr.x[i]);
        connect(plant.x[i], m.x[i]);
        connect(plant.v[i], ctr.v[i]);
        connect(ctr.u[i], plant.u[i]);
        connect(user.r[i], ctr.r[i]);
        connect(user.r[i], m.r[i]);

    end for;
    connect(plant.w1, wind.wind_value1);
    connect(plant.w2, wind.wind_value2);

end System;
