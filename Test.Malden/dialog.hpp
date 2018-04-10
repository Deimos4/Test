#define JTS_FontM_PM			"PuristaMedium"
#define art
class okno
{
	idd = -1;
	movingEnable =true;
	controlsBackground[] = {background};
	objects[] = { };
	controls[] = {
		header, 

edit1,
edit2,
//edit3,
text1,
text2,
ButOK,
ButClose
		
	};
	class header: RscText
	{

		idc = 101;
		x = 0.1; y = 0.14;
		w = 0.55; h = 0.04;
		style = ST_CENTER;
		SizeEX = 0.04;
		text = "Coordinates of a point";
	};
	class background: RscBackground
	{
moving = 1;
		x = 0.14; y = 0.10;
		w = 0.71; h = 0.75;
	};
	


class text1: RscText
	{
		idc = 51;
		x = 0.26; y = 0.35;
		w = 0.20; h = 0.04;
		style = ST_LEFT;
                SizeEX = 0.04;
		text ="X";
	};
class text2: RscText
	{
		idc = 51;
		x = 0.26; y = 0.47;
		w = 0.30; h = 0.06;
		style = ST_LEFT;
                SizeEX = 0.04;
		text ="Y";
	};




class edit1: RscEdit
	{
		idc = 501;
		x = 0.3; y = 0.35;
		w = 0.10; h = 0.08;
                SizeEX = 0.04;
		text = "";	
colorDisabled[] = {0.95,0.95,0.95,1};
	};


class edit2: RscEdit
	{
		idc = 502;
		x = 0.3; y = 0.48;
		w = 0.10; h = 0.08;
                SizeEX = 0.04;
		text = "";	
colorDisabled[] = {0.95,0.95,0.95,1};
	};




class RscButton { 
type = 1; 
idc = 0; 
style = 1;
colorText[] = { 1, 0, 0, 0.7 }; 
colorDisabled[] = { 0, 0, 1, 0.7 }; 
colorBackground[] = { 3, 0, 2, 0 };
colorBackgroundDisabled[] = { 1, 1, 1, 0.2 }; 
colorBackgroundActive[] = { 0.3, 0.3, 0.3, 1 }; 
colorShadow[] = { 0.3, 0.3, 0.3, 0.5 }; 
colorBorder[] = { 0.3, 0.3, 0.3, 1 }; 
colorFocused[] = {0,0,0,1};
borderSize = 0.001; 
offsetX = 0.001; 
offsetY = 0.001; 
offsetPressedX = 0.001; 
offsetPressedY = 0.001; 
soundEnter[] = {"", 0.15, 1}; 
soundPush[] = {"", 0.15, 1}; 
soundClick[] = {"", 0.15, 1}; 
soundEscape[] = {"", 0.15, 1}; 
font = JTS_FontM_PM;
sizeEx = 0.03; 
x = 0; 
y = 0; 
w = 0.1; 
h = 0.2; 
};

class RscText { 
type = 0; 
idc = -1; 
style = 2; 
colorBackground = "#E5E5E5"; 
colorText = "#E5E5E5"; //{0, 1, 0.5, 1}
font = JTS_FontM_PM;
sizeEx = 0.08; 
x = 0; 
y = 0; 
w = 0.1; 
h = 0.2; 
};

class ButOK : RscButton { 
x = 0.23;	
y = 0.68; 
w = 0.06;	
h = 0.07; 
SizeEX = 0.05;
text = "OK" 
action = "[] spawn art";   
}; 
class Fon : RscText {  
x = 0;	
y = 0; 
w = 1;	
h = 1; 
text = ""; 
}; 

class ButClose : RscButton { 
x = 0.63;	
y = 0.68; 
w = 0.1;	
h = 0.06; 
SizeEX = 0.05;
text = "Close" 
action = "closeDialog 0";  
}; 
class Fon1 : RscText {  
x = 0;	
y = 0; 
w = 1;	
h = 1; 
text = ""; 
}; 


};