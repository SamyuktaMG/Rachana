#include<windows.h>
#include <GL/glut.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int k,y,i;

void myinit(void);

void circle(GLint theta1,GLint theta2,GLfloat x,GLfloat y,GLfloat radius)
{
glBegin(GL_POLYGON);
for(int i=theta1;i<theta2;i++)
{
float degInRadian=i*(3.14159/180);
glVertex2f(cos(degInRadian)*radius+x,sin(degInRadian)*radius+y);
}
glEnd();
}

void penta(GLint a,GLint b,GLint c,GLint d,GLint e,GLint f)
{
glPointSize(2.0);
glBegin(GL_POLYGON);
glVertex2f(a,b);
glVertex2f(c,d);
glVertex2f(c,e);
glVertex2f(a,f);
glVertex2f(a,c);
glEnd();
}

void rect(GLint a,GLint b,GLint c,GLint d)
{
glPointSize(2.0);
glBegin(GL_POLYGON);
glVertex2f(a,b);
glVertex2f(c,b);
glVertex2f(c,d);
glVertex2f(a,d);
glEnd();
}

void pentagon(GLint a,GLint b,GLint c,GLint d,GLint e,GLint f)
{
glPointSize(2.0);
glBegin(GL_POLYGON);
glVertex2f(a,b);
glVertex2f(c,b);
glVertex2f(c,d);
glVertex2f(e,f);
glVertex2f(a,d);
glEnd();
}

void satellite()
{
glColor3f(0.871, 0.722, 0.529);
glBegin(GL_POLYGON);
glVertex2f(1000,530);
glVertex2f(1000,580);
glVertex2f(950,555);
glEnd();
glColor3f(0.737, 0.561, 0.561);
rect(600+400,530,630+400,580);
glColor3f(10.184, 0.310, 0.310);
rect(630+400,545,660+400,565);
glColor3f(0.184, 0.310, 0.310);
rect(610+400,580,620+400,610);
glColor3f(0.184, 0.310, 0.310);
rect(610+400,500,620+400,530);
}

void init_2()
{
glClearColor(0.98,0.922,0.843,0);
glColor3f(1,1,0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);
}

void moon()
{
glColor3f(0.863, 0.863, 0.863);
circle(0,360,650,-300,500);
glColor3f(0.7, 0.7, 0.7);
circle(0,360,500,50,40);
glColor3f(0.7, 0.7, 0.7);
circle(0,360,750,125,25);
glColor3f(0.7, 0.7, 0.7);
circle(0,360,850,90,30);
glColor3f(0.7, 0.7, 0.7);
circle(0,360,600,100,30);
}

void comet()
{
//circle1
glColor3f(1.000, 0.647, 0.000);
circle(0,360,1130,650,20);
//circle2
glColor3f(0.647, 0.165, 0.165);
circle(0,360,1125,650,20);
//circle3
glColor3f(0.698, 0.133, 0.133);
circle(0,360,1170,640,3);
//circle4
glColor3f(0.698, 0.133, 0.133);
circle(0,360,1170,650,3);
//circle5
glColor3f(0.698, 0.133, 0.133);
circle(0,360,1170,660,3);
//circle6
glColor3f(0.698, 0.133, 0.133);
circle(0,360,1160,640,4);
//circle7
glColor3f(0.698, 0.133, 0.133);
circle(0,360,1160,660,4);
//circle8
glColor3f(0.698, 0.133, 0.133);
circle(0,360,1160,650,4);
//circle9
glColor3f(0.698, 0.133, 0.133);
circle(0,360,1180,640,2);
//circle10
glColor3f(0.698, 0.133, 0.133);
circle(0,360,1180,660,2);
//circle11
glColor3f(0.698, 0.133, 0.133);
circle(0,360,1180,650,2);
//circle12
glColor3f(0.698, 0.133, 0.133);
circle(0,360,1185,655,2);
//circle13
glColor3f(0.698, 0.133, 0.133);
circle(0,360,1185,645,2);
//circle14
glColor3f(0.698, 0.133, 0.133);
circle(0,360,1188,650,1);
}

void rover1( )
{
glColor3f(1.0, 0.0, 1.0);
rect(100+400,55,190+400,75);
glColor3f(1.0, 0.0, 1.0);
penta(190+400,55,250+400,100,120,75);
glColor3f(1.0, 0.0, 1.0);
penta(160+400,120,250+400,119,120,121);
glColor3f(1.0, 0.0, 1.0);
penta(100+400,76,160+400,121,221,176);
glColor3f(0.0, 0.0, 1.0);
circle(0,360,190+400,55,17);
glColor3f(0.0, 0.0, 1.0);
circle(0,360,103+400,55,17);
glColor3f(0.0, 0.0, 1.0);
circle(0,360,250+400,95,12);
}

