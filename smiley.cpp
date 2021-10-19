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

// void displayText()
// {
//     unsigned char string[] = "Tanishka Vaswani";
//     int w;
//     w = glutBitmapLength(GLUT_BITMAP_8_BY_13, string);
//     glRasterPos2f(0.400, 0.100);

//     glColor3f(0,1,0);

//     int len = strlen(string);
// for (int i = 0; i < len; i++) {
//     glutBitmapCharacter(GLUT_BITMAP_8_BY_13, string);
// }

// }

void displayCircle()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);

    
	glColor3f(1.0, 0.0, 0.0);
    for(int i=0; i<360; i++)
    {
        float theta = (i*3.142)/180;
        glVertex2f(300+30*cos(theta), 250+30*sin(theta));
    }

    for(int i=0; i<360; i++)
    {
        float theta = (i*3.142)/180;
        glVertex2f(200+30*cos(theta), 250+30*sin(theta));
    }

    for(int i=0; i<360; i++)
    {
        float theta = (i*3.142)/180;
        glVertex2f(250+150*cos(theta), 250+150*sin(theta));
    }

}

void display()
{
	glColor3f(0.1, 0.5, 0.0);
	glBegin( GL_LINES );
        glColor3f(1.0, 0.0, 0.0);

        displayCircle();
		glVertex2f( 250.0 , 200.0 );
		glVertex2f( 250.0 , 230.0 );

        glVertex2f( 200.0 , 150.0 );
		glVertex2f( 300.0 , 150.0 );

	glEnd();
	glFlush();
}

int main(int argc, char**argv) 
{
    glutInit(&argc, argv); 
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB ); 
    glutInitWindowSize( 800,800 ); 
    glutCreateWindow("Tanishka"); 
    init(); //Important to initialize 
    glutDisplayFunc(display);
    //glutKeyboardFunc(key); 
    glutMainLoop();  //See screen for long time similar to getch
}