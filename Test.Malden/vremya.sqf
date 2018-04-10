
while {true} do { 

ii=ii+1;
tm=ii / 60;
tm=(tm+0.5)-((tm+0.5)%1);
ts=ii % 60;
if (ts>=30) then{tm=tm-1;};
sleep 1;
};

