#include<GL/glut.h>
#include<GL/gl.h> 
#include<iostream>
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
        glColor3f(1.0, 0.0, 0.0);
		glVertex2f( 100.0 , 0.0 );
		glVertex2f( 100.0 , 400.0 );

        glVertex2f( 300.0 , 0.0 );
		glVertex2f( 300.0 , 400.0 );

        glVertex2f( 500.0 , 0.0 );
		glVertex2f( 500.0 , 400.0 );

        glVertex2f( 700.0 , 0.0 );
		glVertex2f( 700.0 , 400.0 );

        glVertex2f( 100.0 , 400.0 );
		glVertex2f( 200.0 , 600.0 );

        glVertex2f( 200.0 , 600.0 );
		glVertex2f( 300.0 , 400.0 );

        glVertex2f( 500.0 , 400.0 );
		glVertex2f( 600.0 , 600.0 );

        glVertex2f( 600.0 , 600.0 );
		glVertex2f( 700.0 , 400.0 );

        glVertex2f( 100.0 , 400.0 );
		glVertex2f( 700.0 , 400.0 );

        glVertex2f( 300.0 , 200.0 );
		glVertex2f( 500.0 , 0.0 );

        glVertex2f( 300.0 , 0.0 );
		glVertex2f( 500.0 , 200.0 );

        glVertex2f( 300.0 , 200.0 );
		glVertex2f( 500.0 , 200.0 );

        glVertex2f( 100.0 , 300.0 );
		glVertex2f( 200.0 , 300.0 );

        glVertex2f( 200.0 , 300.0 );
		glVertex2f( 200.0 , 200.0 );

        glVertex2f( 200.0 , 200.0 );
		glVertex2f( 100.0 , 200.0 );

        glVertex2f( 600.0 , 300.0 );
		glVertex2f( 600.0 , 200.0 );

        glVertex2f( 700.0 , 200.0 );
		glVertex2f( 600.0 , 200.0 );

        glVertex2f( 600.0 , 300.0 );
		glVertex2f( 700.0 , 300.0 );

        glVertex2f( 550.0 , 410.0 );
		glVertex2f( 550.0 , 450.0 );

        glVertex2f( 650.0 , 410.0 );
		glVertex2f( 650.0 , 450.0 );

        glVertex2f( 550.0 , 410.0 );
		glVertex2f( 650.0 , 410.0 );

        glVertex2f( 550.0 , 450.0 );
		glVertex2f( 650.0 , 450.0 );








		
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