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
int j=100;
int k=30, l=30;

void displayCircle()
{
    
    glBegin(GL_POLYGON);
    
	glColor3f(1.0, 1.0, 0.0);
    
        if(j<600 && k<250)
        {
    for(int i=0; i<360; i++)
    {
        float theta = (i*3.142)/180;
        glVertex2f(j+k*cos(theta), 250+k*sin(theta));
    }
        }
    

}

void display()
{
	glColor3f(0.1, 0.5, 0.0);
	glBegin( GL_LINES );
        glColor3f(1.0, 0.0, 0.0);

        displayCircle();
       
    glEnd();
    glutSwapBuffers();

	glEnd();
	glFlush();
}

void timer(int)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);

    j = j+5;
    k=k+5;
}

int main(int argc, char**argv) 
{
    glutInit(&argc, argv); 
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB ); 
    glutInitWindowSize( 800,800 ); 
    glutCreateWindow("Tanishka"); 
    init(); //Important to initialize 
    glutDisplayFunc(display);
    glutTimerFunc(1000, timer, 0);
    //glutKeyboardFunc(key); 
    glutMainLoop();  //See screen for long time similar to getch
}