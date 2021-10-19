#include<GL/glut.h>
#include<GL/gl.h> 
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int x_position = 150, y_position = 150;

void init()
{
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 700, 0.0, 700);
}


void print_character(int x, int y)
{
    glFlush();
    glPointSize(20.0f);
    glBegin( GL_POINTS);
    glVertex2i(x,y);
    
  glEnd();

}

void grid()
{
    glColor3f(0.1, 0.5, 0.0);
	glBegin( GL_LINES );
        glColor3f(1.0, 0.0, 0.0);
		glVertex2f( 100.0 , 100.0 );
		glVertex2f( 600.0 , 100.0 );

        glVertex2f( 100.0 , 200.0 );
		glVertex2f( 600.0 , 200.0 );

        glVertex2f( 100.0 , 300.0 );
		glVertex2f( 600.0 , 300.0 );

        glVertex2f( 100.0 , 400.0 );
		glVertex2f( 600.0 , 400.0 );

        glVertex2f( 100.0 , 500.0 );
		glVertex2f( 600.0 , 500.0 );

        glVertex2f( 100.0 , 600.0 );
		glVertex2f( 600.0 , 600.0 );

        // rows have been made

        glVertex2f( 100.0 , 100.0 );
		glVertex2f( 100.0 , 600.0 );

        glVertex2f( 200.0 , 100.0 );
		glVertex2f( 200.0 , 600.0 );

        glVertex2f( 300.0 , 100.0 );
		glVertex2f( 300.0 , 600.0 );

        glVertex2f( 400.0 , 100.0 );
		glVertex2f( 400.0 , 600.0 );

        glVertex2f( 500.0 , 100.0 );
		glVertex2f( 500.0 , 600.0 );

        glVertex2f( 600.0 , 100.0 );
		glVertex2f( 600.0 , 600.0 );

        // grid is complete, both rows and columns
        
	glEnd();

}


void display()
{
    grid();


    glPointSize(20.0f);
    glBegin( GL_POINTS);
    
    glVertex2i(x_position,y_position);
    
  glEnd();
  glutSwapBuffers();

	
	glFlush();
}

void keyRotationFunction(unsigned char user_key, int x, int y) { // user can press arrow keys to rotate the cube 
    if ( user_key == 'a' )
        {   
            x_position=x_position-100;
            print_character(x_position,y_position);
        }
       
    else if ( user_key == 'd' )
    {   
            x_position=x_position+100;
            print_character(x_position,y_position);
    }
       
    else if ( user_key == 's')
    {    
            y_position=y_position-100;
            print_character(x_position,y_position);
    }
       
    else if ( user_key == 'w' )
    {       
            y_position=y_position+100;
            print_character(x_position,y_position);
    }
       
    
       
    glutPostRedisplay();
}

int main(int argc, char**argv) 
{
    glutInit(&argc, argv); 
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH ); 
    glutInitWindowSize( 700,700 ); 
    glutCreateWindow("Tanishka"); 
    init();
    glutDisplayFunc(display); 
    glutKeyboardFunc(keyRotationFunction);
    glutMainLoop();  
} 