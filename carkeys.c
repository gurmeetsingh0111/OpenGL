#include<GL/glut.h>
#include<math.h>

float th;
float x1=0,x=0;
	void t (int a) ;

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
		
	//sun
	  glBegin(GL_POLYGON);
    	     glColor3f(1,0.65,0);
    	     //glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((640)+40*cos(th)),(435+40*sin(th))); //150 radius,500 is origin
	       }
        glEnd();	
		
	//ROAD
	glBegin(GL_POLYGON);
	glColor3f(0.24,0.24,0.24);
	glVertex2f(0,100);
	glVertex2f(0,0);
	glVertex2f(800,0);
	glVertex2f(800,100);
	glEnd();
	
	//White Strips 1
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(50-x,40);
	glVertex2f(50-x,20);
	glVertex2f(200-x,20);
	glVertex2f(200-x,40);
	glEnd();
	
	//White Strips 2
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(300-x,40);
	glVertex2f(300-x,20);
	glVertex2f(450-x,20);
	glVertex2f(450-x,40);
	glEnd();
	
	//White Strips 3
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(550-x,40);
	glVertex2f(550-x,20);
	glVertex2f(700-x,20);
	glVertex2f(700-x,40);
	glEnd();
	
	//White Strips 4
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(800-x,40);
	glVertex2f(800-x,20);
	glVertex2f(950-x,20);
	glVertex2f(950-x,40);
	glEnd();
	
	//White Strips 5
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(1050-x,40);
	glVertex2f(1050-x,20);
	glVertex2f(1200-x,20);
	glVertex2f(1200-x,40);
	glEnd();
	
	//White Strips 6
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(1300-x,40);
	glVertex2f(1300-x,20);
	glVertex2f(1450-x,20);
	glVertex2f(1450-x,40);
	glEnd();
	
	//botttom rectangle base 
    glBegin(GL_POLYGON);
    	glColor3f(0.62,0,0);
     glVertex2f(220+x1,250);
     glVertex2f(220+x1,130);
     glVertex2f(580+x1,130);
     glVertex2f(580+x1,250);
     
    glEnd();
    
    //bottom curve back
       glBegin(GL_POLYGON);
       glColor3f(0.62,0,0);
    for(int i=0;i<181;i++){
		th=i*3.14/180; //degree into radian
        glVertex2f((220+x1)+120*cos(th),130+120*sin(th)); //150 radius,500 is origin
	}
    glEnd();
    
    //bottom curve front
        glBegin(GL_POLYGON);
    	glColor3f(0.62,0,0);
    for(int i=0;i<181;i++){
		th=i*3.14/180; //degree into radian
        glVertex2f((580+x1)+120*cos(th),130+120*sin(th)); //150 radius,500 is origin
	}
    glEnd();

	
	//tier01
    glBegin(GL_POLYGON);
    	glColor3f(0,0,0);
          for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f((250+x1)+50*cos(th),120+50*sin(th)); //50 radius,250 is origin
      	}
    glEnd();
    
         glBegin(GL_POLYGON);
        	glColor3f(0.60,0.80,0.79);
               for(int i=0;i<360;i++){
		          th=i*3.14/180; //degree into radian
                  glVertex2f((250+x1)+35*cos(th),120+35*sin(th)); //150 radius,500 is origin
	            }
          glEnd();
    
        //tier02
       glBegin(GL_POLYGON);
    	     glColor3f(0,0,0);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f((550+x1)+50*cos(th),120+50*sin(th)); //150 radius,500 is origin
	       }
        glEnd();

        glBegin(GL_POLYGON);
    	      glColor3f(0.60,0.80,0.79);
            for(int i=0;i<360;i++){
		       th=i*3.14/180; //degree into radian
               glVertex2f((550+x1)+35*cos(th),120+35*sin(th)); //150 radius,500 is origin
        	}
        glEnd();  
         
         
         //Upper curve
         glBegin(GL_POLYGON);
        glColor3f(0,0.30,1);
    for(int i=0;i<181;i++){
		th=i*3.14/180; //degree into radian
        glVertex2f((400+x1)+120*cos(th),250+100*sin(th)); //150 radius,500 is origin
	}
    glEnd();
    
    
    //Upper front 
        glBegin(GL_POLYGON);
    	glColor3f(0,0.30,1);
        glVertex2f(460+x1,338);
        glVertex2f(510+x1,250);
        glVertex2f(580+x1,250);
      glEnd(); 
    
    //head light
      glBegin(GL_POLYGON);
    	glColor3f(0.31,0.31,0.18);
     glVertex2f(690+x1,180);
     glVertex2f(690+x1,170);
     glVertex2f(700+x1,160);
     glVertex2f(700+x1,190);
    glEnd();
    
    
