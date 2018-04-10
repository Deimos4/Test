e1=0;e2=0;e3=0;e4=0;

ed=parseNumber ctrlText 666;
if(ed==0) then{c=ed;};
if(f==0) then{c=parseNumber ctrlText 666;}; // почему то оператор "or" не работает..
if(c==0) then{c=parseNumber ctrlText 666;};

f=1;
e1= parseNumber ctrlText 601;
e2= parseNumber ctrlText 602;
e3= parseNumber ctrlText 603;
e4= parseNumber ctrlText 604;


/*
_pos = getPos Player; 
_pos1 = [(_pos select 0) + sin 40 * 100,(_pos select 1) + cos 40 * 100];

*/

x1 = e1-e2;
y1 = e4-e3;
 
x2 = x1*cos(c)+y1*sin(c); 
y2 = y1*cos(c)-x1*sin(c);

aa1= aa1+x2; 
aa2= aa2+y2;


cr= cr+ 1;

closeDialog 0;

hint format ["Be waiting \n azimut %1",c ];
sleep (20+(random 10));
bomb="M_Mo_82mm_AT_LG" createVehicle [aa1,aa2];
hint "";

