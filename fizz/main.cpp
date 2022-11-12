#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

float windowWidth=600;
float windowHeight=500;
float cloudx = 0;
float boatx = 0;
bool cloudScale = false;
bool boatScale = false;

void tree(){

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(34,139,34);
		glVertex2f(-45.5,26.0);
		glVertex2f(-45.5,20.0);
		glVertex2f(-46.5,20.0);
		glVertex2f(-46.5,26.0);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_TRIANGLES);

		glColor3ub(34,139,34);
		glVertex2f(-49.0,26.0);
		glVertex2f(-46.0,30.0);
        glVertex2f(-43.0,26.0);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_TRIANGLES);

		glColor3ub(34,139,34);
		glVertex2f(-49.0,27.5);
		glVertex2f(-46.0,31.0);
        glVertex2f(-43.0,27.5);

	glEnd();
    glPopMatrix();
}

void mountain(){

    glPushMatrix();
      glBegin(GL_TRIANGLES);

		glColor3ub(34,139,34);
		glVertex2f(-12.0,20.0);
		glVertex2f(-6.0,28.0);
        glVertex2f(-5.0,20.0);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_TRIANGLES);

		glColor3ub(34,139,34);
		glVertex2f(-7.0,20.0);
		glVertex2f(-1.0,30.0);
        glVertex2f(3.0,20.0);

	glEnd();
    glPopMatrix();



}

