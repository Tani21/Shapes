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

        glVertex2f( 100.0 , 600.0 );
		glVertex2f( 100.0 , 650.0 );

        glVertex2f( 101.0 , 600.0 );
		glVertex2f( 101.0 , 650.0 );



        glVertex2f( 100.0 , 600.0 );
		glVertex2f( 70.0 , 600.0 );

        glVertex2f( 102.0 , 600.0 );
		glVertex2f( 72.0 , 600.0 );

        glVertex2f( 101.0 , 600.0 );
		glVertex2f( 71.0 , 600.0 );

        glVertex2f( 100.0 , 600.0 );
		glVertex2f( 70.0 , 570.0 );

        glVertex2f( 101.0 , 600.0 );
		glVertex2f( 71.0 , 570.0 );

        glVertex2f( 102.0 , 600.0 );
		glVertex2f( 72.0 , 570.0 );

        glVertex2f( 400.0 , 100.0 );
		glVertex2f( 400.0 , 500.0 );

        glVertex2f( 401.0 , 100.0 );
		glVertex2f( 401.0 , 500.0 );

        glVertex2f( 402.0 , 100.0 );
		glVertex2f( 402.0 , 500.0 );

        glVertex2f( 403.0 , 100.0 );
		glVertex2f( 403.0 , 500.0 );

        glVertex2f( 404.0 , 100.0 );
		glVertex2f( 404.0 , 500.0 );

        glVertex2f( 404.0 , 100.0 );
		glVertex2f( 404.0 , 500.0 );

        ////////////

        glVertex2f( 400.0 , 500.0 );
		glVertex2f( 300.0 , 600.0 );

        glVertex2f( 401.0 , 500.0 );
		glVertex2f( 301.0 , 600.0 );

        glVertex2f( 402.0 , 500.0 );
		glVertex2f( 302.0 , 600.0 );

        glVertex2f( 403.0 , 500.0 );
		glVertex2f( 303.0 , 600.0 );

        glVertex2f( 404.0 , 500.0 );
		glVertex2f( 304.0 , 600.0 );

        ////////

        glVertex2f( 300.0 ,600.0 );
		glVertex2f( 200.0 , 650.0 );

         glVertex2f( 301.0 ,600.0 );
		glVertex2f( 201.0 , 650.0 );

         glVertex2f( 302.0 ,600.0 );
		glVertex2f( 202.0 , 650.0 );

         glVertex2f( 303.0 ,600.0 );
		glVertex2f( 203.0 , 650.0 );

         glVertex2f( 304.0 ,600.0 );
		glVertex2f( 204.0 , 650.0 );

        ////

        glVertex2f( 200.0 , 650.0 );
		glVertex2f( 150.0 , 650.0 );

        glVertex2f( 201.0 , 650.0 );
		glVertex2f( 151.0 , 650.0 );

        glVertex2f( 202.0 , 650.0 );
		glVertex2f( 152.0 , 650.0 );

        glVertex2f( 203.0 , 650.0 );
		glVertex2f( 153.0 , 650.0 );

        glVertex2f( 204.0 , 650.0 );
		glVertex2f( 154.0 , 650.0 );


        //

        glVertex2f( 150.0 , 650.0 );
		glVertex2f( 100.0 , 600.0 );

        glVertex2f( 151.0 , 650.0 );
		glVertex2f( 101.0 , 600.0 );

         glVertex2f( 152.0 , 650.0 );
		glVertex2f( 102.0 , 600.0 );

         glVertex2f( 153.0 , 650.0 );
		glVertex2f( 103.0 , 600.0 );

         glVertex2f( 154.0 , 650.0 );
		glVertex2f( 104.0 , 600.0 );
         

        // part 1

        glVertex2f( 402.0 , 500.0 );
		glVertex2f( 500.0 , 600.0 );

        glVertex2f( 403.0 , 500.0 );
		glVertex2f( 501.0 , 600.0 );

        glVertex2f( 404.0 , 500.0 );
		glVertex2f( 502.0 , 600.0 );

        glVertex2f( 405.0 , 500.0 );
		glVertex2f( 503.0 , 600.0 );

        ////////

        glVertex2f( 300.0 , 600.0 );
		glVertex2f( 350.0 , 650.0 );

        glVertex2f( 301.0 , 600.0 );
		glVertex2f( 351.0 , 650.0 );

         glVertex2f( 302.0 , 600.0 );
		glVertex2f( 352.0 , 650.0 );


        glVertex2f( 303.0 , 600.0 );
		glVertex2f( 353.0 , 650.0 );


        ////////////

        glVertex2f( 200.0 , 650.0 );
		glVertex2f( 250.0 , 700.0 );

        glVertex2f( 201.0 , 650.0 );
		glVertex2f( 251.0 , 700.0 );

        glVertex2f( 202.0 , 650.0 );
		glVertex2f( 252.0 , 700.0 );

        glVertex2f( 203.0 , 650.0 );
		glVertex2f( 253.0 , 700.0 );

        //////

        glVertex2f( 150.0 , 650.0 );
		glVertex2f( 150.0 , 700.0 );

        glVertex2f( 151.0 , 650.0 );
		glVertex2f( 151.0 , 700.0 );

        glVertex2f( 152.0 , 650.0 );
		glVertex2f( 152.0 , 700.0 );

        glVertex2f( 153.0 , 650.0 );
		glVertex2f( 153.0 , 700.0 );

        ///////////////


        // part 2 over 

        glVertex2f( 501.0 , 600.0 );
		glVertex2f( 551.0 , 550.0 );

        glVertex2f( 502.0 , 600.0 );
		glVertex2f( 552.0 , 551.0 );

        glVertex2f( 503.0 , 600.0 );
		glVertex2f( 553.0 , 552.0 );

        // part 3 over

        glVertex2f( 551.0 , 550.0 );
		glVertex2f( 576.0 , 500.0 );

        glVertex2f( 552.0 , 550.0 );
		glVertex2f( 577.0 , 500.0 );

        glVertex2f( 152.0 , 700.0 );
		glVertex2f( 142.0 , 720.0 );

        // part 2 over

        glVertex2f( 576.0 , 500.0 );
		glVertex2f( 566.0 , 490.0 );

        glVertex2f( 566.0 , 490.0 );
		glVertex2f( 561.0 , 495.0 );

        // part 1 over



        // start branch 1

        glVertex2f( 500.0 , 600.0 );
		glVertex2f( 530.0 , 650.0 );

        glVertex2f( 530.0 , 650.0 );
		glVertex2f( 535.0 , 680.0 );

        glVertex2f( 534.0 , 680.0 );
		glVertex2f( 525.0 , 700.0 );

        glVertex2f( 534.0 , 680.0 );
		glVertex2f( 540.0 , 700.0 );

        glVertex2f( 534.0 , 680.0 );
		glVertex2f( 550.0 , 680.0 );

        //


        glVertex2f( 350.0 , 650.0 );
		glVertex2f( 400.0 , 680.0 );

        glVertex2f( 351.0 , 650.0 );
		glVertex2f( 401.0 , 680.0 );

        glVertex2f( 352.0 , 650.0 );
		glVertex2f( 402.0 , 680.0 );

       
        //

        glVertex2f( 350.0 , 650.0 );
		glVertex2f( 320.0 , 700.0 );

        glVertex2f( 351.0 , 650.0 );
		glVertex2f( 321.0 , 700.0 );

        glVertex2f( 352.0 , 650.0 );
		glVertex2f( 322.0 , 700.0 );

        //

         glVertex2f( 353.0 , 650.0 );
		glVertex2f( 403.0 , 650.0 );

        glVertex2f( 352.0 , 650.0 );
		glVertex2f( 402.0 , 650.0 );

        glVertex2f( 351.0 , 650.0 );
		glVertex2f( 401.0 , 650.0 );

        //

        glVertex2f( 250.0 , 700.0 );
		glVertex2f( 230.0 , 720.0 );

        glVertex2f( 250.0 , 700.0 );
		glVertex2f( 300.0 , 720.0 );

        glVertex2f( 250.0 , 700.0 );
		glVertex2f( 300.0 , 750.0 );


        glVertex2f( 151.0 , 700.0 );
		glVertex2f( 141.0 , 720.0 );



	glEnd();
	glFlush();
}

int main(int argc, char**argv) 
{
    glutInit(&argc, argv); 
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB ); 
    glutInitWindowSize( 1200,1200 ); 
    glutCreateWindow("Tanishka"); 
    init(); 
    glutDisplayFunc(display);
    glutMainLoop();  
}