#include<GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h> //For Sin and Cos Calculations

float angle = 0.0, Newangle = 0.2,x = 168.0,y = 180.0,th=0;
void WindMill(); //Declaration of our own Function to draw windmill


void init() {
    glClearColor(0.0,0.60,0.80,1.0);     //Background Color
    glMatrixMode(GL_PROJECTION);        // Specifies which matrix stack is the targeted for subsequent matrix operations. 
    gluOrtho2D(0.0, 400, 0.0, 300.0);  //This is fucntion is used to set the clipping area of 2D orthographic view
}

/* Handler for window-repaint event. Call back when the window first appears and
   whenever the window needs to be re-painted. */

void display() {
    glClear(GL_COLOR_BUFFER_BIT);    // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);     // Specifies which matrix stack is the targeted for subsequent matrix operations. 
    glLoadIdentity();              // replaces the current matrix with the identity matrix
    WindMill();                   //Own Function to Draw WindMill
    glFlush();                   //it guarantees that all OpenGL commands made up to this point will
                                //complete executions in a finite amount time after calling glFlush().
    glutPostRedisplay();       //Calls the "Display()" function again  
}

/* Main function: GLUT runs as a console application starting at main()  */

int main(int argc, char** argv) {
    glutInit(&argc, argv);                             // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);      //setting the display mode
    glutInitWindowSize(700, 600);                    // Set the window's initial width & height
    glutInitWindowPosition(300, 50);                // Position the window's initial top-left corner
    glutCreateWindow("Wind Mill");                 // Create a window with the given title
    init();                                       //OpenGL initialization
    glutDisplayFunc(display);                    // Register display callback handler for window re-paint
    glutMainLoop();                             // Enter the event-processing loop
}

//Defenation of our own Function to draw windmill

void WindMill() {
   
   //Green field
	glBegin(GL_POLYGON);
	glColor3f(0.34,0.5,0); //Green color 
	glVertex2f(0,50);
	glVertex2f(0,0);
	glVertex2f(400,0);
	glVertex2f(400,50);
	glEnd();
   
   //sun
	  glBegin(GL_POLYGON);
    	     glColor3f(1,0.65,0); //orange color
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((350)+15*cos(th)),((270)+15*sin(th))); //15 is radius,(640,435) is center
	       }
        glEnd();	
   
    // draw the tower
    glLineWidth(9);  // Set the line width to be 9 pixels.
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(168, 40);
    glVertex2f(168, 180);
    glEnd();
   
    //To Rotate the blades of the windmill 
    glPushMatrix();

    glTranslatef( x, y, 0.0f );
    glRotatef(angle, 0, 0, 1);
    angle += Newangle;
    glTranslatef(-x, -y, 0.0f );

    // first blade
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(173, 180);
    glVertex2f(163, 180);
    glVertex2f(168, 270);
    glEnd();
    
    //second blade
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(170, 174);
    glVertex2f(175, 180);
    glVertex2f(247, 140);
    glEnd();
    
    //third blade
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(162, 180);
    glVertex2f(167, 174);
    glVertex2f(88, 140);
    glEnd();
    
    glPopMatrix();
    //Windmill's Middle circle
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.5); //Grey Color
    for (int i = 0; i <= 360; i++) {
           th = i * 3.14 / 180; //degree into radian
           glVertex2f(168 + 7 * cos(th), 180 + 7 * sin(th)); //(168,180) is center , 7 is radius
    }
    glEnd();
    
}
