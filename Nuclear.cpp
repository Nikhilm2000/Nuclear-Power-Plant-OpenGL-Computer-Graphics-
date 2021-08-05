#include<stdio.h>
//#include<GL.h>
#include<stdlib.h>

#include<math.h>
#include<Windows.h>

void *font;
void *currentfont;
int fontType,flag=0;
int in_about;
int enter;
float i,j;
float x2,y2,r,r1=80,r2=5.0,r3=27.5,r4=6,r5=6,x,y,angle,angle_radians,r6=23,r7=2,r8=3,r9=6,r10=18,r11=10,r12=26,r13=14;
int k=0;
int p=0;

void conecting_pipe();

void delay(int x)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<i*1000;j++)
		;
	}
}

void fig1()
{

glBegin(GL_POINTS);
glVertex2f(255,138);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(255,138);
glVertex2f(265,158);
glVertex2f(245,158);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(255,138);
glVertex2f(277,135);
glVertex2f(263,118);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(255,138);
glVertex2f(231,133);
glVertex2f(247,118);
glEnd();


}
//glClearColor(0.0,0.0,0.0,0.0);

void fig2()
{
//glColor3f(0.7,0.4,0.3);
//glDisable(GL_DEPTH_TEST);
glBegin(GL_POINTS);
glVertex2f(255,138);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(255,138);
glVertex2f(275,150);
glVertex2f(275,126);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(255,138);
glVertex2f(250,115);
glVertex2f(234,130);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(255,138);
glVertex2f(253,160);
glVertex2f(236,149);
glEnd();

}

void fig3()
{

glBegin(GL_POINTS);
glVertex2f(255,138);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(255,138);
glVertex2f(266,117);
glVertex2f(244,117);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(255,138);
glVertex2f(277,144);
glVertex2f(261,160);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(255,138);
glVertex2f(249,159);
glVertex2f(233,144);
glEnd();
}


void fig4()
{

glBegin(GL_POINTS);
glVertex2f(255,138);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(255,138);
glVertex2f(235,128);
glVertex2f(235,148);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(255,138);
glVertex2f(276,144);
glVertex2f(257,161);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(255,138);
glVertex2f(257,115);
glVertex2f(275,127);
glEnd();
}
/*
void rot4()
{
	glDisable(GL_DEPTH_TEST);
	glColor3f(0.7,0.4,0.3);
	fig4();
	glColor3f(0.0,0.0,0.0);
	fig4();
glColor3f(0.3,0.1,0.1);
	fig1();
glEnable(GL_DEPTH_TEST);

}

void rot3()
{
	glDisable(GL_DEPTH_TEST);
	glColor3f(0.7,0.4,0.3);
	fig3();
	glColor3f(0.0,0.0,0.0);
	fig3();
glColor3f(0.3,0.1,0.1);
	fig4();
glEnable(GL_DEPTH_TEST);
flag=4;
}

void rot2()
{
	glDisable(GL_DEPTH_TEST);
	glColor3f(0.7,0.4,0.3);
	fig2();
	glColor3f(0.0,0.0,0.0);
	fig2();
glColor3f(0.3,0.1,0.1);
	fig3();
glEnable(GL_DEPTH_TEST);
flag=3;
}*/

void rot1()
{
glDisable(GL_DEPTH_TEST);
glColor3f(0.0,0.0,0.0);
	fig1();
	glFlush();
glColor3f(0.3,0.1,0.1);
fig1();
glFlush();
//delay(1000);
glColor3f(0.0,0.0,0.0);
	fig1();
	//glFlush();
	//delay(1000);
glColor3f(0.3,0.1,0.1);
	fig2();
	glFlush();
	//delay(1000);
glColor3f(0.0,0.0,0.0);
fig2();
//glFlush();
glColor3f(0.3,0.1,0.1);
fig3();
glFlush();
glColor3f(0.0,0.0,0.0);
fig3();
glFlush();
glColor3f(0.3,0.1,0.1);
fig4();
glFlush();
/*glColor3f(0.0,0.0,0.0);
fig4();
glFlush();
*/
	//delay(1000);

//glEnable(GL_DEPTH_TEST);
//flag=2;
}


void turbine()
{
	glLineWidth(6.0);
	glBegin(GL_LINE_LOOP);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 255 + r6* (float)cos(angle_radians);
			 y = 138 + r6* (float)sin(angle_radians);
			 glColor3f(0.3,0.1,0.1);

				glVertex2f(x,y);
		}
		glEnd();

			glLineWidth(6.0);
	glBegin(GL_LINE_STRIP);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 255 + r12* (float)cos(angle_radians);
			 y = 138 + r12* (float)sin(angle_radians);
			 glColor3f(0.3,0.1,0.1);

				glVertex2f(x,y);
		}
		glEnd();


glPointSize(6);

glBegin(GL_POINTS);
glVertex2f(255,138);
glEnd();
 fig4();

}

