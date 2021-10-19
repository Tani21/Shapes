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
        glVertex2f(200+30*cos(theta), 250+30*sin(theta));
    }

    for(int i=0; i<360; i++)
    {
        float theta = (i*3.142)/180;
        glVertex2f(400+30*cos(theta), 250+30*sin(theta));
    }

}


void display()
{
	glColor3f(0.1, 0.5, 0.0);
	glBegin( GL_LINES );
        glColor3f(1.0, 0.0, 0.0);
		glVertex2f( 50.0 , 300.0 );
		glVertex2f( 150.0 , 300.0 );

        glVertex2f( 50.0 , 300.0 );
		glVertex2f( 100.0 , 400.0 );

        glVertex2f( 150.0 , 300.0 );
		glVertex2f( 100.0 , 400.0 );

        glVertex2f( 150.0 , 300.0 );
		glVertex2f( 250.0 , 300.0 );

        glVertex2f( 150.0 , 300.0 );
		glVertex2f( 150.0 , 200.0 );

        glVertex2f( 250.0 , 300.0 );
		glVertex2f( 250.0 , 200.0 );

        glVertex2f( 150.0 , 200.0 );
		glVertex2f( 250.0 , 200.0 );

        glVertex2f( 250.0 , 300.0 );
		glVertex2f( 300.0 , 400.0 );

        glVertex2f( 300.0 , 400.0 );
		glVertex2f( 350.0 , 300.0 );

        glVertex2f( 250.0 , 300.0 );
		glVertex2f( 350.0 , 300.0 );

        glVertex2f( 350.0 , 300.0 );
		glVertex2f( 450.0 , 300.0 );

        glVertex2f( 350.0 , 300.0 );
		glVertex2f( 350.0 , 200.0 );

        glVertex2f( 450.0 , 300.0 );
		glVertex2f( 450.0 , 200.0 );

        glVertex2f( 350.0 , 200.0 );
		glVertex2f( 450.0 , 200.0 );

        glVertex2f( 450.0 , 300.0 );
		glVertex2f( 500.0 , 400.0 );

        glVertex2f( 500.0 , 400.0 );
		glVertex2f( 550.0 , 300.0 );

        glVertex2f( 450.0 , 300.0 );
		glVertex2f( 550.0 , 300.0 );

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