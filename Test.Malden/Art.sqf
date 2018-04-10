b1=0;
b2=0;
cr= 0;

a1= parseNumber ((ctrlText 501)+"00");
a2= parseNumber ((ctrlText 502)+"00");

aa1=a1+(random 500)-(random 500);
aa2=a2+(random 500)-(random 500);
closeDialog 0;
hint "Be waiting";
sleep (20+(random 10));
bomb="M_Mo_82mm_AT_LG" createVehicle [aa1, aa2];
hint "";
 

   