void generator()
{


	glColor3f(0.5,0.5,0.9);
glBegin(GL_POLYGON);
glVertex3i(338,120,0);
glColor3f(0.2,0.2,0.6);
glVertex3i(338,150,0);
glVertex3i(343,150,0);
glVertex3i(343,120,0);
glEnd();


glColor3f(0.5,0.5,0.9);
glBegin(GL_POLYGON);
glVertex3i(351,120,0);
glColor3f(0.2,0.2,0.6);
glVertex3i(351,150,0);
glVertex3i(356,150,0);
glVertex3i(356,120,0);
glEnd();

glColor3f(0.5,0.5,0.9);
glBegin(GL_POLYGON);
glVertex3i(364,120,0);
glColor3f(0.2,0.2,0.6);
glVertex3i(364,150,0);
glVertex3i(369,150,0);
glVertex3i(369,120,0);
glEnd();


	glColor3f(0.3,0.1,0.1);
glBegin(GL_POLYGON);

glVertex3i(375,144,0);
glVertex3i(277,144,0);
glVertex3i(277,137,0);
glVertex3i(375,137,0);
glEnd();

	glLineWidth(6.0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.6,0.6,0.6);
	glVertex2f(330,170);
	glVertex2f(385,170);
	glVertex2f(385,111);
	glVertex2f(330,111);
	glEnd();

glBegin(GL_POLYGON);

	glColor3f(0.2,0.2,0.6);
glVertex3i(330,111,0);
glVertex3i(330,120,0);

	glColor3f(0.5,0.5,0.9);
glVertex3i(375,120,0);
glVertex3i(375,111,0);
glEnd();


}
void connecting_pipe()
{
	glLineWidth(3.0);
glColor3f(0.6,0.3,0.2);
glBegin(GL_LINES);
glVertex2i(150,104);
glVertex2i(180,104);
glVertex2i(150,108);
glVertex2i(180,108);
glEnd();
glBegin(GL_LINES);
glVertex2i(185,100);
glVertex2i(185,50);
glVertex2i(185,50);
glVertex2i(224,50);
glVertex2i(189,100);
glVertex2i(189,54);
glVertex2i(189,54);
glVertex2i(224,54);
glEnd();
}



void points()
{
	glPointSize(4);
	glColor3f(0.4,0.4,0.4);
	glBegin(GL_POINTS);
	glVertex2f(243,134);
	glVertex2f(249,128);
	glVertex2f(246,122);
	glVertex2f(256,115);
	glVertex2f(251,110);
	glVertex2f(264,108);
	glVertex2f(272,104);
	glVertex2f(242,110);
	glVertex2f(247,100);
	glVertex2f(256,104);
	glVertex2f(230,100);
	glVertex2f(235,105);
	glVertex2f(239,110);
	glVertex2f(264,104);
	glVertex2f(249,123);
	glVertex2f(269,130);
	glVertex2f(264,128);
	glVertex2f(270,100);
	glVertex2f(274,104);
	glVertex2f(272,90);
	glVertex2f(275,130);
	glVertex2f(265,127);
	glVertex2f(255,133);
				glEnd();
}




void steam()
{




	//steam
	for(i=0;i<21;i=i+1)
		{

		glColor4f(0.4,0.4,0.4,1.0);
		glBegin(GL_QUADS);
		glVertex2f(120,185.5+i);
		glVertex2f(120,189.5+i);
		glColor4f(1.0,1.0,1.0,1.0);
		glVertex2f(124,189.5+i);
		glVertex2f(124,185.5+i);
		glEnd();
		glFlush();
		delay(200);
}

for(i=0;i<117;i=i+1)
		{

		glBegin(GL_QUADS);
		glColor4f(1.0,1.0,1.0,1.0);

		glVertex2f(124+i,210);
		glVertex2f(128+i,210);
		glColor4f(0.4,0.4,0.4,1.0);

		glVertex2f(128+i,206);
		glVertex2f(124+i,206);
		glEnd();
		glFlush();
		delay(200);
}
for(i=0;i<33;i=i+1)
		{


		glBegin(GL_QUADS);
		glColor4f(1.0,1.0,1.0,1.0);
		glVertex2f(240,206-i);
		glColor4f(0.4,0.4,0.4,1.0);
		glVertex2f(244,206-i);
		glVertex2f(244,202-i);
		glColor4f(1.0,1.0,1.0,1.0);
		glVertex2f(240,202-i );
		glEnd();
		glFlush();
		delay(200);
}
//glFlush();

glColor3f(0.4,0.4,0.4);
glBegin(GL_QUADS);
glVertex2f(240,170);
glVertex2f(244,170);
glVertex2f(252,159);
glVertex2f(232,159);


glEnd();
glFlush();

}


