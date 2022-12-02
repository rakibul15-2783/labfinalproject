#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>
float p=0;
float q=0;

void init(void)
{
  glClearColor(1.0,1.0,1.0,1.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  //glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
  gluOrtho2D(0.0,128.0,0.0,73.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}
void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy){

    glBegin((GL_TRIANGLE_FAN));
    glVertex2d(cx,cy);
    int i = 0;
    for(i; i<=100 ; i++){
        float angle = 2.0f * 3.1416f * i/100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((cx+x),(cy+y));
    }
    glEnd();


}


void Draw(void)
{

 glClear(GL_COLOR_BUFFER_BIT);

if(p<=128){
 p=p+0.05;
 }
 else{
 p=2;
 }

 if(q<=128){
 q=q+0.001;
 }
 else{
 q=2;
 }
 glutPostRedisplay();
 //first segment

   glColor3f(0.279f, 0.820f, 0.369f);
   glBegin(GL_POLYGON);
   glVertex2f(0,0);
   glVertex2f(128,0);
   glVertex2f(128,20);
   glVertex2f(0,20);
   glEnd();

 //second segment

   glColor3f( 0.919f, 0.930f, 0.605f);
   glBegin(GL_POLYGON);
   glVertex2f(0,18);
   glVertex2f(128,18);
   glVertex2f(128,40);
   glVertex2f(0,40);
   glEnd();

   //first line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(0,27);
   glVertex2f(3,27);
   glVertex2f(3,33);
   glVertex2f(0,33);
   glEnd();

    //2nd line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(6,27);
   glVertex2f(9,27);
   glVertex2f(9,33);
   glVertex2f(6,33);
   glEnd();

   //3rd line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(12,27);
   glVertex2f(15,27);
   glVertex2f(15,33);
   glVertex2f(12,33);
   glEnd();

   //4th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(18,27);
   glVertex2f(21,27);
   glVertex2f(21,33);
   glVertex2f(18,33);
   glEnd();


   //5th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(24,27);
   glVertex2f(27,27);
   glVertex2f(27,33);
   glVertex2f(24,33);
   glEnd();

   //6th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(30,27);
   glVertex2f(33,27);
   glVertex2f(33,33);
   glVertex2f(30,33);
   glEnd();

   //7th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(36,27);
   glVertex2f(39,27);
   glVertex2f(39,33);
   glVertex2f(36,33);
   glEnd();

   //8th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(42,27);
   glVertex2f(45,27);
   glVertex2f(45,33);
   glVertex2f(42,33);
   glEnd();

   //9th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(48,27);
   glVertex2f(51,27);
   glVertex2f(51,33);
   glVertex2f(48,33);
   glEnd();

   //10th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(54,27);
   glVertex2f(57,27);
   glVertex2f(57,33);
   glVertex2f(54,33);
   glEnd();

   //11th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(60,27);
   glVertex2f(63,27);
   glVertex2f(63,33);
   glVertex2f(60,33);
   glEnd();

   //12th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(66,27);
   glVertex2f(69,27);
   glVertex2f(69,33);
   glVertex2f(66,33);
   glEnd();

   //13th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(72,27);
   glVertex2f(75,27);
   glVertex2f(75,33);
   glVertex2f(72,33);
   glEnd();

   //14th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(78,27);
   glVertex2f(81,27);
   glVertex2f(81,33);
   glVertex2f(78,33);
   glEnd();

   //15th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(84,27);
   glVertex2f(87,27);
   glVertex2f(87,33);
   glVertex2f(84,33);
   glEnd();

   //16th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(90,27);
   glVertex2f(93,27);
   glVertex2f(93,33);
   glVertex2f(90,33);
   glEnd();

   //17th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(96,27);
   glVertex2f(99,27);
   glVertex2f(99,33);
   glVertex2f(96,33);
   glEnd();

   //18th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(102,27);
   glVertex2f(105,27);
   glVertex2f(105,33);
   glVertex2f(102,33);
   glEnd();

   //19th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(108,27);
   glVertex2f(111,27);
   glVertex2f(111,33);
   glVertex2f(108,33);
   glEnd();

   //20th line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(114,27);
   glVertex2f(117,27);
   glVertex2f(117,33);
   glVertex2f(114,33);
   glEnd();


   //21 line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(120,27);
   glVertex2f(123,27);
   glVertex2f(123,33);
   glVertex2f(120,33);
   glEnd();

   //22 line path

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(126,27);
   glVertex2f(129,27);
   glVertex2f(129,33);
   glVertex2f(126,33);
   glEnd();

   //line frame one

   glColor3f( 0.350f, 0.336f, 0.298f);
   glBegin(GL_POLYGON);
   glVertex2f(0,28);
   glVertex2f(128,28);
   glVertex2f(128,29);
   glVertex2f(0,29);
   glEnd();

   //line frame two

   glColor3f( 0.350f, 0.336f, 0.298f);
   glBegin(GL_POLYGON);
   glVertex2f(0,31);
   glVertex2f(128,31);
   glVertex2f(128,32);
   glVertex2f(0,32);
   glEnd();

   ////////////////////3rd segment///////////////////

   glColor3f(0.279f, 0.820f, 0.369f);
   glBegin(GL_POLYGON);
   glVertex2f(0,40);
   glVertex2f(128,40);
   glVertex2f(128,53);
   glVertex2f(0,53);
   glEnd();

          ///////////4th segment////////////

   glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
   glBegin(GL_POLYGON);
   glVertex2f(0,53);
   glVertex2f(128,53);
   glVertex2f(128,73);
   glVertex2f(0,73);
   glEnd();

                             //right to last home

   glColor3f(0.984f, 1.02f, 0.0600f);
   glBegin(GL_POLYGON);
   glVertex2f(102,40);
   glVertex2f(120,40);
   glVertex2f(120,50);
   glVertex2f(102,50);
   glEnd();

   //roof

   glColor3f(0.820f, 0.279f, 0.351f);
   glBegin(GL_POLYGON);
   glVertex2f(100,50);
   glVertex2f(122,50);
   glVertex2f(122,54);
   glVertex2f(100,54);
   glEnd();

   //door

   glColor3f(0.820f, 0.279f, 0.351f);
   glBegin(GL_POLYGON);
   glVertex2f(110,40);
   glVertex2f(113,40);
   glVertex2f(113,45);
   glVertex2f(110,45);
   glEnd();

   //left window

   glColor3f(0.890f, 0.685f, 0.713f);
   glBegin(GL_POLYGON);
   glVertex2f(105,44.5);
   glVertex2f(108,44.5);
   glVertex2f(108,47);
   glVertex2f(105,47);
   glEnd();

   //right window

   glColor3f(0.890f, 0.685f, 0.713f);
   glBegin(GL_POLYGON);
   glVertex2f(115,44.5);
   glVertex2f(118,44.5);
   glVertex2f(118,47);
   glVertex2f(115,47);
   glEnd();


                //national flag

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(87.5,40);
   glVertex2f(88,40);
   glVertex2f(88,50);
   glVertex2f(87.5,50);
   glEnd();

   glColor3f(0.0259f, 0.370f, 0.0947f);
   glBegin(GL_POLYGON);
   glVertex2f(88,46);
   glVertex2f(94,46);
   glVertex2f(94,50);
   glVertex2f(88,50);
   glEnd();

   glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
   circle(1.5,1.5,91,47.9);


                 //last to 2nd home


   glColor3f(0.0360f, 0.560f, 0.720f);
   glBegin(GL_POLYGON);
   glVertex2f(72,40);
   glVertex2f(84,40);
   glVertex2f(84,52);
   glVertex2f(72,52);
   glEnd();

   //roof

   glColor3f(0.960f, 0.374f, 0.823f);
   glBegin(GL_POLYGON);
   glVertex2f(70,52);
   glVertex2f(86,52);
   glVertex2f(78,57);
   glEnd();

   //door

   glColor3f(0.960f, 0.374f, 0.823f);
   glBegin(GL_POLYGON);
   glVertex2f(77,40);
   glVertex2f(80,40);
   glVertex2f(80,46);
   glVertex2f(77,46);
   glEnd();


              ////cloud


   glColor3f(1.0f, 1.0f, 1.0f);
   circle(4.5,3,q+65,64);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(4.5,3,q+57,64);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(4.5,3,q+61,68);


           //// right-cloud


   glColor3f(1.0f, 1.0f, 1.0f);
   circle(3,3,100,64);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(3,3,100,61);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(3,3,105,64);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(3,3,105,61);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(3,3,96,62.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(3,3,109,62.5);


           ////sun


   glColor3f(1.0f, 0.9f, 0.3f);
   circle(5,5,64,60);

             //tree

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(60.5,40);
   glVertex2f(62.5,40);
   glVertex2f(62.5,50);
   glVertex2f(60.5,50);
   glEnd();

   //first part of leaf

   glColor3f(0.0259f, 0.370f, 0.0947f);
   glBegin(GL_POLYGON);
   glVertex2f(57,50);
   glVertex2f(66,50);
   glVertex2f(61.5,54);
   glEnd();

   //2nd part of leaf

   glColor3f(0.0259f, 0.370f, 0.0947f);;
   glBegin(GL_POLYGON);
   glVertex2f(57.2,52);
   glVertex2f(65.8,52);
   glVertex2f(61.5,56);
   glEnd();

   //3rd part of leaf

   glColor3f(0.0259f, 0.370f, 0.0947f);
   glBegin(GL_POLYGON);
   glVertex2f(57.3,54);
   glVertex2f(65.6,54);
   glVertex2f(61.5,58);
   glEnd();

   //4th part of leaf

   glColor3f(0.0259f, 0.370f, 0.0947f);
   glBegin(GL_POLYGON);
   glVertex2f(58,56);
   glVertex2f(64.8,56);
   glVertex2f(61.4,60);
   glEnd();


          // left home


  //left part

   glColor3f(0.960f, 0.374f, 0.452f);
   glBegin(GL_POLYGON);
   glVertex2f(15,40);
   glVertex2f(22,40);
   glVertex2f(22,56);
   glVertex2f(15,56);
   glEnd();

   //left part-middle

   glColor3f(0.820f, 0.680f, 0.353f);
   glBegin(GL_POLYGON);
   glVertex2f(16,40);
   glVertex2f(21,40);
   glVertex2f(21,49);
   glVertex2f(16,49);
   glEnd();

  //left part-roof

   glColor3f(0.980f, 0.453f, 0.245f);
   glBegin(GL_POLYGON);
   glVertex2f(12,56);
   glVertex2f(25,56);
   glVertex2f(18,62);
   glEnd();

   //left to 2nd part

   glColor3f(0.984f, 1.02f, 0.0600f);
   glBegin(GL_POLYGON);
   glVertex2f(22,40);
   glVertex2f(28,40);
   glVertex2f(28,48);
   glVertex2f(22,48);
   glEnd();

   //left to 3rd part

   glColor3f(0.984f, 1.02f, 0.0600f);
   glBegin(GL_POLYGON);
   glVertex2f(28,40);
   glVertex2f(28,47);
   glVertex2f(37,52);
   glVertex2f(46,47);
   glVertex2f(46,40);
   glEnd();

   //left to 3rd part-door

   glColor3f(0.820f, 0.680f, 0.353f);
   glBegin(GL_POLYGON);
   glVertex2f(35,40);
   glVertex2f(35,46);
   glVertex2f(39,46);
   glVertex2f(39,40);
   glEnd();

   //left to 4th part

   glColor3f(0.960f, 0.374f, 0.452f);
   glBegin(GL_POLYGON);
   glVertex2f(46,40);
   glVertex2f(46,48);
   glVertex2f(49,53);
   glVertex2f(52,48);
   glVertex2f(52,40);
   glEnd();

   //main roof part-right half

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(46,48);
   glVertex2f(48,51);
   glVertex2f(44,55);
   glVertex2f(37,55);
   glVertex2f(37,54);
   glEnd();

   //main roof part-left half

   glColor3f( 0.570f, 0.148f, 0.176f);
   glBegin(GL_POLYGON);
   glVertex2f(37,54);
   glVertex2f(37,55);
   glVertex2f(22,55);
   glVertex2f(22,48);
   glVertex2f(28,48);
   glEnd();

   //main roof part-border

   glColor3f(0.980f, 0.453f, 0.245f);
   glBegin(GL_POLYGON);
   glVertex2f(45,47);
   glVertex2f(46,47);
   glVertex2f(46,48);
   glVertex2f(37,54);
   glVertex2f(37,52);
   glEnd();

   glColor3f(0.980f, 0.453f, 0.245f);
   glBegin(GL_POLYGON);
   glVertex2f(37,52);
   glVertex2f(37,54);
   glVertex2f(28,48);
   glVertex2f(28,47);
   glVertex2f(29,47);


   glEnd();




              //train



    //train-3rd apartment

   glColor3f(0.420f, 0.263f, 0.210f);
   glBegin(GL_POLYGON);
   glVertex2f(p+2,32);
   glVertex2f(p+10,32);
   glVertex2f(p+10,42);
   glVertex2f(p+2,42);
   glEnd();

   glColor3f(0.420f, 0.263f, 0.210f);
   circle(2,2,p+6,30.3);

   //train-3rd apartment-window

   glColor3f(0.980f, 0.453f, 0.245f);
   glBegin(GL_POLYGON);
   glVertex2f(p+4,37);
   glVertex2f(p+8,37);
   glVertex2f(p+8,40);
   glVertex2f(p+4,40);
   glEnd();

   //train-connection between 3rd and 2nd apartment

   glColor3f(0.980f, 0.453f, 0.245f);
   glBegin(GL_POLYGON);
   glVertex2f(p+10,34);
   glVertex2f(p+13,34);
   glVertex2f(p+13,36);
   glVertex2f(p+10,36);
   glEnd();

   //train-2nd apartment

   glColor3f(0.420f, 0.263f, 0.210f);
   glBegin(GL_POLYGON);
   glVertex2f(p+13,32);
   glVertex2f(p+21,32);
   glVertex2f(p+21,42);
   glVertex2f(p+13,42);
   glEnd();

   glColor3f(0.420f, 0.263f, 0.210f);
   circle(2,2,p+17,30.3);

   //train-2nd apartment-window

   glColor3f(0.980f, 0.453f, 0.245f);
   glBegin(GL_POLYGON);
   glVertex2f(p+15,37);
   glVertex2f(p+19,37);
   glVertex2f(p+19,40);
   glVertex2f(p+15,40);
   glEnd();

   //train-connection between 2nd and 1st apartment

   glColor3f(0.980f, 0.453f, 0.245f);
   glBegin(GL_POLYGON);
   glVertex2f(p+21,34);
   glVertex2f(p+24,34);
   glVertex2f(p+24,36);
   glVertex2f(p+21,36);
   glEnd();

   //train- 1st apartment

   glColor3f(0.420f, 0.263f, 0.210f);
   glBegin(GL_POLYGON);
   glVertex2f(p+24,32);
   glVertex2f(p+32,32);
   glVertex2f(p+32,42);
   glVertex2f(p+24,42);
   glEnd();

   glColor3f(0.420f, 0.263f, 0.210f);
   circle(2,2,p+28,30.3);

   //train-1st apartment-window

   glColor3f(0.980f, 0.453f, 0.245f);
   glBegin(GL_POLYGON);
   glVertex2f(p+26,37);
   glVertex2f(p+30,37);
   glVertex2f(p+30,40);
   glVertex2f(p+26,40);
   glEnd();

   ////train-engine-aircerculation

   glColor3f(0.750f, 0.0300f, 0.0300f);
   glBegin(GL_POLYGON);
   glVertex2f(p+37,32);
   glVertex2f(p+39,32);
   glVertex2f(p+39,39);
   glVertex2f(p+37,39);
   glEnd();

   glColor3f(0.750f, 0.0300f, 0.0300f);
   glBegin(GL_POLYGON);
   glVertex2f(p+36,39);
   glVertex2f(p+40,39);
   glVertex2f(p+40,41);
   glVertex2f(p+36,41);
   glEnd();

   //train-engine

   glColor3f(0.750f, 0.0300f, 0.0300f);
   glBegin(GL_POLYGON);
   glVertex2f(p+32,32);
   glVertex2f(p+40,32);
   glVertex2f(p+40,36);
   glVertex2f(p+32,36);
   glEnd();


   glColor3f(0.420f, 0.263f, 0.210f);
   circle(2,2,p+36,30.3);





   //train-engine-front

   glColor3f(0.980f, 0.453f, 0.245f);
   glBegin(GL_POLYGON);
   glVertex2f(p+40,34);
   glVertex2f(p+41,34);
   glVertex2f(p+41,35);
   glVertex2f(p+40,35);
   glEnd();


///////////circle////////



	glFlush();


glutSwapBuffers();
}


int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1500,1500);
    glutCreateWindow("Project");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
