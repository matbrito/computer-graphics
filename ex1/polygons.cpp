#include <GL/glut.h>

void init(void);
void display(void);

int polygon = 4;

void init(void) {
  glClearColor(0, 255, 0, 1.0);

  glMatrixMode (GL_PROJECTION);
  glLoadIdentity();
  glOrtho (-1, 1, -1, 1, -1, 1);
}

void display() {
  glClear(GL_COLOR_BUFFER_BIT);

  glBegin(GL_POLYGON);
      glColor3f(242, 255, 0);
      glVertex2f(-0.3, 0.3); 
      glVertex2f(-0.5, 0); 
      glVertex2f(-0.3, -0.3); 
      glVertex2f(-0.1, 0); 
  glEnd();
  
  glBegin(GL_POLYGON);
      glColor3f(1, 0, 0);
      glVertex2f(0.3, -0.3); 
      glVertex2f(0.5, 0); 
      glVertex2f(0.3, 0.3); 
      glVertex2f(0.1, 0); 
  glEnd();

  glBegin(GL_POLYGON);
      glColor3f(0, 0, 0);
      glVertex2f(0, -0.1); 
      glVertex2f(-0.2, -0.4); 
      glVertex2f(0, -0.7); 
      glVertex2f(0.2, -0.4); 
  glEnd();

  glBegin(GL_POLYGON);
      glColor3f(0, 0, 156);
      glVertex2f(0, 0.1); 
      glVertex2f(0.2, 0.4); 
      glVertex2f(0, 0.7); 
      glVertex2f(-0.2, 0.4); 
  glEnd();

  glFlush();
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize (800, 800);
  glutInitWindowPosition (200, 200);
  glutCreateWindow ("Primeiro OpenGL");
  init();

  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}