void earth()
{
glColor3f(0.000, 0.000, 0.804);
circle(0,360,160,450,150);
glColor3f(      0.133, 0.545, 0.133);//earth
circle(0,360,30,450,10);
glColor3f(      0.133, 0.545, 0.133);
circle(0,360,124,455,40);
glColor3f(      0.133, 0.545, 0.133);
circle(0,360,126,460,40);
glColor3f(      0.133, 0.545, 0.133);
circle(0,360,145,460,10);
glColor3f(      0.133, 0.545, 0.133);
circle(0,360,165,465,37);
glColor3f(      0.133, 0.545, 0.133);
circle(0,360,125,467,27);
glColor3f(      0.133, 0.545, 0.133);
circle(0,360,158,469,17);
glColor3f(      0.133, 0.545, 0.133);
circle(0,360,258,439,17);
glColor3f(      0.133, 0.545, 0.133);
circle(0,360,250,420,7);//earthends
glColor3f(      0.133, 0.545, 0.133);
circle(0,360,240,380,17);//earthends
glColor3f(      0.133, 0.545, 0.133);
circle(0,360,245,405,17);//earthends
glColor3f(      0.133, 0.545, 0.133);
circle(0,360,250,550,17);//earthends
glColor3f(      0.133, 0.545, 0.133);
circle(0,360,257,457,27);
}

void camera()
{
glColor3f(.234, 0.045, .678);
rect(140,160,220,170);
glColor3f(0.0, 1.0, 0.0);
circle(0,360,233,165,15);
glColor3f(.234, 0.045, .678);
rect(246,160,258,168);
glColor3f(.234, 0.0, 0.678);
rect(258,155,262,175);
}

void camera1()
{
glColor3f(0.234, 0.045, 0.678);
rect(140+400,160,220+400,170);
glColor3f(0.0, 1.0, 0.0);
circle(0,360,233+400,165,15);
glColor3f(.234, 0.045, .678);
rect(246+400,160,258+400,168);
glColor3f(.234, 0.0, 0.678);
rect(258+400,155,262+400,175);
}

void camera2()
{
glColor3f(0.234, 0.045, 0.678);
rect(140+400,160+35,220+400,170+35);
glColor3f(0.0, 1.0, 0.0);
circle(0,360,233+400,165+35,15);
glColor3f(.234, 0.045, .678);
rect(246+400,160+35,258+400,168+35);
glColor3f(.234, 0.0, 0.678);
rect(258+400,155+35,262+400,175+35);
}

void rover( )
{
glColor3f(1.0, 0.0, 1.0);
rect(100,55,190,75);
glColor3f(1.0, 0.0, 1.0);
penta(190,55,250,100,120,75);
glColor3f(1.0, 0.0, 1.0);
penta(160,120,250,119,120,121);
glColor3f(1.0, 0.0, 1.0);
penta(100,76,160,121,221,176);
glColor3f(0.0, 0.0, 1.0);
circle(0,360,190,55,17);
glColor3f(0.0, 0.0, 1.0);
circle(0,360,103,55,17);
glColor3f(0.0, 0.0, 1.0);
circle(0,360,250,95,17);
}

void stars1()
{
glColor3ub(255,255,255);
glPointSize(1.5);
glBegin(GL_POINTS);
for(int i=0;i<1000;i++)
{
int x = rand();
int y = rand();
x = x%100;
y = y%100;
glVertex2f(x,y);
}
glEnd();
}

void quadri(GLint a,GLint b,GLint c,GLint d,GLint e,GLint f,GLint g)
{
glPointSize(2.0);
glBegin(GL_POLYGON);
glVertex2f(a,b);
glVertex2f(c,d);
glVertex2f(c,e);
glVertex2f(f,e);
glVertex2f(f,d);
glVertex2f(g,b);
glEnd();
}

void plane(GLint a,GLint b,GLint c,GLint d,GLint e,GLint f)
{
glPointSize(2.0);
glBegin(GL_POLYGON);
glVertex2f(a,b);
glVertex2f(c,b);
glVertex2f(d,e);
glVertex2f(f,e);
glEnd();
}

