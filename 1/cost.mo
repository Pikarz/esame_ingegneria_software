
function Cost
input Integer k;
output Real result;

protected Prm q;
algorithm

result := 1000 - 500*((k -1)/(q.W - 1));


end Cost ;