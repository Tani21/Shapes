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

        glVertex2f( 300.0 , 400.0 );
		glVertex2f( 500.0 , 400.0 );

        glVertex2f( 300.0 , 400.0 );
		glVertex2f( 400.0 , 600.0 );

        glVertex2f( 400.0 , 600.0 );
		glVertex2f( 500.0 , 400.0 );

        glVertex2f( 250.0 , 400.0 );
		glVertex2f( 450.0 , 400.0 );

        glVertex2f( 250.0 , 400.0 );
        glVertex2f( 350.0 , 200.0 );

        glVertex2f( 350.0 , 200.0 );
        glVertex2f( 450.0 , 400.0 );

        glVertex2f( 450.0 , 400.0 );
        glVertex2f( 550.0 , 400.0 );

        glVertex2f( 450.0 , 400.0 );
        glVertex2f( 500.0 , 500.0 );

        glVertex2f( 550.0 , 400.0 );
        glVertex2f( 500.0 , 500.0 );



        glEnd();

         glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 1.0);

        glVertex2f( 300.0 , 400.0 );
		glVertex2f( 500.0 , 400.0 );

        glVertex2f( 300.0 , 400.0 );
		glVertex2f( 400.0 , 600.0 );

        glVertex2f( 400.0 , 600.0 );
		glVertex2f( 500.0 , 400.0 );

        glVertex2f( 250.0 , 400.0 );
		glVertex2f( 450.0 , 400.0 );

        glVertex2f( 250.0 , 400.0 );
        glVertex2f( 350.0 , 200.0 );

        glVertex2f( 350.0 , 200.0 );
        glVertex2f( 450.0 , 400.0 );

        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);

        glVertex2f( 200.0 , 400.0 );
        glVertex2f( 300.0 , 400.0 );

         glVertex2f( 200.0 , 400.0 );
          glVertex2f( 250.0 , 300.0 );

           glVertex2f( 250.0 , 300.0 );
           glVertex2f( 300.0 , 400.0 );



        glEnd();


         glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);

         glVertex2f( 450.0 , 400.0 );
        glVertex2f( 550.0 , 400.0 );

        glVertex2f( 450.0 , 400.0 );
        glVertex2f( 500.0 , 500.0 );

        glVertex2f( 550.0 , 400.0 );
        glVertex2f( 500.0 , 500.0 );

        glEnd();


    glEnd();
	glFlush();
}

int main(int argc, char**argv) 
{
    glutInit(&argc, argv); 
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB ); 
    glutInitWindowSize( 800,800 ); 
    glutCreateWindow("Tanishka 3d image"); 
    init(); 
    glutDisplayFunc(display);
    glutMainLoop();  
}