void house(){
   glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(255,255,153);
		glVertex2f(-30.0,10.0);
		glVertex2f(-30.0,0.0);
		glVertex2f(-40.0,0.0);
		glVertex2f(-40.0,10.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(255,255,102);
		glVertex2f(-40.0,10.0);
		glVertex2f(-40.0,0.0);
		glVertex2f(-43.0,0.0);
		glVertex2f(-43.0,10.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub( 229,204,255);
		glVertex2f(-32.0,14.0);
		glVertex2f(-30.0,10.0);
		glVertex2f(-40.0,10.0);
		glVertex2f(-41.0,14.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
      glBegin(GL_TRIANGLES);

		glColor3ub(204,153,255);
		glVertex2f(-40.0,10.0);
		glVertex2f(-41.0,14.0);
        glVertex2f(-43.0,10.0);

	glEnd();
    glPopMatrix();

//door
  glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(192,192,192 );
		glVertex2f(-33.8,6.0);
		glVertex2f(-33.8,0.0);
		glVertex2f(-35.7,0.0);
		glVertex2f(-35.7,6.0);
    glEnd();
    glPopMatrix();

//window`
    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(192,192,192 );
		glVertex2f(-37.0,5.0);
		glVertex2f(-37.0,3.0);
		glVertex2f(-39.0,3.0);
		glVertex2f(-39.0,5.0);
    glEnd();
    glPopMatrix();
//window1
    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(192,192,192 );
		glVertex2f(-31.0,5.0);
		glVertex2f(-31.0,3.0);
		glVertex2f(-33.0,3.0);
		glVertex2f(-33.0,5.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(51,25,0 );
		glVertex2f(-43.0,0.0);
		glVertex2f(-44.0,-1.0);
		glVertex2f(-29.0,-1.0);
		glVertex2f(-30.0,0.0);
    glEnd();
    glPopMatrix();

}

void tree2(){
     glPushMatrix();

		glColor3ub(34,139,34);
		glTranslatef(-12,4,0);
        glScalef(0.5,0.6,0);
        glutSolidSphere(5.5,50,7);

        glPopMatrix();
	  glEnd();

	   glPushMatrix();

		glColor3ub(34,139,34);
		glTranslatef(-8,4,0);
        glScalef(0.5,0.6,0);
        glutSolidSphere(5.5,50,7);

        glPopMatrix();
	  glEnd();

	  glPushMatrix();

		glColor3ub(34,139,34);
		glTranslatef(-9,6,0);
        glScalef(0.5,0.6,0);
        glutSolidSphere(5.5,50,7);

        glPopMatrix();
	  glEnd();

	   glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(102,51,0);
		glVertex2f(-9.2,0.5);
		glVertex2f(-9.2,-8.0);
		glVertex2f(-10.9,-8.0);
		glVertex2f(-10.9,0.5);

	glEnd();
    glPopMatrix();

}

void sun(){

    glPushMatrix();

		glPushMatrix();
        glColor3ub(255, 153,51);
		glTranslatef(14,40,0);
        glScalef(1,1,0);
        glutSolidSphere(4,40,5);

        glPopMatrix();
	  glEnd();
}

void cloud(){

    glPushMatrix();
        glColor3ub(255, 255, 255);
		glTranslatef(-25 + cloudx,40,0);
        glScalef(1,1,0);
        glutSolidSphere(4,40,5);

        glPopMatrix();
	  glEnd();

    glPushMatrix();
        glColor3ub(255, 255, 255);
		glTranslatef(-21 + cloudx,40,0);
        glScalef(0.8,0.8,0 );
        glutSolidSphere(4,40,5);

        glPopMatrix();
	  glEnd();

	  glPushMatrix();
        glColor3ub(255, 255, 255);
		glTranslatef(-29 + cloudx,40,0);
        glScalef(0.8,0.8,0);
        glutSolidSphere(4,40,5);

        glPopMatrix();
	  glEnd();
}

void boat(){
//boat

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(0,0,0);
		glVertex2f(-48.0 + boatx,12.0);
		glVertex2f(-46.0 + boatx,8.0);
		glVertex2f(-35.0 + boatx,8.0);
		glVertex2f(-33.0 + boatx,12.0);

	 glEnd();
    glPopMatrix();

   glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(17,11,6);
		glVertex2f(-46.0 + boatx,14.5);
		glVertex2f(-46.0 + boatx,12.0);
		glVertex2f(-35.0 + boatx,12.0);
		glVertex2f(-35.0 + boatx,14.5);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(96,96,96);
		glVertex2f(-45.0 + boatx,16.5);
		glVertex2f(-45.0 + boatx,14.5);
		glVertex2f(-36.0 + boatx,14.5);
		glVertex2f(-36.0 + boatx,16.5);

	glEnd();
    glPopMatrix();

//1st row
     glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(0,0,0);
		glVertex2f(-44.0 + boatx,18.5);
		glVertex2f(-44.0 + boatx,16.5);
		glVertex2f(-42.5 + boatx,16.5);
		glVertex2f(-42.5 + boatx,18.5);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(219,122,24);
		glVertex2f(-44.0 + boatx,19.5);
		glVertex2f(-44.0 + boatx,18.5);
		glVertex2f(-42.5 + boatx,18.5);
		glVertex2f(-42.5 + boatx,19.5);

	glEnd();
    glPopMatrix();

//2nd row
      glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(0,0,0);
		glVertex2f(-41.0 + boatx,18.5);
		glVertex2f(-41.0 + boatx,16.5);
		glVertex2f(-39.5 + boatx,16.5);
		glVertex2f(-39.5 + boatx,18.5);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(219,122,24);
		glVertex2f(-41.0 + boatx,19.5);
		glVertex2f(-41.0 + boatx,18.5);
		glVertex2f(-39.5 + boatx,18.5);
		glVertex2f(-39.5 + boatx,19.5);

	glEnd();
    glPopMatrix();

//3rd row
      glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(0,0,0);
		glVertex2f(-38.0 + boatx,18.5);
		glVertex2f(-38.0 + boatx,16.5);
		glVertex2f(-36.5 + boatx,16.5);
		glVertex2f(-36.5 + boatx,18.5);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(219,122,24);
		glVertex2f(-38.0 + boatx,19.5);
		glVertex2f(-38.0 + boatx,18.5);
		glVertex2f(-36.5 + boatx,18.5);
		glVertex2f(-36.5 + boatx,19.5);

	glEnd();
    glPopMatrix();
}

void boat2(){
//boat

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(51,0,0);
		glVertex2f(32.0 ,-13.0);
		glVertex2f(27.0 ,-17.0);
		glVertex2f(19.0 ,-17.0);
		glVertex2f(14.0 ,-13.0);

	 glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(0,0,0);
		glVertex2f(18.0 ,-11.0);
		glVertex2f(18.0 ,-13.0);
		glVertex2f(28.0 ,-13.0);
		glVertex2f(28.0 ,-11.0);

	 glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(0,0,0);
		glVertex2f(17.0 ,-8.0);
		glVertex2f(15.0 ,-18.0);
		glVertex2f(16.0 ,-18.0);
		glVertex2f(18.0 ,-8.0);

	 glEnd();
    glPopMatrix();


}

void grass(){
    glPushMatrix();

		glPushMatrix();
        glColor3ub(47,117,50);
		glTranslatef(-44,-40,0);
        glScalef(5.5,2,0);
        glutSolidSphere(5,50,7);

        glPopMatrix();
	  glEnd();
}

void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-50, 50, -50, 50);

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glViewport(0, 0 ,windowWidth ,windowHeight);


//---------------------VILLAGE SCENERY----------------------

//ground-----
    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(76,98,27);
		glVertex2f(-70.0,10.0);
		glVertex2f(-70.0,-50.0);
		glVertex2f(70.0,-50.0);
		glVertex2f(70.0,10.0);
    glEnd();
    glPopMatrix();


//sky-----------

   glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(125, 249, 255);
		glVertex2f(-70.0,60.0);
		glVertex2f(-70.0,20.0);
		glVertex2f(70.0,20.0);
		glVertex2f(70.0,60.0);
    glEnd();
    glPopMatrix();

//river
   glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(100, 149, 237);
		glVertex2f(-70.0,20.0);
		glVertex2f(-70.0,7.0);
		glVertex2f(70.0,7.0);
		glVertex2f(70.0,20.0);
    glEnd();
    glPopMatrix();

//river-2
   glPushMatrix();
      glBegin(GL_POLYGON);
      glColor3ub(100, 149, 237);
       glVertex2f(30.0,10.0);
       glVertex2f(10.0,-5.0);
       glVertex2f(30.0,-5.0);
       glVertex2f(10.0,-20.0);
       glVertex2f(30.0,-20.0);
       glVertex2f(10.0,-35.0);
       glVertex2f(50.0,-35.0);
       glVertex2f(10.0,-50.0);
       glVertex2f(70.0,-50.0);
       glVertex2f(70.0,10.0);
    glEnd();
    glPopMatrix();

//BOAT----
  boat();
  boat2();

//sun--
  sun();

//cloud
  cloud();
   glPushMatrix();
    glTranslatef(20,6,0);
    glScalef(1.2,1,0);
    cloud();
    glPopMatrix();

   glPushMatrix();
    glTranslatef(40,-6,0);
    glScalef(1,1,0);
    cloud();
    glPopMatrix();

  glPushMatrix();
    glTranslatef(60,3,0);
    glScalef(1,1,0);
    cloud();
    glPopMatrix();

//tree--
 tree();
  glPushMatrix();
    glTranslatef(10,0,0);
    glScalef(1,1,0);
    tree();
    glPopMatrix();

  glPushMatrix();
    glTranslatef(20,0,0);
    glScalef(1,1,1);
    tree();
    glPopMatrix();

  glPushMatrix();
    glTranslatef(30,0,0);
    glScalef(1,1,1);
    tree();
    glPopMatrix();

    mountain();


  glPushMatrix();
    glTranslatef(18,-6,0);
    glScalef(1.7,1.3,1);
    mountain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(32,0,0);
    glScalef(1,1,1);
    mountain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(47,-6,0);
    glScalef(1.7,1.3,1);
    mountain();
    glPopMatrix();

//house--

  glPushMatrix();
    glTranslatef(5,-25,0);
    glScalef(1.2,1.2,1);
    house();
    glPopMatrix();

  glPushMatrix();
    glTranslatef(12,-7,0);
    glScalef(1.1,0.9,1);
    house();
    glPopMatrix();

  glPushMatrix();
    glTranslatef(41,-7,0);
    glScalef(1,0.9,1);
    house();
    glPopMatrix();

//tree2----
   // tree2();

  glPushMatrix();
    glTranslatef(-6,-4,0);
    glScalef(1,1,1);
    tree2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3,-4,0);
    glScalef(1,1,1);
    tree2();
    glPopMatrix();

//grass
 grass();
  glPushMatrix();
    glTranslatef(30,15,0);
    glScalef(1,1.4,1);
    grass();
    glPopMatrix();



     glFlush();
    glutSwapBuffers();
}

void keyboard( unsigned char key, int x, int y ){
    switch ( key )
    {
    case 'A':
         cloudScale = true;
         glutPostRedisplay();
        break;
    case 'a':
         cloudScale = false;
         glutPostRedisplay();
        break;

    case 'B':
         boatScale = true;
         glutPostRedisplay();
        break;
    case 'b':
         boatScale = false;
         glutPostRedisplay();
        break;
    }
}
void boatanimation(){
    if(boatScale == true){
		boatx += 0.005;
		if(boatx > 100)
			boatx = -30;
    }
    else if (boatScale == false)
	{
		boatx = 1;

	}
}
void cloudanimation(){
    if(cloudScale == true){
		cloudx += 0.005;
		if(cloudx > 100)
			cloudx = -70;
    }
    else if (cloudScale == false)
	{
		cloudx = 1;

	}
}

void animation(void){
    boatanimation();
    cloudanimation();

    glutPostRedisplay();
}
int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("Village Scenery made by mrFizz");

    glutKeyboardFunc(keyboard);
     glutIdleFunc(animation);
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