void points1()
{
	glPointSize(5.0);
glColor3f(0.0,0.0,1.0);
glBegin(GL_POINTS);
glVertex2f(46,124);
glVertex2f(44,130);
glVertex2f(48,135);
glVertex2f(49,126);
glVertex2f(42,140);
glVertex2f(46,139);
glVertex2f(54,128);
glVertex2f(38,148);
glVertex2f(32,143);
glVertex2f(57,124);
glVertex2f(61,138);
glVertex2f(51,134);
glEnd();
}

void points2()
{
	glPointSize(3.0);
	glColor3f(0.4,0.4,0.4);
	glBegin(GL_POINTS);
	glVertex2f(107,117);
	glVertex2f(109,120);
	glVertex2f(110,123);
	glVertex2f(106,125);
	glVertex2f(113,120);
	glVertex2f(113,131);
	glVertex2f(108,141);
	glVertex2f(111,130);
	glVertex2f(107,127);
	glVertex2f(111,131);
	glVertex2f(123,145);
	glVertex2f(131,145);
	glVertex2f(142,151);
	glVertex2f(133,148);
	glVertex2f(137,133);
	glVertex2f(139,157);
	glVertex2f(128,160);
	glVertex2f(146,163);
	glVertex2f(149,170);
	glVertex2f(150,124);
	glVertex2f(153,119);
	glVertex2f(148,136);
	glVertex2f(137,115);
	glVertex2f(149,127);
	glVertex2f(108,170);
	glVertex2f(104,145);
	glVertex2f(109,175);
	glVertex2f(111,156);
	glVertex2f(118,164);
	glVertex2f(127,166);
	glVertex2f(129,169);
	glVertex2f(126,132);
	glVertex2f(123,128);
	glVertex2f(126,140);
	glVertex2f(119,141);
	glVertex2f(127,151);
	glVertex2f(126,155);
	glVertex2f(121,171);
	glVertex2f(126,180);
	glVertex2f(133,185);
	glVertex2f(141,190);
	glVertex2f(138,176);

	glEnd();

}

void working()
{

		//control rods
glClearColor(0,0,0,0);
glColor3f(0.0,0.0,0.0);

	glBegin(GL_LINES);
	glVertex3i(48,122,1);
	glVertex3i(48,140,1);
	glVertex3i(50,122,1);
glVertex3i(50,140,1);
glVertex3i(52,122,1);
glVertex3i(52,140,1);
glEnd();

	glColor3f(0.6,0.6,0.4);

	glBegin(GL_LINES);
	glVertex2i(48,140);
	glVertex2i(48,185);
	glVertex2i(50,140);
glVertex2i(50,185);
glVertex2i(52,140);
glVertex2i(52,185);
glEnd();
delay(500);

	for(i=0,j=0;i<40,j<40;i=i+1,j=i+1)
		{


		glBegin(GL_QUADS);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(70+i,117);

		glVertex2f(74+i,117);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(74+i,121);

		glVertex2f(70+i,121);
		glEnd();

		glBegin(GL_QUADS);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(350-j,89);
		glVertex2f(280-j,89);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(280-j,85);
		glVertex2f(350-j,85);
		glEnd();
		glFlush();
		delay(200);
}

for(i=0,j=0;i<32,j<25;i=i+1,j=j+1)
		{


		glBegin(GL_QUADS);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(111,117+i);
	glColor3f(0.0,0.6,0.8);
		glVertex2f(114,117+i);

		glVertex2f(114,136+i);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(111,136+i);
		glEnd();


		glBegin(GL_QUADS);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(240,89-j);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(244,89-j);
		glVertex2f(244,85-j);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(240,85-j);
		glEnd();

		glFlush();
		delay(200);
}



for(i=0,j=0;i<25,j<25;i=i+1,j=j+1)
		{


		glBegin(GL_QUADS);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(111+i,160);
		glVertex2f(115+i,160);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(115+i,163.5);
		glVertex2f(111+i,163.5);
		glEnd();

		glBegin(GL_QUADS);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(244+j,65);
		glVertex2f(326+j,65);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(326+j,61);
		glVertex2f(244+j,61);
		glEnd();

		glFlush();
		delay(200);
}

for(i=0;i<112;i=i+1)
		{

		glBegin(GL_QUADS);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(135.2,160-i);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(138.9,160-i);
		glVertex2f(138.9,156-i);

glColor3f(1.0,1.0,1.0);
		glVertex2f(135.2,156-i);
		glEnd();
		glFlush();
		delay(200);
}
for(i=0;i<40;i=i+1)
		{


		glBegin(GL_QUADS);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(131-i,47.5);
		glVertex2f(135.3-i,47.5);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(135.3-i,44.5);
		glVertex2f(131-i,44.5);
		glEnd();
		glFlush();
		delay(200);
}
delay(500);
for(i=0;i<58;i=i+1)
		{

		glColor3f(1.0,1.0,1.0);
		glBegin(GL_QUADS);
		glVertex2f(80-i,47.5);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(80-i,44.5);


		glVertex2f(76-i,44.5);
		glColor3f(1.0,1.0,1.0);

		glVertex2f(76-i,47.5);
		glEnd();
		glFlush();
		delay(200);
}

for(i=0;i<92;i=i+1)
		{


		glBegin(GL_QUADS);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(16.5,47.5+i);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(19.5,47.5+i);

		glVertex2f(19.5,44.5+i);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(16.5,44.5+i);
		glEnd();
		glFlush();
		delay(200);
}

for(i=0;i<8;i=i+1)
		{

	glColor3f(0.0,0.6,0.8);
		glBegin(GL_QUADS);
		glVertex2f(19.5+i,138.5);
		glVertex2f(23+i,138.5);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(23+i,135.5);
		glVertex2f(19.5+i,135.5);
		glEnd();
		glFlush();
		delay(200);
}

points2();

steam();

glPushMatrix();
while(p<200)
{
flag=1;
if(flag==1)
{
rot1();
}
/*
if(flag==2)
{
rot2();
}

if(flag==3)
{
	rot3();
}
if(flag==4)
{
	rot4();
}
*/
p++;
if(p==199)glEnable(GL_DEPTH_TEST);
}
glPopMatrix();
//delay(1000);
points();
conecting_pipe();

}




