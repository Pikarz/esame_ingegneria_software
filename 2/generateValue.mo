

function generateValue

output Integer y;   // Duration phase i when carried out by team k

algorithm

    if (myrandom() <= 0.5) then
        y := (integer(myrandom()*0.999*1000));
    else
        y := -(integer(myrandom()*0.999*1000));
    end if;


end generateValue;

