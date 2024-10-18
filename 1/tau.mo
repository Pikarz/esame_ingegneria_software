
function tau
input Prm q;
input Integer i;
input Integer k;
output Real result;

algorithm

result := ( q.A + q.B*(k^2) + q.C*(i^2) + q.D*k*i);


end tau;