void conecting_pipe()
{
//coolant water
for(i=0;i<31;i=i+1)
		{


		glBegin(GL_QUADS);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(215-i,54);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(215-i,50);
		glVertex2f(225-i,50);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(225-i,54);
		glEnd();
		glFlush();
		delay(200);
}

for(i=0;i<43;i=i+1)
		{


		glBegin(GL_QUADS);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(185,54+i);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(189,54+i);
		glVertex2f(189,58+i);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(185,58+i);
		glEnd();
		glFlush();
		delay(200);
}

delay(500);
for(i=0;i<28;i=i+1)
		{


		glBegin(GL_QUADS);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(180-i,108);
		glColor3f(0.0,0.6,0.8);
		glVertex2f(180-i,104);
		glVertex2f(176-i,104);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(176-i,108);
		glEnd();
		glFlush();
		delay(200);
}

}


void myMouse(int btn,int state,int x,int y);
 void myMouse(int btn,int state,int x,int y)

 {
 }
 void drawstring(float x,float y,float z,char *string)
{
	char *c;
	glRasterPos3f(x,y,z);

	for(c=string;*c!='\0';c++)
	{	glColor3f(0.0,1.0,1.0);
		glutBitmapCharacter(currentfont,*c);
	}
}

void setFont(void *font)
{
	currentfont=font;
}




void display_nuclear_power_plant()
{

	glLineWidth(6.0);
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);


	glBegin(GL_LINE_STRIP);
glColor3f(0.6,0.6,0.6);
	glVertex2i(10,200);
	glColor3f(0.1,0.3,0.0);
	 glVertex2i(10,30);
		 glVertex2i(170,30);
glColor3f(0.6,0.6,0.6);

	 glVertex2i(170,200);
     glEnd();
	 //draw semicircle


glColor3f(0.6,0.6,0.6);
		glBegin(GL_LINE_STRIP);
		for(angle=0; angle<=180; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 90 + r1* (float)cos(angle_radians);
			 y = 200 + r1* (float)sin(angle_radians);
				glLineWidth(6.0);
			 glVertex2f(x,y);
		}

		glEnd();
	 //draw 1st inner container
		glColor3f(1.0,1.0,1.0);
setFont(GLUT_BITMAP_HELVETICA_18);
drawstring(42.0,98.0,0.0,"core");

	glColor3f(0.6,0.6,0.6);

		glBegin(GL_LINE_LOOP);
	 glVertex2i(25,150);
	 glVertex2i(25,75);
	 glVertex2i(75,75);
	 glVertex2i(75,150);
     glEnd();



	glColor3f(0.6,0.6,0.6);
	glBegin(GL_LINES);
	 glVertex2i(100,100);
	 glVertex2i(100,170);

	 glVertex2i(155,100);

	 glVertex2i(155,170);

     glEnd();

		glBegin(GL_LINE_STRIP);
		for(angle=0; angle<=180; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 127.5 + r3* (float)cos(angle_radians);
			 y = 170 + r3* (float)sin(angle_radians);
				glLineWidth(6.0);
			 glVertex2f(x,y);
		}

		glEnd();
		glBegin(GL_LINE_STRIP);
		for(angle=180; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 127.5 + r3* (float)cos(angle_radians);
			 y = 100 + r3* (float)sin(angle_radians);
				glLineWidth(6.0);
			 glVertex2f(x,y);
		}

		glEnd();

		//core container
	 glLineWidth(5.0);
		glColor3f(0.6,0.6,0.6);
	glBegin(GL_LINE_LOOP);
	 glVertex2i(42,105);

	 glVertex2i(57,105);
	 glVertex2i(57,120);
	  glVertex2i(42,120);
     glEnd();

	 //draw core
	 	glBegin(GL_POLYGON);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 49 + r2* (float)cos(angle_radians);
			 y = 112.5 + r2* (float)sin(angle_radians);
			 glColor3f(1.0,0.4,0.2);
				glLineWidth(6.0);
				glVertex2f(x,y);
		}
		glEnd();

		//2nd outer container
	 glLineWidth(6.0);
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_LINE_LOOP);
	 glVertex2i(220,170);
	 glColor3f(0.1,0.3,0.0);

	 glVertex2i(220,30);
	  glVertex2i(330,30);
	  glColor3f(0.6,0.6,0.6);
	  glVertex2i(330,220);
     glEnd();
