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



void display()
{
	glColor3f(0.1, 0.5, 0.0);
	glBegin( GL_LINES );
        glColor3f(1.0, 1.0, 1.0);

        glVertex2f( 100.0 , 100.0 );
		glVertex2f( 500.0 , 100.0 );

        glVertex2f( 100.0 , 100.0 );
		glVertex2f( 100.0 , 500.0 );

        glVertex2f( 500.0 , 100.0 );
		glVertex2f( 500.0 , 500.0 );

        glVertex2f( 100.0 , 500.0 );
		glVertex2f( 500.0 , 500.0 );

        //// box

        glVertex2f( 200.0 , 100.0 );
		glVertex2f( 200.0 , 120.0 );

        glVertex2f( 300.0 , 100.0 );
		glVertex2f( 300.0 , 120.0 );

        glVertex2f( 400.0 , 100.0 );
		glVertex2f( 400.0 , 120.0 );

        glVertex2f( 500.0 , 200.0 );
		glVertex2f( 480.0 , 200.0 );

         glVertex2f( 500.0 , 300.0 );
		glVertex2f( 480.0 , 300.0 );

         glVertex2f( 500.0 , 400.0 );
		glVertex2f( 480.0 , 400.0 );

         glVertex2f( 100.0 , 200.0 );
		glVertex2f( 120.0 , 200.0 );

         glVertex2f( 100.0 , 300.0 );
		glVertex2f( 120.0 , 300.0 );

         glVertex2f( 100.0 , 400.0 );
		glVertex2f( 120.0 , 400.0 );

         glVertex2f( 200.0 , 500.0 );
		glVertex2f( 200.0 , 480.0 );

        glVertex2f( 300.0 , 500.0 );
		glVertex2f( 300.0 , 480.0 );

        glVertex2f( 400.0 , 500.0 );
		glVertex2f( 400.0 , 480.0 );

        /////

        glVertex2f( 300.0 , 300.0 );
		glVertex2f( 300.0 , 400.0 );

        glVertex2f( 300.0 , 300.0 );
		glVertex2f( 450.0 , 300.0 );

        glVertex2f( 300.0 , 400.0 );
		glVertex2f( 280.0 , 380.0 );

        glVertex2f( 300.0 , 400.0 );
		glVertex2f( 320.0 , 380.0 );

        glVertex2f( 450.0 , 300.0 );
		glVertex2f( 430.0 , 280.0 );

        glVertex2f( 450.0 , 300.0 );
		glVertex2f( 430.0 , 320.0 );




	glEnd();
	glFlush();
}

int main(int argc, char**argv) 
{
    glutInit(&argc, argv); 
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB ); 
    glutInitWindowSize( 800,800 ); 
    glutCreateWindow("Tanishka"); 
    init(); 
    glutDisplayFunc(display);
    glutMainLoop();  
}