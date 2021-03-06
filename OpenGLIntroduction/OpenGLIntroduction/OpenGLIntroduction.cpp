
#include "stdafx.h"
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

//openGL
void RunOpenGL(int argc, char *argv[]);

//
////using namespace std;
////
////void RunOpenGL(int argc, char *argv[]);
////
////int main(int argc, char *argv[]) {
////
////	RunOpenGL(argc, argv);
////	
////	return 0;
////}
//
////#include <GL/glut.h>
////
//char spin = 0;
//void keyboard(unsigned char key, int x, int y)
//{
//	if (key == ' ')
//	{
//		spin = !spin;
//	}
//}
//
//// Initialize OpenGL Graphics 
//void initGL() {
//	// Set "clearing" or background color
//	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
//}
//
//// Called back when there is no other event to be handled */
//void idle() {
//	glutPostRedisplay();   // Post a re-paint request to activate display()
//}
//
//// Handler for window-repaint event. Call back when the window first appears and
////   whenever the window needs to be re-painted. */
//
//
//void display() {
//	float angle = 0;
//	float moveX = 0.0f;
//	while (angle <= 90) {
//		glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer
//		glMatrixMode(GL_MODELVIEW);     // To operate on Model-View matrix
//		glLoadIdentity();               // Reset the model-view matrix
//
//		glPushMatrix();                     // Save model-view matrix setting
//		//glTranslatef(moveX, 0.4f, 0.0f);    // Translate
//		glRotatef(angle, 0.0f, 0.0f, 1.0f); // rotate by angle in degrees
//		glBegin(GL_QUADS);                  // Each set of 4 vertices form a quad
//		glColor3f(1.0f, 0.0f, 0.0f);     // Red
//		glVertex2f(-0.3f, -0.3f);
//		glVertex2f(0.3f, -0.3f);
//		glVertex2f(0.3f, 0.3f);
//		glVertex2f(-0.3f, 0.3f);
//		glEnd();
//		glPopMatrix();                      // Restore the model-view matrix
//
//		//glPushMatrix();                     // Save model-view matrix setting
//		//glTranslatef(-0.4f, -0.3f, 0.0f);   // Translate
//		//glRotatef(angle, 0.0f, 0.0f, 1.0f); // rotate by angle in degrees
//		//glBegin(GL_QUADS);
//		//glColor3f(0.0f, 1.0f, 0.0f); // Green
//		//glVertex2f(-0.3f, -0.3f);
//		//glVertex2f(0.3f, -0.3f);
//		//glVertex2f(0.3f, 0.3f);
//		//glVertex2f(-0.3f, 0.3f);
//		//glEnd();
//		//glPopMatrix();                      // Restore the model-view matrix
//		//
//		//glPushMatrix();                     // Save model-view matrix setting
//		//glTranslatef(-0.7f, -0.5f, 0.0f);   // Translate
//		//glRotatef(angle, 0.0f, 0.0f, 1.0f); // rotate by angle in degrees
//		//glBegin(GL_QUADS);
//		//glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
//		//glVertex2f(-0.2f, -0.2f);
//		//glColor3f(1.0f, 1.0f, 1.0f); // White
//		//glVertex2f(0.2f, -0.2f);
//		//glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
//		//glVertex2f(0.2f, 0.2f);
//		//glColor3f(1.0f, 1.0f, 1.0f); // White
//		//glVertex2f(-0.2f, 0.2f);
//		//glEnd();
//		//glPopMatrix();                      // Restore the model-view matrix
//		//
//		//glPushMatrix();                     // Save model-view matrix setting
//		//glTranslatef(0.4f, -0.3f, 0.0f);    // Translate
//		//glRotatef(angle, 0.0f, 0.0f, 1.0f); // rotate by angle in degrees
//		//glBegin(GL_TRIANGLES);
//		//glColor3f(0.0f, 0.0f, 1.0f); // Blue
//		//glVertex2f(-0.3f, -0.2f);
//		//glVertex2f(0.3f, -0.2f);
//		//glVertex2f(0.0f, 0.3f);
//		//glEnd();
//		//glPopMatrix();                      // Restore the model-view matrix
//		//
//		//glPushMatrix();                     // Save model-view matrix setting
//		//glTranslatef(0.6f, -0.6f, 0.0f);    // Translate
//		//glRotatef(180.0f + angle, 0.0f, 0.0f, 1.0f); // Rotate 180+angle degree
//		//glBegin(GL_TRIANGLES);
//		//glColor3f(1.0f, 0.0f, 0.0f); // Red
//		//glVertex2f(-0.3f, -0.2f);
//		//glColor3f(0.0f, 1.0f, 0.0f); // Green
//		//glVertex2f(0.3f, -0.2f);
//		//glColor3f(0.0f, 0.0f, 1.0f); // Blue
//		//glVertex2f(0.0f, 0.3f);
//		//glEnd();
//		//glPopMatrix();                      // Restore the model-view matrix
//		//
//		//glPushMatrix();                     // Save model-view matrix setting
//		//glTranslatef(0.5f, 0.4f, 0.0f);     // Translate
//		//glRotatef(angle, 0.0f, 0.0f, 1.0f); // rotate by angle in degrees
//		//glBegin(GL_POLYGON);
//		//glColor3f(1.0f, 1.0f, 0.0f); // Yellow
//		//glVertex2f(-0.1f, -0.2f);
//		//glVertex2f(0.1f, -0.2f);
//		//glVertex2f(0.2f, 0.0f);
//		//glVertex2f(0.1f, 0.2f);
//		//glVertex2f(-0.1f, 0.2f);
//		//glVertex2f(-0.2f, 0.0f);
//		//glEnd();
//		//glPopMatrix();                      // Restore the model-view matrix
//
//		glutSwapBuffers();   // Double buffered - swap the front and back buffers
//
//		// Change the rotational angle after each display()
//
//		angle += 1.0;
//
//		//glFlush();
//
//		moveX += 0.001f;
//
//		//glutPostRedisplay();
//	}
//
//	
//	angle = 0;
//	while (angle <= 90) {
//		glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer
//		glMatrixMode(GL_MODELVIEW);     // To operate on Model-View matrix
//		glLoadIdentity();               // Reset the model-view matrix
//		 
//		glPushMatrix();                     // Save model-view matrix setting
//		//glTranslatef(-0.5f, 0.4f, 0.0f);    // Translate
//		//glRotatef(-angle, 0.0f, 0.0f, 1.0f); // rotate by angle in degrees
//		glBegin(GL_QUADS);                  // Each set of 4 vertices form a quad
//		glColor3f(1.0f, 0.0f, 0.0f);     // Red
//		glVertex2f(-0.3f, -0.3f);
//		glVertex2f(0.3f, -0.3f);
//		glVertex2f(0.3f, 0.3f);
//		glVertex2f(-0.3f, 0.3f);
//		glEnd();
//		glPopMatrix();                      // Restore the model-view matrix
//		glutSwapBuffers();   // Double buffered - swap the front and back buffers
//
//		angle += 0.5;
//
//		//glutTimerFunc(16, timer, 0);
//		//glutPostRedisplay();
//	}
//
//	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer
//	glMatrixMode(GL_MODELVIEW);     // To operate on Model-View matrix
//	glLoadIdentity();
//	glPushMatrix();                     // Save model-view matrix setting
//	glTranslatef(0.5f, 0.4f, 0.0f);    // Translate
//	glBegin(GL_QUADS);                  // Each set of 4 vertices form a quad
//	glColor3f(1.0f, 0.0f, 0.0f);     // Red
//	glVertex2f(-0.3f, -0.3f);
//	glVertex2f(0.3f, -0.3f);
//	glVertex2f(0.3f, 0.3f);
//	glVertex2f(-0.3f, 0.3f);
//	glEnd();
//	glPopMatrix();                      // Restore the model-view matrix
//	glutSwapBuffers();
//
//}
//
//
//    /* Handler for window re-size event. Called back when the window first appears and
//   whenever the window is re-sized with its new width and height */
//void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
//   // Compute aspect ratio of the new window
//	if (height == 0) height = 1;                // To prevent divide by 0
//	GLfloat aspect = (GLfloat)width / (GLfloat)height;
//
//	// Set the viewport to cover the new window
//	glViewport(0, 0, width, height);
//
//	// Set the aspect ratio of the clipping area to match the viewport
//	glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
//	glLoadIdentity();
//	if (width >= height) {
//		// aspect >= 1, set the height from -1 to 1, with larger width
//		gluOrtho2D(-1.0 * aspect, 1.0 * aspect, -1.0, 1.0);
//	}
//	else {
//		// aspect < 1, set the width to -1 to 1, with larger height
//		gluOrtho2D(-1.0, 1.0, -1.0 / aspect, 1.0 / aspect);
//	}
//}
//
//
// //* Main function: GLUT runs as a console application starting at main() */
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);          // Initialize GLUT
//	glutInitDisplayMode(GLUT_DOUBLE);  // Enable double buffered mode
//	glutInitWindowSize(640, 480);   // Set the window's initial width & height - non-square
//	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
//	glutCreateWindow("Animation via Idle Function");  // Create window with the given title
//
//	glutDisplayFunc(display2);       // Register callback handler for window re-paint event
//	glutReshapeFunc(reshape);       // Register callback handler for window re-size event
//	glutIdleFunc(idle);             // Register callback handler if no other event
//	initGL();                       // Our own OpenGL initialization
//	glutKeyboardFunc(keyboard);
//
//	//glutTimerFunc(0, timer, 0);
//	glutMainLoop();                 // Enter the infinite event-processing loop
//
//
//	return 0;
//
//float rotation = 0.f;
//float step = -2;
//
//static GLfloat spin = 0.0;
//int rotcount = 0;
//
//
//void init(void)
//{
//	glClearColor(0.0, 0.0, 0.0, 0.0);
//	glShadeModel(GL_FLAT);
//}
//
//
//void Timer(int value) {
//	glutPostRedisplay();    // Post a paint request to activate display()
//	//glutTimerFunc(30, Timer, 0); // subsequent timer call at milliseconds
//	float elapsedTime = glutGet(GLUT_ELAPSED_TIME);// / 1000.0f;
//	rotation -= elapsedTime * 40.f;
//	if (rotation < -90)
//	{
//		rotation = 0.f;
//		step += 1.f;
//	}
//
//}
//
//
//void display(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glPushMatrix();
//
//	glTranslatef(step, 0, 0);
//	//glRotatef(rotation, 0.0, 0.0, 1.0);
//
//	glRotatef(spin, 0.0, 0.0, 1.0);
//	glColor3f(1.0, 0.0, 1.0);
//	glRectf(-25.0, -25.0, 25.0, 25.0);
//	//glutSolidCube(10.0);
//	glPopMatrix();
//	glutSwapBuffers();
//
//	rotcount += 1.0;
//
//}
//void spinDisplay(void)
//{
//	spin = spin + 2.0;
//	if (spin > 360.0)
//		spin = spin - 360.0;
//	glutPostRedisplay();
//
//
//}
//void spinDisplayReverse(void)
//{
//	spin = spin - 2.0;
//	if (spin < 360.0)
//		spin = spin + 360.0;
//	glutPostRedisplay();
//}
//
//void spinDisplay_() {
//
//
//	if (rotcount <= 90) {
//		spin = spin + 1.0;
//		if (spin > 90.0)
//			spin = spin - 90.0;
//		glutPostRedisplay();
//	}
//	else if ((rotcount > 90) && (rotcount <= 180)) {
//		spin = spin - 1.0;
//		if (spin < 90.0)
//			spin = spin + 90.0;
//		glutPostRedisplay();
//	}
//
//}
//
//void reshape(int w, int h)
//{
//	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}
//
//void mouse(int button, int state, int x, int y)
//{
//	switch (button) {
//	case GLUT_LEFT_BUTTON:
//		if (state == GLUT_DOWN)
//			glutIdleFunc(spinDisplay);
//		break;
//	case GLUT_RIGHT_BUTTON:
//		if (state == GLUT_DOWN)
//			glutIdleFunc(spinDisplay_);
//		break;
//	case GLUT_MIDDLE_BUTTON:
//		if (state == GLUT_DOWN)
//		{
//			rotcount = 0;
//			spin = 0;
//			//glutIdleFunc(NULL);
//		}
//		break;
//	default:
//		break;
//	}
//}
//
// /*
//* Request double buffer display mode.
//* Register mouse input callback functions
//*/
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//	glutInitWindowSize(550, 550);
//	glutInitWindowPosition(100, 100);
//	glutCreateWindow(argv[0]);
//	init();
//	glutDisplayFunc(display);
//	//glutIdleFunc(spinDisplay_);
//	glutReshapeFunc(reshape);
//
//	glutTimerFunc(0, Timer, 0);
//	glutMouseFunc(mouse);
//
//
//	glutMainLoop();
//	return 0;
//}