//pipe frm cont1
	 glLineWidth(3.0);
	 glColor3f(0.6,0.3,0.2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(30,135);
	glVertex2i(20,135);
	glVertex2i(20,48);
glVertex2i(80,48);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2i(80,44);
glVertex2i(16,44);
glVertex2i(16,139);
glVertex2i(30,139);
glEnd();
//pipe frm con2
glColor3f(0.6,0.3,0.2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(70,117);
	glVertex2i(115,117);
	glVertex2i(115,160);
glVertex2i(135,160);
glVertex2i(135,48);
glVertex2i(92,48);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2i(92,44);
glVertex2i(139,44);
glVertex2i(139,164);
glVertex2i(111,164);
glVertex2i(111,121);
glVertex2i(70,121);
glEnd();

glColor3f(0.6,0.3,0.2);
//pump1
	glBegin(GL_POLYGON);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 86 + r4* (float)cos(angle_radians);
			 y = 46 + r4* (float)sin(angle_radians);

				glVertex2f(x,y);
		}
		glEnd();

glColor4f(0.0,0.0,0.0,1.0);
glLineWidth(6.0);
		glBegin(GL_LINES);
		glVertex2i(80,48);
		glVertex2i(92,44);
		glVertex2i(80,44);
		glVertex2i(92,48);
		glEnd();
//upper pipe
		glLineWidth(3.0);
		glColor3f(0.6,0.3,0.2);
	glBegin(GL_LINES);
	glVertex2i(240,170);
    glVertex2f(240,178);
    glVertex2f(240,180);
	glVertex2i(240,206);
    glVertex2i(240,206);
	glVertex2i(124,206);
	glVertex2i(124,206);
	glVertex2f(124,198);
	glVertex2f(124,196);
glVertex2i(124,185);
glEnd();
glBegin(GL_LINES);
glVertex2i(120,185);
glVertex2i(120,195);
glVertex2i(120,197);
glVertex2i(120,210);
glVertex2i(120,210);
glVertex2i(244,210);
glVertex2i(244,210);
glVertex2i(244,182);
glVertex2i(244,180);
glVertex2i(244,170);
glEnd();
//coolant pipe
glBegin(GL_LINES);
glVertex2i(350,85);
glVertex2f(331,85);
glVertex2f(329,85);
glVertex2i(244,85);
glVertex2i(244,85);
glVertex2i(244,65);
glVertex2i(244,65);
glVertex2i(329,65);
glVertex2i(331,65);
glVertex2i(350,65);
glEnd();
glBegin(GL_LINES);
glVertex2i(350,89);
glVertex2i(331,89);

glVertex2i(329,89);
	glVertex2i(240,89);
	glVertex2i(240,89);
	glVertex2i(240,61);
	glVertex2i(240,61);
	glVertex2i(329,61);
	glVertex2i(331,61);
glVertex2i(350,61);
glEnd();
//control rods
glColor3f(0.6,0.6,0.4);

	glBegin(GL_LINES);
	glVertex2i(48,120);
	glVertex2i(48,165);
	glVertex2i(50,120);
glVertex2i(50,165);
glVertex2i(52,120);
glVertex2i(52,165);
glEnd();

glColor3f(0.3,0.1,0.1);
setFont(GLUT_BITMAP_HELVETICA_18);
drawstring(42.0,98.0,0.0,"core");

turbine();
generator();
connecting_pipe();
//pump2
glColor3f(0.6,0.3,0.2);

	glBegin(GL_POLYGON);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 186 + r5* (float)cos(angle_radians);
			 y = 106 + r5* (float)sin(angle_radians);
			 	glLineWidth(6.0);
				glVertex2f(x,y);
		}
		glEnd();

		/*glBegin(GL_LINES);
		glVertex2f(181,109);
		glVertex2f(191.5,102);
		glVertex2f(181,101.5);
		glVertex2f(190,109.5 );
		glEnd();
*/

glColor3f(1.0,1.0,1.0);
setFont(GLUT_BITMAP_HELVETICA_18);
drawstring(60.0,250.0,0.0,"constraint structure");

 glColor3f(1.0,1.0,1.0);
