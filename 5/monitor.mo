
block Monitor

Prm p;  // parameters
Modelica.Blocks.Math.StandardDeviation std1;
Modelica.Blocks.Math.StandardDeviation std2;
Modelica.Blocks.Math.StandardDeviation std3;

Modelica.Blocks.Math.ContinuousMean mean1;
Modelica.Blocks.Math.ContinuousMean mean2;
Modelica.Blocks.Math.ContinuousMean mean3;

InputReal x[3];   // plant state: 
InputReal r[3];

OutputReal e[3]; 
OutputReal AvgErr[3];
OutputReal StdDevErr[3];

equation
    

    connect(e[1], std1.u);
    connect(e[2], std2.u);
    connect(e[3], std3.u);

    connect(StdDevErr[1], std1.y);
    connect(StdDevErr[2], std2.y);
    connect(StdDevErr[3], std3.y);

    connect(e[1], mean1.u);
    connect(e[2], mean2.u);
    connect(e[3], mean3.u);

    connect(AvgErr[1], mean1.y);
    connect(AvgErr[2], mean2.y);
    connect(AvgErr[3], mean3.y);

algorithm


// adjust as needed 
when (sample(0,p.T)) then
    e[1] := pre(x[1]) - pre(r[1]);
    e[2] := pre(x[2]) - pre(r[2]);
    e[3] := pre(x[3]) - pre(r[3]);

elsewhen (time > p.HORIZON) then

    Modelica.Utilities.Files.remove("outputs.txt");
    Modelica.Utilities.Streams.print("ComponenteIndex AvgErr StdDevErr (ID = " + String(p.ID) + ", MyMagicNumber = " + String(p.MyMagicNumber) + ", 
    HORIZON = " + String(p.HORIZON) + ", time = " + String(time) + ")", "outputs.txt");
    
    for i in 1:3 loop 
         Modelica.Utilities.Streams.print(String(i) + "  " + String(AvgErr[i]) + "  " + String(StdDevErr[i]), "outputs.txt");     
    end for;
   
    terminate("Standard deviation completion time small enough for reliable estimate");
end when;

end Monitor;