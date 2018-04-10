#define JTS_FontM_PM			"PuristaMedium"
#define art2

class okno2
{
	idd = -1;
	movingEnable =true;
	controlsBackground[] = {background};
	objects[] = { };
	controls[] = {
		header, 

edit11,
edit22,
edit3,
edit4,
edit5,
text1,
text2,
text3,
text4,
text5,
ButOK,
ButClose,

		
	};
	class header: RscText
	{

		idc = 101;
		x = 0.1; y = 0.14;
		w = 0.55; h = 0.04;
		style = ST_CENTER;
		SizeEX = 0.04;
		text = "Adjustment";
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
		x = 0.3; y = 0.38;
		w = 0.20; h = 0.05;
		style = ST_LEFT;
                SizeEX = 0.03;
		text ="Left";
	};
class text2: RscText
	{
		idc = 51;
		x = 0.39; y = 0.47;
		w = 0.30; h = 0.05;
		style = ST_LEFT;
                SizeEX = 0.03;
		text ="Undershoot";
	};
class text3: RscText
	{
		idc = 51;
		x = 0.53; y = 0.38;
		w = 0.30; h = 0.05;
		style = ST_LEFT;
                SizeEX = 0.03;
		text ="Right";
	};
class text4: RscText
	{
		idc = 51;
		x = 0.39; y = 0.32;
		w = 0.30; h = 0.05;
		style = ST_LEFT;
                SizeEX = 0.03;
		text ="Overshoot";
	};




class edit11: RscEdit
	{
		idc = 601;
		x = 0.2; y = 0.38;
		w = 0.10; h = 0.08;
                SizeEX = 0.04;
		text = "0";	
colorDisabled[] = {0.95,0.95,0.95,1};
	};


class edit22: RscEdit
	{
		idc = 602;
		x = 0.6; y = 0.38;
		w = 0.10; h = 0.08;
                SizeEX = 0.04;
		text = "0";	
colorDisabled[] = {0.95,0.95,0.95,1};
	};

class edit3: RscEdit
	{
		idc = 604;
		x = 0.4; y = 0.52;
		w = 0.10; h = 0.08;
                SizeEX = 0.04;
		text = "0";	
colorDisabled[] = {0.95,0.95,0.95,1};
	};


class edit4: RscEdit
	{
		idc = 603;
		x = 0.4; y = 0.24;
		w = 0.10; h = 0.08;
                SizeEX = 0.04;
		text = "0";	
colorDisabled[] = {0.95,0.95,0.95,1};
	};

class edit5: RscEdit
	{
		idc = 666;
		x = 0.7; y = 0.15;
		w = 0.10; h = 0.08;
                SizeEX = 0.04;
		text = "1";	
colorDisabled[] = {0.95,0.95,0.95,1};
	};
class text5: RscText
	{
		idc = 51;
		x = 0.7; y = 0.23;
		w = 0.30; h = 0.05;
		style = ST_LEFT;
                SizeEX = 0.03;
		text ="Corner";
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
action = "[] spawn art2";   
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