setFont(GLUT_BITMAP_HELVETICA_18);
drawstring(54.0,160.0,0.0,"control rods");


 glColor3f(1.0,1.0,1.0);
setFont(GLUT_BITMAP_HELVETICA_18);
drawstring(30.0,60.0,0.0,"reactor vessel");


glColor3f(1.0,1.0,1.0);
setFont(GLUT_BITMAP_HELVETICA_18);
drawstring(250.0,105.0,0.0,"turbine");

 glColor3f(1.0,1.0,1.0);
setFont(GLUT_BITMAP_HELVETICA_18);
drawstring(180.0,120.0,0.0,"pump");
glColor3f(1.0,1.0,1.0);
setFont(GLUT_BITMAP_HELVETICA_18);
drawstring(180.0,215.0,0.0,"steam line");

glColor3f(1.0,1.0,1.0);
setFont(GLUT_BITMAP_HELVETICA_18);
drawstring(102.0,170.0,0.0,"steam generator");

glColor3f(1.0,1.0,1.0);
setFont(GLUT_BITMAP_HELVETICA_18);
drawstring(80.0,55.0,0.0,"pump");

glColor3f(1.0,1.0,1.0);
setFont(GLUT_BITMAP_HELVETICA_18);
drawstring(290.0,150.0,0.0,"generator");


glColor3f(1.0,1.0,1.0);
setFont(GLUT_BITMAP_HELVETICA_18);
drawstring(248.0,70.0,0.0,"condensor cooling water");

//blended water

		glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(26,122);
		glColor3f(0.0,0.6,0.8);
	glVertex2f(26,76);
	glVertex2f(74,76);
		glColor3f(0.0,0.0,0.5);
	glVertex2f(74,122);
	glEnd();
//blended container
	glColor3f(0.0,0.6,0.8);

	glBegin(GL_POLYGON);
	 glVertex2i(100,100);
	 glVertex2i(155,100);
	 glColor3f(0.0,0.0,1.0);
	 glVertex2i(155,113);

	 glVertex2i(100,113);
	  glEnd();


		glColor3f(0.0,0.6,0.8);

		glBegin(GL_POLYGON);
		for(angle=180; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 127.5 + r3* (float)cos(angle_radians);
			 y = 100 + r3* (float)sin(angle_radians);
				glLineWidth(6.0);
			 glVertex2f(x,y);
		}

		glEnd();


		//glFlush();
		//water in cont2

		glBegin(GL_POLYGON);
	glColor3f(0.0,0.6,0.8);
		glVertex2f(221,31);
		glVertex2f(329,31);
		glColor3f(0.0,0.0,1.0);
		glVertex2f(329,57);
		glVertex2f(221,57);
		glEnd();
glFlush();
delay(1000);
points1();
delay(1000);
working();

glFlush();

}






	void display_about(void)
{
	glClearColor(0.7,0.3,0.1,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.0,1.0,1.0);
	drawstring(140.0,275.0,0.0,"DEPARTMENT OF COMPUTER SCIENCE");
setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.0,1.0,1.0);
	drawstring(105,245,0.0,"CG MINI PROJECT ON WORKING OF NUCLEAR POWER PLANT");
setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,1.0,1.0);
	drawstring(190,230,0,"USING OPEN GL");
	glColor3f(0.0,1.0,1.0);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(0.0,1.0,1.0);


glColor3f(0.0,0.0,0.0);
	drawstring(300,15,0.0,"RIGHT CLICK for Menu");

	glFlush();
}

	void reactions(void)
	{
	glClearColor(0.0,0.0,0.0,0.0);

	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	//glDisable(GL_DEPTH_TEST);


	glPointSize(10.0);
	glFlush();
			glBegin(GL_POLYGON);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 200 + r8* (float)cos(angle_radians);
			 y = 270 + r8* (float)sin(angle_radians);
			 	glColor3f(0.8,0.3,0.2);
				glVertex2f(x,y);
		}
		glEnd();
			glBegin(GL_POLYGON);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 200 + r8* (float)cos(angle_radians);
			 y = 92 + r8* (float)sin(angle_radians);
			 	glColor3f(0.8,0.3,0.2);
				glVertex2f(x,y);
		}
		glEnd();
		glBegin(GL_POLYGON);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 178 + r8* (float)cos(angle_radians);
			 y = 114 + r8* (float)sin(angle_radians);
			 	glColor3f(0.8,0.3,0.2);
				glVertex2f(x,y);
		}
		glEnd();
			glBegin(GL_POLYGON);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 222  + r8* (float)cos(angle_radians);
			 y = 114 + r8* (float)sin(angle_radians);
			 	glColor3f(0.8,0.3,0.2);
				glVertex2f(x,y);
		}
		glEnd();



	glColor3f(0.0,1.0,0.6);
glLineWidth(6.0);
	glBegin(GL_LINES);