void triangle(GLint a,GLint b,GLint c,GLint d,GLint e,GLint f)
{
glPointSize(2.0);
glBegin(GL_POLYGON);
glVertex2f(a,b);
glVertex2f(c,d);
glVertex2f(e,f);
glEnd();
}

void quad(GLint a,GLint b,GLint c,GLint d,GLint e,GLint f,GLint g,GLint h)
{
glPointSize(2.0);
glBegin(GL_POLYGON);
glVertex2f(a,b);
glVertex2f(c,d);
glVertex2f(e,f);
glVertex2f(g,h);
glEnd();
}

void drawText( float x, float y, int r, int g, int b, const char *string )
{
int j = strlen( string );
glColor3f( r, g, b );
glRasterPos2f( x, y );
for( int i = 0; i < j; i++ )
{
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24, string[i] );
}
}

void plane_rocket()
{
glColor3f(0.710, 0.710, 0.710);
plane(950,85,1170,265,300,125);
}

void clouds(int i)
{
glColor3f(1.0,1.0,1.0);
circle(0.0,360.0,700.0+4*i,600.0,40.0);
circle(0.0,360.0,750.0+4*i,620.0,40.0);
circle(0.0,360.0,760.0+4*i,600.0,40.0);
circle(0.0,360.0,810.0+4*i,600.0,40.0);
}

void clouds2(int i)
{
glColor3f(1.0,1.0,1.0);
circle(0.0,360.0,540.0-4*i,600.0,40.0);
circle(0.0,360.0,590.0-4*i,620.0,40.0);
circle(0.0,360.0,600.0-4*i,600.0,40.0);
circle(0.0,360.0,660.0-4*i,600.0,40.0);
}

void background_2()
{
glColor3f(0.4,1.0,0.4);
quad(0.0,0.0,0.0,400.0,1300.0,400.0,1300.0,0.0);
}

