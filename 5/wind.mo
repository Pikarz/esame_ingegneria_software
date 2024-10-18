
block Wind

OutputReal wind_value1;
OutputReal wind_value2;

algorithm
    when initial() then
        wind_value1 := simulate_wind();
        wind_value2 := simulate_wind();

    elsewhen sample(0, Prm.Tw) then
        wind_value1 := simulate_wind();
        wind_value2 := simulate_wind();
    end when;

end Wind;

function simulate_wind

output Real p;  

algorithm

    if (myrandom() <= 0.5) then
        p := myrandom();
    else
        p := -myrandom();
    end if;

end simulate_wind;

