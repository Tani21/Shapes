#include<GL/glut.h>
#include<GL/gl.h> 
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
void init()
{
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 700, 0.0, 700);
}

void displayCircle()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);

    
	glColor3f(1.0, 0.0, 0.0);
    for(int i=0; i<360; i++)
    {
        float theta = (i*3.142)/180;
        glVertex2f(300+12*cos(theta), 350+12*sin(theta));
        glVertex2f(300+14*cos(theta), 350+14*sin(theta));
        glVertex2f(300+16*cos(theta), 350+16*sin(theta));
        glVertex2f(300+18*cos(theta), 350+18*sin(theta));
        glVertex2f(300+20*cos(theta), 350+20*sin(theta));
        glVertex2f(300+22*cos(theta), 350+22*sin(theta));
        glVertex2f(300+24*cos(theta), 350+24*sin(theta));
        glVertex2f(300+26*cos(theta), 350+26*sin(theta));
        glVertex2f(300+28*cos(theta), 350+28*sin(theta));
        glVertex2f(300+30*cos(theta), 350+30*sin(theta));
    }

    glColor3f(0.0, 1.0, 0.0);
    for(int i=0; i<360; i++)
    {
       float theta = (i*3.142)/180;
       glVertex2f(300+32*cos(theta), 350+32*sin(theta));
       glVertex2f(300+34*cos(theta), 350+34*sin(theta));
       glVertex2f(300+36*cos(theta), 350+36*sin(theta));
       glVertex2f(300+38*cos(theta), 350+38*sin(theta));
       glVertex2f(300+40*cos(theta), 350+40*sin(theta));
       glVertex2f(300+42*cos(theta), 350+42*sin(theta));
       glVertex2f(300+44*cos(theta), 350+44*sin(theta));
       glVertex2f(300+46*cos(theta), 350+46*sin(theta));
       glVertex2f(300+48*cos(theta), 350+48*sin(theta));
       glVertex2f(300+50*cos(theta), 350+50*sin(theta));
    }

    glColor3f(0.0, 0.0, 1.0);
    for(int i=0; i<360; i++)
    {
       float theta = (i*3.142)/180;
       glVertex2f(300+52*cos(theta), 350+52*sin(theta));
       glVertex2f(300+54*cos(theta), 350+54*sin(theta));
       glVertex2f(300+56*cos(theta), 350+56*sin(theta));
       glVertex2f(300+58*cos(theta), 350+58*sin(theta));
       glVertex2f(300+60*cos(theta), 350+60*sin(theta));
       glVertex2f(300+62*cos(theta), 350+62*sin(theta));
       glVertex2f(300+64*cos(theta), 350+64*sin(theta));
       glVertex2f(300+66*cos(theta), 350+66*sin(theta));
       glVertex2f(300+68*cos(theta), 350+68*sin(theta));
       glVertex2f(300+70*cos(theta), 350+70*sin(theta));
    }

    glColor3f(0.5, 0.0, 0.0);
    for(int i=0; i<360; i++)
    {
       float theta = (i*3.142)/180;
       glVertex2f(300+72*cos(theta), 350+72*sin(theta));
       glVertex2f(300+74*cos(theta), 350+74*sin(theta));
       glVertex2f(300+76*cos(theta), 350+76*sin(theta));
       glVertex2f(300+78*cos(theta), 350+78*sin(theta));
       glVertex2f(300+80*cos(theta), 350+80*sin(theta));
       glVertex2f(300+82*cos(theta), 350+82*sin(theta));
       glVertex2f(300+84*cos(theta), 350+84*sin(theta));
       glVertex2f(300+86*cos(theta), 350+86*sin(theta));
       glVertex2f(300+88*cos(theta), 350+88*sin(theta));
       glVertex2f(300+90*cos(theta), 350+90*sin(theta));
    }

    glColor3f(0.0, 0.5, 0.0);
    for(int i=0; i<360; i++)
    {
       float theta = (i*3.142)/180;
       glVertex2f(300+92*cos(theta), 350+92*sin(theta));
       glVertex2f(300+94*cos(theta), 350+94*sin(theta));
       glVertex2f(300+96*cos(theta), 350+96*sin(theta));
       glVertex2f(300+98*cos(theta), 350+98*sin(theta));
       glVertex2f(300+100*cos(theta), 350+100*sin(theta));
       glVertex2f(300+102*cos(theta), 350+102*sin(theta));
       glVertex2f(300+104*cos(theta), 350+104*sin(theta));
       glVertex2f(300+106*cos(theta), 350+106*sin(theta));
       glVertex2f(300+108*cos(theta), 350+108*sin(theta));
       glVertex2f(300+110*cos(theta), 350+110*sin(theta));
    }

    glColor3f(0.0, 0.0, 0.5);
    for(int i=0; i<360; i++)
    {
       float theta = (i*3.142)/180;
       glVertex2f(300+112*cos(theta), 350+112*sin(theta));
       glVertex2f(300+114*cos(theta), 350+114*sin(theta));
       glVertex2f(300+116*cos(theta), 350+116*sin(theta));
       glVertex2f(300+118*cos(theta), 350+118*sin(theta));
       glVertex2f(300+120*cos(theta), 350+120*sin(theta));
       glVertex2f(300+122*cos(theta), 350+122*sin(theta));
       glVertex2f(300+124*cos(theta), 350+124*sin(theta));
       glVertex2f(300+126*cos(theta), 350+126*sin(theta));
       glVertex2f(300+128*cos(theta), 350+128*sin(theta));
       glVertex2f(300+130*cos(theta), 350+130*sin(theta));
    }

    glColor3f(0.0, 1.0, 1.0);
    for(int i=0; i<360; i++)
    {
       float theta = (i*3.142)/180;
       glVertex2f(300+132*cos(theta), 350+132*sin(theta));
       glVertex2f(300+134*cos(theta), 350+134*sin(theta));
       glVertex2f(300+136*cos(theta), 350+136*sin(theta));
       glVertex2f(300+138*cos(theta), 350+138*sin(theta));
       glVertex2f(300+140*cos(theta), 350+140*sin(theta));
       glVertex2f(300+142*cos(theta), 350+142*sin(theta));
       glVertex2f(300+144*cos(theta), 350+144*sin(theta));
       glVertex2f(300+146*cos(theta), 350+146*sin(theta));
       glVertex2f(300+148*cos(theta), 350+148*sin(theta));
       glVertex2f(300+150*cos(theta), 350+150*sin(theta));
    }

    glColor3f(1.0, 1.0, 0.0);
    for(int i=0; i<360; i++)
    {
       float theta = (i*3.142)/180;

       glVertex2f(300+152*cos(theta), 350+152*sin(theta));
       glVertex2f(300+154*cos(theta), 350+154*sin(theta));
       glVertex2f(300+156*cos(theta), 350+156*sin(theta));
       glVertex2f(300+158*cos(theta), 350+158*sin(theta));
       glVertex2f(300+160*cos(theta), 350+160*sin(theta));
       glVertex2f(300+162*cos(theta), 350+162*sin(theta));
       glVertex2f(300+164*cos(theta), 350+164*sin(theta));
       glVertex2f(300+166*cos(theta), 350+166*sin(theta));
       glVertex2f(300+168*cos(theta), 350+168*sin(theta));
       glVertex2f(300+170*cos(theta), 350+170*sin(theta));
    }

    glColor3f(1.0, 0.0, 1.0);
    for(int i=0; i<360; i++)
    {
       float theta = (i*3.142)/180;
       glVertex2f(300+171*cos(theta), 350+171*sin(theta));
       glVertex2f(300+172*cos(theta), 350+172*sin(theta));
       glVertex2f(300+174*cos(theta), 350+174*sin(theta));
       glVertex2f(300+176*cos(theta), 350+176*sin(theta));
       glVertex2f(300+178*cos(theta), 350+178*sin(theta));
       glVertex2f(300+180*cos(theta), 350+180*sin(theta));
       glVertex2f(300+182*cos(theta), 350+182*sin(theta));
       glVertex2f(300+184*cos(theta), 350+184*sin(theta));
       glVertex2f(300+186*cos(theta), 350+186*sin(theta));
       glVertex2f(300+188*cos(theta), 350+188*sin(theta));
       glVertex2f(300+190*cos(theta), 350+190*sin(theta));
    }

    glEnd();

    
    glBegin(GL_POLYGON);

    
	// glColor3f(0.0, 1.0, 0.0);
    // for(int i=0; i<360; i++)
    // {
    //    float theta = (i*3.142)/180;
    //    glVertex2f(400+30*cos(theta), 250+40*sin(theta));
    // }

    // glEnd();

    

}


void display()
{
	glColor3f(0.1, 0.5, 0.0);
	glBegin( GL_LINES );
        glColor3f(1.0, 0.0, 0.0);
		// glVertex2f( 50.0 , 300.0 );
		// glVertex2f( 150.0 , 300.0 );
	
        displayCircle();

        
	glEnd();
	glFlush();
}

int main(int argc, char**argv) 
{
    glutInit(&argc, argv); 
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB ); 
    glutInitWindowSize( 700,500 ); 
    glutCreateWindow("Tanishka"); 
    init(); 
    glutDisplayFunc(display); 
    glutMainLoop();  
} 