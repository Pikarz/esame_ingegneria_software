model System

Prm p;

DTMC mc;

Monitor m1;
CompletionTime ct1[p.W];

equation


// connect models to form system
for k in 1:Prm.W loop

connect(mc.x[k], ct1[k].x);
connect(ct1[k].y, m1.y[k]);
connect(ct1[k].z, m1.z[k]);

end for;

// connect output of all models to probe



end System;