glVertex2f(200.0,267.0);
glVertex2f(200.0,201.0);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(198.0,204.0);
glVertex2f(200.0,198.0);
glVertex2f(202.0,204.0);
glEnd();

	glBegin(GL_LINES);
glVertex2f(91.0,180.0);
glVertex2f(182.0,180.0);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(94.0,183.0);
glVertex2f(91.0,180.0);
glVertex2f(94.0,177.0);

glEnd();


	glBegin(GL_LINES);
glVertex2f(218.0,180.0);
glVertex2f(306.0,180.0);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(302.0,183.0);
glVertex2f(306.0,180.0);
glVertex2f(302.0,177.0);
glEnd();

	glBegin(GL_LINES);
glVertex2f(200.0,162.0);
glVertex2f(200.0,97.0);
glVertex2f(200.0,162.0);
glVertex2f(220.0,117.0);
glVertex2f(200.0,162.0);
glVertex2f(180.0,117.0);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(197.0,101.0);
glVertex2f(200.0,96.0);
glVertex2f(203.0,101.0);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(177.0,119.0);
glVertex2f(180.0,117.0);
glVertex2f(183.0,117.0);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(217.0,117.0);
glVertex2f(220.0,117.0);
glVertex2f(223.0,119.0);
glEnd();



glBegin(GL_POLYGON);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 200 + r10* (float)cos(angle_radians);
			 y = 180 + r10* (float)sin(angle_radians);
			 	glColor3f(0.6,0.1,0.9);
				glVertex2f(x,y);
		}
glEnd();
/*glColor3f(0.6,0.1,0.9);
		glBegin(GL_POLYGON);
		glVertex2f(242,155);
			glVertex2f(198,198);
				glVertex2f(183,189);
glEnd();
*/for(r=17;r>=0;r--)
{
glBegin(GL_LINE_LOOP);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 200 + r* (float)cos(angle_radians);
			 y = 180 + r* (float)sin(angle_radians);
			 	glColor3f(0.6,0.1,0.9);
				glVertex2f(x,y);
		}
glEnd();
}

glBegin(GL_POLYGON);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 320 + r13* (float)cos(angle_radians);
			 y = 180 + r13* (float)sin(angle_radians);
			 	glColor4f(1.0,0.0,0.0,0.6);
				glVertex2f(x,y);
		}
glEnd();
for(r13=13;r13>=0;r13--)
{
glBegin(GL_LINE_LOOP);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 320 + r13* (float)cos(angle_radians);
			 y = 180 + r13* (float)sin(angle_radians);
			 	glColor4f(1.0,0.0,0.0,0.6);
				glVertex2f(x,y);
		}
glEnd();
}
glBegin(GL_POLYGON);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 80 + r11* (float)cos(angle_radians);
			 y = 180 + r11* (float)sin(angle_radians);
			 	glColor4f(0.0,1.0,0.0,0.5);
				glVertex2f(x,y);
		}
        glEnd();

for(r11=9;r11>=0;r11--)
{
glBegin(GL_LINE_LOOP);
		for(angle=0; angle<=360; angle=angle+5)
		{
			 angle_radians = angle * (float)3.14159 / (float)180;
			 x = 80 + r11* (float)cos(angle_radians);
			 y = 180 + r11* (float)sin(angle_radians);
			 	glColor4f(0.0,1.0,0.0,0.5);
				glVertex2f(x,y);
		}
        glEnd();

}

setFont(GLUT_BITMAP_HELVETICA_18);
glColor3f(1.0,1.0,1.0);
	drawstring(210,160,0.0,"U235");
setFont(GLUT_BITMAP_HELVETICA_18);
glColor3f(1.0,1.0,1.0);
	drawstring(190,290,0.0,"neutron");
	setFont(GLUT_BITMAP_HELVETICA_18);
glColor3f(1.0,1.0,1.0);
	drawstring(190,280,0.0,"(thermal)");
	setFont(GLUT_BITMAP_HELVETICA_18);
glColor3f(1.0,1.0,1.0);
	drawstring(70,155,0.0,"Fission product1");
	setFont(GLUT_BITMAP_HELVETICA_18);
glColor3f(1.0,1.0,1.0);
	drawstring(70,145,0.0,"Light Nucleus");
	setFont(GLUT_BITMAP_HELVETICA_18);
glColor3f(1.0,1.0,1.0);
	drawstring(306,155,0.0,"Fission product2");
	setFont(GLUT_BITMAP_HELVETICA_18);
glColor3f(1.0,1.0,1.0);
	drawstring(306,145,0.0,"Heavy Nucleus");
	setFont(GLUT_BITMAP_HELVETICA_18);
glColor3f(1.0,1.0,1.0);
	drawstring(165,80,0.0,"About 3 neutrons per fission");

		glColor3f(1.0,1.0,1.0);
glPointSize(10.0);
glBegin(GL_POINTS);
glVertex2f(10,52);
glEnd();
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);