void boost(int j)
{
glColor3f(1.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(190,295+j);
glVertex2f(159,255+j);
glVertex2f(180,270+j);
glVertex2f(200,255+j);
glVertex2f(220,270+j);
glVertex2f(240,255+j);
glVertex2f(260,270+j);
glVertex2f(283,255+j);
glVertex2f(250,295+j);
glEnd();
}

void sun()
{
glColor3f(1.0,1.0,0.0);
circle(0.0,360.0,680.0,630.0,45);
}

void platform()
{
glColor3f(1.0,1.0,1.0);
rect(247,295,273,600);
glColor3f(1.0,1.0,1.0);
rect(169,295,195,600);
glColor3f(1.0,1.0,0.5);
rect(169,600,273,630);
glColor3f(0.5,1.0,0.5);
pentagon(169,630,273,642,221,652);
glColor3f(0.416,0.353,0.804);
rect(195,405,247,420);
glColor3f(0.416,0.353,0.804);
rect(195,360,247,375);
glColor3f(0.416,0.353,0.804);
rect(195,315,247,330);
glColor3f(0.416,0.353,0.804);
rect(195,450,247,465);
glColor3f(0.416,0.353,0.804);
rect(195,495,247,510);
glColor3f(0.416,0.353,0.804);
rect(195,540,247,555);
}

void launcher_left()
{
glColor3f(1.0,1.0,1.0);
triangle(286,441,289,409,315,442);
glColor3f(0.184, 0.310, 0.310);
quad(289,409,315,442,522,322,502,289);
glColor3f(0.502, 0.502, 0.502);
quad(522,322,502,289,525,275,546,309);
glColor3f(1.0,1.0,1.0);
triangle(528,280,565,277,542,302);
}

void launcher_right()
{
glColor3f(1.0,1.0,1.0);
triangle(491-25,656-25,499-25,628-25,520-25,655-25);
glColor3f(0.184, 0.310, 0.310);
quad(499-25,628-25,520-25,655-25,699-25,546-25,674-25,512-25);
glColor3f(0.502, 0.502, 0.502);
quad(699-25,546-25,674-25,512-25,700-25,495-25,723-25,532-25);
glColor3f(1.0,1.0,1.0);
triangle(703-25,500-25,718-25,524-25,740-25,491-25);
}

void rocket_slide3()
{
glColor3f(1.0,1.0,1.0);
triangle(361-25,587-25,390-25,506-25,452-25,588-25);
glColor3f(0.827, 0.827, 0.82);
quad(390-25,506-25,452-25,588-25,564-25,511-25,503-25,432-25);
glColor3f(0.933, 0.910, 0.667);
quad(564-25,511-25,503-25,432-25,595-25,374-25,652-25,455-25);
}

void stars()
{
int i,j;
for(i=0;i<4000;i=i+160)
{
for(j=1;j<4000;j=j+120)
{
glColor3f(1.0, 1.0, 1.0);
circle(0,360,4+i+j,10+i+j,1);
glColor3f(1.0, 1.0, 1.0);
circle(0,360,30+i+i+j,5+i+j+j,1);
glColor3f(1.0, 1.0, 1.0);
circle(0,360,30+2*i+j,80+i+i+j+j,1);
circle(0,360,60+i+i+j,46+i+j+j,1);
glColor3f(1.0, 1.0, 1.0);
circle(0,360,48+i+j,100+i+j,1);
glColor3f(1.0, 1.0, 1.0);
circle(0,360,390+i+i+j,10+i+j+j,1);
}
}
}

void rocket_part3()
{
glColor3f(0.184, 0.310, 0.310);
quad(599-20,375-20,649-20,447-20,692-20,420-20,644-20,348-20);
glColor3f(0.502, 0.502, 0.502);
quad(649-20,447-20,692-20,420-20,717-20,427-20,683-20,455-20);
glColor3f(0.502, 0.502, 0.502);
quad(599-20,375-20,602-20,343-20,652-20,317-20,644-20,348-20);
glColor3f(0.827, 0.827, 0.82);
triangle(652-20,358-20,723-20,339-20,681-20,402-20);
}

void rocket()
{
glColor3f(0.933, 0.910, 0.667);
rect(988,420,1118,600);
glColor3f(0.827, 0.827, 0.82);
rect(988,270,1118,420);
glColor3f(1.0,1.0,1.0);
triangle(988,600,1053,700,1118,600);
glColor3f(0.184, 0.310, 0.310);
quadri(988,270,936,240,90,1170,1118);
glColor3f(0.502, 0.502, 0.502);
rect(988,90,1118,270);
}

void rocket2()
{
glColor3f(0.933, 0.910, 0.667);
rect((988-(465*1.5)),(-10+(465/2.71)),(1118-(465*1.5)),(170+(465/2.71)));
glColor3f(0.827, 0.827, 0.82);
rect(988-(465*1.5),-160+(465/2.71),1118-(465*1.5),-10+(465/2.71));
glColor3f(1.0,1.0,1.0);
triangle((988-(465*1.5)),170+(465/2.71),1053-(465*1.5),270+(465/2.71),1118-(465*1.5),170+(465/2.71));
glColor3f(0.184, 0.310, 0.310);
quadri(988-(465*1.5),-160+(465/2.71),936-(465*1.5),-190+(465/2.71),-340+(465/2.71),1170-(465*1.5),1118-(465*1.5));
glColor3f(0.502, 0.502, 0.502);
rect(988-(465*1.5),-340+(465/2.71),1118-(465*1.5),-160+(465/2.71));
}

void init_type2()
{
glClearColor(0.0, 0.0, 0.0, 0.0); /* white background */
glColor3f(1.0, 0.0, 0.0); /* draw in red */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1300.0, 0.0, 750.0);
}

void page_3()
{
init_type2();
int j=0;
for(int i=0;i<20;i++)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glColor3f(0.0+(i/40.0),0.6+(i/40.0),1.0+(i/40.0));
quad(0.0,400.0,1300.0,400.0,1300.0,750.0,0.0,750.0);
background_2();
sun();
clouds(i);
clouds2(i);
plane_rocket();
rocket();
platform();
glFlush();
for(int i=0;i<20000;i++)
for(int j=0;j<2000;j++);
}
for( i=0;i<=898;i++)
{
if(i<=397)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glColor3f(0.0+(20/40.0),0.6+(20/40.0),1.0+(20/40.0));
quad(0.0,400.0,1300.0,400.0,1300.0,750.0,0.0,750.0);
background_2();
sun();
clouds(20);
clouds2(20);
plane_rocket();
platform();
glPushMatrix();
glTranslatef(-i*1.1,i/1.71,0);
glScalef(1-(0.00095*i),1-(0.00095*i),0);
rocket();
glPopMatrix();
glFlush();
for(int i=0;i<8500;i++)
for(int j=0;j<850;j++);
}
else
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glColor3f(0.0+(20/40.0),0.6+(20/40.0),1.0+(20/40.0));
quad(0.0,400.0,1300.0,400.0,1300.0,750.0,0.0,750.0);
background_2();
sun();
clouds(20);
clouds2(20);
plane_rocket();
platform();
glPushMatrix();
glTranslatef(0,i,0);
glScalef(1-(0.00095*397),1-(0.00095*397),0);
rocket2();
glPopMatrix();
boost(j);
j++;
glFlush();
for(int i=0;i<5000;i++)
for(int j=0;j<1000;j++);
}
}
}