////rolling a cube 90 degees
//static int shoulder = 0, elbow = 0;
//
//void init(void)
//{
//	glClearColor(0.0, 0.0, 0.0, 0.0);
//	glShadeModel(GL_FLAT);
//}
//
////https://www.glprogramming.com/red/chapter03.html
//
//void display(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glPushMatrix();
//
//	glTranslatef(-1.0, 0.0, 0.0);
//	glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//	glPushMatrix();
//	glScalef(2.0, 0.4, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();
//
//	glTranslatef(1.0, 0.0, 0.0);
//	glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//	glPushMatrix();
//	glScalef(2.0, 0.4, 1.0);
//	glScalef(1.0, 1.0, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();
//
//	glPopMatrix();
//	glutSwapBuffers();
//}
//int angle = 0;
//int rotcount = 0;
//void display2(void) {
//	glClear(GL_COLOR_BUFFER_BIT);
//
//		glPushMatrix();
//		glRotatef((GLfloat)angle, 0.0, 0.0, 1.0);
//		glTranslatef(-0.5, 0.5, 0.0);
//		glutWireCube(1.0);
//		
//		glPopMatrix();
//	
//
//	glutSwapBuffers();
//}
//void reshape(int w, int h)
//{
//	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glTranslatef(0.0, 0.0, -8.0);
//}
//
//void keyboard(unsigned char key, int x, int y)
//{
//	switch (key) {
//	case 'r':
//		angle = (angle - 1) % 90;
//		glutPostRedisplay();
//
//		break;
//
//	case 'S':   /*  s key rotates at shoulder  */
//		shoulder = (shoulder + 5) % 360;
//		glutPostRedisplay();
//		break;
//	case 's':
//		shoulder = (shoulder - 5) % 90;
//		glutPostRedisplay();
//		break;
//	case 'E':  /*  e key rotates at elbow  */
//		elbow = (elbow + 5) % 360;
//		glutPostRedisplay();
//		break;
//	case 'e':
//		elbow = (elbow - 5) % 360;
//		glutPostRedisplay();
//		break;
//	default:
//		break;
//	}
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//	glutInitWindowSize(500, 500);
//	glutInitWindowPosition(100, 100);
//	glutCreateWindow(argv[0]);
//	init();
//	glutDisplayFunc(display2);
//	glutReshapeFunc(reshape);
//	glutKeyboardFunc(keyboard);
//	glutMainLoop();
//	return 0;


//CubeNew(coordX cX, coordX cY, coordX cZ, directionX dX, directionX dY, directionX dZ)
CubeNew cubes[4] = { CubeNew(0, 0, 0, 0, 0, 1),
				     CubeNew(2, 0, 0, 1, 0, 0),
	                 CubeNew(0, 0, 1, 0, 1, 0),
				     CubeNew(1, 1, 1, 1, 1, 1) };


int main(int argc, char** argv)
{
	cubes[0].setSelected(true);

	
	RunOpenGL(argc, argv);
	return 0;
}