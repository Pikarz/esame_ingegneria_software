block Monitor1

    InputInteger req[3];
    InputBoolean new_triple;
    InputInteger y; // expected value time
    InputInteger z; // stddev time
    OutputReal AvgValue[3]; // expected value 
    OutputReal StdDevValue[3];
    Prm p;  // parameters

    CompletionTime ct;


    equation
        y = ct.y;
        z = ct.z;
        for i in 1:3 loop
            AvgValue[i] = ct.Y[i];
            StdDevValue[i] = ct.Z[i];
            ct.values[i] = req[i];
        end for;
     
        connect(ct.x, new_triple);
        
    algorithm
        when (time >= p.HORIZON) then
                Modelica.Utilities.Files.remove("outputs.txt");
    Modelica.Utilities.Streams.print("Avg1 StdDev1 Avg2 StdDev2 Avg3 StdDev3 AvgWait StdWait (ID = " + String(p.ID) + ",
MyMagicNumber = " + String(p.MyMagicNumber) + ", HORIZON = " + String(p.HORIZON) + ", time = "+ String(time) +")", "outputs.txt");
    
         Modelica.Utilities.Streams.print(
            String(AvgValue[1]) + " " +  String(StdDevValue[1]) + " " + 
            String(AvgValue[2]) + " " +  String(StdDevValue[2]) + " " + 
            String(AvgValue[3]) + " " +  String(StdDevValue[3]) + " " + 
            String(y) + " " +  String(z)

            , "outputs.txt");     
   
    terminate("Standard deviation completion time small enough for reliable estimate");
        end when;
end Monitor1;