void page_1()
{
init_type2();
glClearColor(0.0,0.5,2.0,0.0);
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
drawText(425,650,1,1,1,"PROJECT TITLE:");
drawText(625,650,1,1,0,"Computer Graphics Added Satellite Launching");
drawText(550,600,1,1,1,"Developed By:");
drawText(400,550,0,1,0,"Uttam Bhise");
drawText(400,520,1,1,1,"(2LG20CS040)");
drawText(700,550,0,1,0,"Rakshita");
drawText(700,520,1,1,1,"(2LG20CS040)");
drawText(500.0,380.0,1,1,1,"UNDER THE GUIDENCE OF");
drawText(600.0,340.0,1,1,0,"Prof. Tejaswini");
drawText(500.0,300.0,1,1,0,"Professor, Dept of CSE");
drawText(575.0,260,1,1,0,"GEC, Talakal");
drawText(500,150,0,1,0,"PRESS RIGHT CLICK TO START");
glFlush();
}

void page_4()
{
init_type2();
for(int i=0;i<190;i+=5)
{
glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);  /*clear the window */
glColor3f(0.0,0.0,0.0);
quad(0.0,0.0,1300.0,0.0,1300.0,750.0,0.0,750.0);
glColor3f(0.0,0.0,1.0);
circle(0.0,360.0,1300.0,0.0,390-0.48*i);
glColor3f(1.0,1.0,1.0);
circle(0.0,360.0,0.0,750.0,150+0.095*i);
stars();
glPushMatrix();
glTranslatef(-1.1*i,-1.7*i,0);
launcher_left();
glPopMatrix();
glPushMatrix();
glTranslatef(1.1*i,1.7*i,0);
launcher_right();
glPopMatrix();
glFlush();
glPushMatrix();
glTranslatef(0.4*i,-2.7*i,0);
rocket_part3();
glPopMatrix();
glPushMatrix();
glTranslatef(-i*0.9,i*0.8,0);
rocket_slide3();
glPopMatrix();
glFlush();
}
}

void display_4(  )
{
myinit();
for(int b = 0; b<=400; b++)
{
glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
moon();
earth();
satellite();
glPushMatrix();
glTranslatef(b,0,0);
rover();
camera();
glPopMatrix();
glFlush();
}
for(int y=0;y<=17;y++)
{
glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
stars();
moon();
earth();
satellite();
rover1();
glPushMatrix();
glTranslatef(0,2*y,0);
camera1();
glPopMatrix();
glFlush();
}
for(y=0;y<=17;y++)
{
glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
stars();
moon();
earth();
satellite();
rover1();
glPushMatrix();
glTranslatef(0,-2*y,0);
camera2();
glPopMatrix();
glFlush();
}
for(int a=0;a<=1350;a+=50)
{
glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
stars();
moon();
earth();
rover1();
camera1();
glPushMatrix();
glTranslatef(-a,0,0);
comet();
satellite();
glPopMatrix();
glFlush();
}
}

void display_adv()
{
myinit();
for(int i=0;i<1000;i++)
{
glClearColor(0.0,0.5,2.0,0.0);
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
}
}

void main_menu(int index)
{
switch(index)
{
case 1:if(index==1)
       {
       page_3();
       page_1();
       }
       break;
case 2:if(index==2)
       {
       page_4();
       page_1();
       }
       break;
case 3:if(index==3)
       {
       display_4();
       page_1();
       }
       break;
}
}

void display()
{
page_1();
}

void myinit(void)
{
glClearColor(0.0, 0.0, 0.0, 0.0); /* white background */
glColor3f(1.0, 0.0, 0.0); /* draw in red */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1300.0, 0.0, 750.0);
}

int main(int argc, char** argv)
{
int c_menu;
glutInit(&argc,argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowSize(1300,750);
glutInitWindowPosition(0,0);
glutCreateWindow("Rocket Launching");
glutDisplayFunc(display);
myinit();
c_menu=glutCreateMenu(main_menu);
glutAddMenuEntry("TakeOff",1);
glutAddMenuEntry("DisMantling",2);
glutAddMenuEntry("Rover",3);
glutAttachMenu(GLUT_RIGHT_BUTTON);
glutMainLoop();
}