//cloud 01
	   glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((100-x)+25*cos(th)),(430+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
        glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((120-x)+25*cos(th)),(410+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((145-x)+25*cos(th)),(405+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((165-x)+25*cos(th)),(420+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((120-x)+25*cos(th)),(440+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((150-x)+25*cos(th)),(445+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
        glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((150-x)+25*cos(th)),(430+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
        glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((170-x)+25*cos(th)),(410+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((195-x)+25*cos(th)),(405+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((215-x)+25*cos(th)),(420+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((170-x)+25*cos(th)),(440+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((200-x)+25*cos(th)),(445+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
        
       /*  //cloud 2
	       glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((600-x)+25*cos(th)),(430+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
        glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((620-x)+25*cos(th)),(410+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((645-x)+25*cos(th)),(405+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((665-x)+25*cos(th)),(420+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((620-x)+25*cos(th)),(440+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((650-x)+25*cos(th)),(445+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
        glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((650-x)+25*cos(th)),(430+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
        glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((670-x)+25*cos(th)),(410+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((695-x)+25*cos(th)),(405+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((715-x)+25*cos(th)),(420+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((670-x)+25*cos(th)),(440+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((700-x)+25*cos(th)),(445+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
        
        */
        
           //cloud 3
	       glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((1000-x)+25*cos(th)),(430+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
        glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((1020-x)+25*cos(th)),(410+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((1045-x)+25*cos(th)),(405+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((1065-x)+25*cos(th)),(420+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((1020-x)+25*cos(th)),(440+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((1050-x)+25*cos(th)),(445+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
        glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((1050-x)+25*cos(th)),(430+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
        glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((1070-x)+25*cos(th)),(410+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((1095-x)+25*cos(th)),(405+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((1115-x)+25*cos(th)),(420+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((1070-x)+25*cos(th)),(440+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
         glBegin(GL_POLYGON);
    	     glColor3f(1,1,1);
           for(int i=0;i<360;i++){
		      th=i*3.14/180; //degree into radian
              glVertex2f(((1100-x)+25*cos(th)),(445+25*sin(th))); //150 radius,500 is origin
	       }
        glEnd();
        
    glFlush();
}

void catchKey(int key, int x, int y)
{
    switch(key)
    {
		case GLUT_KEY_LEFT:  x1-=10;
		                     glutPostRedisplay();
		                     break;
	/*	 case GLUT_KEY_UP:  yr+=10;
		                     glutPostRedisplay();
		                     break;                    
		 case GLUT_KEY_DOWN:  yr-=10;
		                     glutPostRedisplay();
		                     break;
*/		 case GLUT_KEY_RIGHT: x1+=10;
		                     glutPostRedisplay();
		                     break;
     }
}

void init(){
	  glClearColor(0.0,0.60,0.80,1.0);	
	   //glClearColor(0,0,0,1.0);
	//glMatrixMode(GL_PROJECTION);
	//glLoadIdentity();
	gluOrtho2D(0,800,0,500);
	//glMatrixMode(GL_MODELVIEW);

}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(1000,600);
	glutCreateWindow("car");
	glutDisplayFunc(display);
	//glutTimerFunc(0,t,0); //time , function(return void & int argument) to be repeated , argument for the funt.
	        glutSpecialFunc(catchKey);
                      //it will call the function only one time , so will make timer a recursive fun.  
	init();
	glutMainLoop();
}


	void t (int a)
	{
		glutPostRedisplay(); //display func will be called 
		glutTimerFunc(1000/60,t,0); //60fps
               
	}

