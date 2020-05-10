#include <stdio.h>
#include <math.h>

#include <GL/glut.h>
#include <string.h>


int pntX1, pntY1, choice = 0, edges;
int pntX[10];
int pntY[10];
int transX, transY;
double scaleX, scaleY;
double angle, angleRad;
char reflectionAxis, shearingAxis;
int shearingX, shearingY;

//Our own function to display certain text on the screen 
void output(int x, int y, char *string)
{
  int len, i;
  glColor3f(1,1,1);                                                    //colour of the text 
  glRasterPos2f(x, y);                                                //position of the text on the screen 
  len = (int) strlen(string);                                        //calculatind the length of the text
  for (i = 0; i < len; i++) {
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);    //this function takes 2 arguments 
                                                                  //1. font style(which is inbuilt in glut liberary)
                                                                 //2. string  which is to be displayed 
  }
}

double round(double d)
{
	return floor(d + 0.5);
}

void drawPolygon()
{
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	for (int i = 0; i < edges; i++)
	{
		glVertex2i(pntX[i], pntY[i]);
	}
	glEnd();
}


void drawPolygonTrans(int x, int y)
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	for (int i = 0; i < edges; i++)
	{
		glVertex2i(pntX[i] + x, pntY[i] + y);
	}
	glEnd();
}

void drawPolygonScale(double x, double y)
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	for (int i = 0; i < edges; i++)
	{
		glVertex2i(round(pntX[i] * x), round(pntY[i] * y));
	}
	glEnd();
}

void drawPolygonRotation(double angleRad)
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	for (int i = 0; i < edges; i++)
	{
		glVertex2i(round((pntX[i] * cos(angleRad)) - (pntY[i] * sin(angleRad))), round((pntX[i] * sin(angleRad)) + (pntY[i] * cos(angleRad))));
	}
	glEnd();
}

void drawPolygonMirrorReflection(char reflectionAxis)
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);

	if (reflectionAxis == 'x' || reflectionAxis == 'X')
	{
		for (int i = 0; i < edges; i++)
		{
			glVertex2i(round(pntX[i]), round(pntY[i] * -1));

		}
	}
	else if (reflectionAxis == 'y' || reflectionAxis == 'Y')
	{
		for (int i = 0; i < edges; i++)
		{
			glVertex2i(round(pntX[i] * -1), round(pntY[i]));
		}
	}
	glEnd();
}

void drawPolygonShearing()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);

	if (shearingAxis == 'x' || shearingAxis == 'X')
	{
		glVertex2i(pntX[0], pntY[0]);

		glVertex2i(pntX[1] + shearingX, pntY[1]);
		glVertex2i(pntX[2] + shearingX, pntY[2]);

		glVertex2i(pntX[3], pntY[3]);
	}
	else if (shearingAxis == 'y' || shearingAxis == 'Y')
	{
		glVertex2i(pntX[0], pntY[0]);
		glVertex2i(pntX[1], pntY[1]);
		
		glVertex2i(pntX[2], pntY[2] + shearingY);
		glVertex2i(pntX[3], pntY[3] + shearingY);
	}
	glEnd();
}

void myInit(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-640.0, 640.0, -480.0, 480.0);
}


void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
    drawPolygon();
    output(-640,440,"Press 'D/d' to see the resultant polygon, it will be green in color");
	

	glFlush();
}

void mykey(unsigned char key,int x,int y)
{
    if(key=='d' || key=='D')
    {  
       if (choice == 1)
	{
		drawPolygonTrans(transX, transY);
		glFlush();
	}
	else if (choice == 2)
	{
		drawPolygonScale(scaleX, scaleY);
	    glFlush();
	}
	else if (choice == 3)
	{
		drawPolygonRotation(angleRad);
		glFlush();
	}
	else if (choice == 4)
	{
		drawPolygonMirrorReflection(reflectionAxis);
        glFlush();
	}
	else if (choice == 5)
	{
		drawPolygonShearing();
        glFlush();
	}
	
    }
}

int main(int argc, char** argv)
{
	printf( "Enter your choice:\n\n" );

	printf("1. Translation\n" );
	printf("2. Scaling\n");
	printf("3. Rotation\n");
	printf("4. Mirror Reflection\n");
	printf("5. Shearing\n");
	printf("6. Exit\n" );

	scanf("%d",&choice);

	if (choice == 6) {
		return 0;
	}

	printf("\n\nFor Polygon:\n");

	printf("Enter no of edges: "); scanf("%d",&edges);

	for (int i = 0; i < edges; i++)
	{
		printf("Enter co-ordinates for vertex %d",i+1); 
		printf(" : "); scanf("%d%d",&pntX1,&pntY1);
		pntX[i]=pntX1;
		pntY[i]=pntY1;
	}

	if (choice == 1)
	{
		printf("Enter the translation factor for X and Y: "); scanf("%d%d",&transX,&transY);
	}
	else if (choice == 2)
	{
		printf("Enter the scaling factor for X and Y: ");scanf("%lf%lf",&scaleX,&scaleY);
	}
	else if (choice == 3)
	{
		printf("Enter the angle for rotation: "); scanf("%lf",&angle);
		angleRad = angle * 3.1416 / 180;
	}
	else if (choice == 4)
	{
		printf("Enter reflection axis ( x or y ): "); scanf(" %c",&reflectionAxis);
	}
	else if (choice == 5)
	{
		printf("Enter reflection/shearing axis ( x or y ): "); scanf(" %c",&shearingAxis);
		if (shearingAxis == 'x' || shearingAxis == 'X')
		{
			printf("Enter the shearing factor for X: "); scanf("%d",&shearingX);
		}
		else
		{
			printf("Enter the shearing factor for Y: "); scanf("%d",&shearingY);
		}
	}
	


	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Extended Basic Transformations");
	glutDisplayFunc(myDisplay);
    glutKeyboardFunc(mykey);
	myInit();
	glutMainLoop();

}