glColor3f(1.0,1.0,1.0);
	drawstring(20,50,0.0,"neutrons produced can initiate further fission of U235, making the reaction to be");

	setFont(GLUT_BITMAP_TIMES_ROMAN_24);

glColor3f(1.0,1.0,1.0);
drawstring(20,40,0,"self sustainable chain reaction");

setFont(GLUT_BITMAP_TIMES_ROMAN_24);

glColor3f(0.0,0.0,1.0);
drawstring(130,20,0,"NUCLEAR FISSION REACTION");

glFlush();
	}




	/*void key(unsigned char key,int x,int y)
{
if(key==13 && enter==1)
	{

reactions();
	}

}*/


	void display_operations(void)
{
	glClearColor(0.6,0.6,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

	glVertex2i(80,230);
	glVertex2i(82,230);
	glVertex2i(82,232);
	glVertex2i(80,232);
	glEnd();

	drawstring(90.0,230.0,0.0,"Nuclear powerplant is a power generating unit in which nuclear energy\n");
		glColor3f(0.0,0.0,0.0);
	drawstring(90.0,220.0,0.0,"is converted to electrical energy.");

setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

	glVertex2i(80,200);
	glVertex2i(82,200);
	glVertex2i(82,202);
	glVertex2i(80,202);
	glEnd();

	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.0,0.0,0.0);
	drawstring(90.0,200.0,0.0,"Turbo Generator made to rotate from heat generated by nuclear fission ");
		glColor3f(0.0,0.0,0.0);
	drawstring(90,190,0.0,"reactions of radio active elements such as Uranium-235,plutonium");
		glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

	glVertex2i(80,170);
	glVertex2i(82,170);
	glVertex2i(82,172);
	glVertex2i(80,172);
	glEnd();


setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	 glColor3f(0.0,0.0,0.0);
	drawstring(90,170,0.0,"Radioactive elements splits when bombarded by neutron.Reactions become");
	glColor3f(0.0,0.0,0.0);
	drawstring(90,160,0.0,"self sustaining chain reaction under controlled conditions.");
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

	glVertex2i(80,140);
	glVertex2i(82,140);
	glVertex2i(82,142);
	glVertex2i(80,142);
	glEnd();

setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.0,0.0,0.0);
	drawstring(90,140,0.0,"Heat Energy generated is transfered to ordinary water and carried away");
	glColor3f(0.0,0.0,0.0);
	drawstring(90,130,0.0,"from reactor as steam.");
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

	glVertex2i(80,110);
	glVertex2i(82,110);
	glVertex2i(82,112);
	glVertex2i(80,112);
	glEnd();

setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.0,0.0,0.0);
	drawstring(90,110,0.0,"Steem feeds the Turbo Generator thus making it to rotate and");

glColor3f(0.0,0.0,0.0);
drawstring(90,100,0.0,"power is generated.");


/*setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(0.0,0.0,0.0);
	drawstring(250,15,0.0,"Press ENTER to See Internal Chain Reaction");
*/
delay(1000);
//reactions();


	glFlush();


}


/*
void ext()
{
	glClearColor(0.0,0.4,0.6,0.0);
	  setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.0,0.0,0.0);
	drawstring(100,110,0.0,"THANK YOU");
	delay(2000);
}
*/

void options(int id)
{
	int in_about;
 switch(id)
 {

  case 1:
	  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	  in_about=1;
	  display_about();
	  break;
  case 2:
	  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	 // glColor3f(0.6,0.3,0.0);
	  display_nuclear_power_plant();
      break;
  case 3:
	  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	 display_operations();
	  break;
  case 4:glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	  glColor3f(0.6,0.3,0.0);
	  reactions();
	  break;

  case 5:
	  exit(0);
 }
 }

void disp(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	 display_about();
	 glFlush();
//	glutSwapBuffers();
//glutPostRedisplay();

}

void init(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
  glEnable(GL_DEPTH_TEST);
	gluOrtho2D(0.0,400.0,0.0,300.0);
//	glPointSize(6.0);
//		glLineWidth(4.0);
	//	glMatrixMode(GL_PROJECTION);
	//	glLoadIdentity();


}
int main()
{
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(400,300);
	glutCreateWindow("nuclear plant");
glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);

   init();
   enter=1;
   glutCreateMenu(options);
   glutAddMenuEntry("About the Project",1);
   glutAddMenuEntry("working of power plant",2);

    glutAddMenuEntry("About nuclear power plant",3);
	 glutAddMenuEntry("internal reactions",4);
   glutAddMenuEntry("Quit",5);

   glutMouseFunc(myMouse);

   glutAttachMenu(GLUT_RIGHT_BUTTON);
//  glutAttachMenu(GLUT_LEFT_BUTTON);
//  	glutReshapeFunc(myReshape);
	glutDisplayFunc(disp);
//	 glutKeyboardFunc(key);

	glutMainLoop();
}
