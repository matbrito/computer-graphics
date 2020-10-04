#include <GL/glut.h>

void init(void);
void display(void);

int polygon = 4;

void init(void) {
  glClearColor(242, 255, 0, 1.0);

  glMatrixMode (GL_PROJECTION);
  glLoadIdentity();
  glOrtho (-1, 1, -1, 1, -1, 1);
}

void display() {
  glClear(GL_COLOR_BUFFER_BIT);
  glLineWidth(20);

  glBegin(GL_LINES);
      glColor3f(1, 0, 0);
      glVertex2f(-0.525, 0.7);
      glVertex2f(0.525, 0.7);
  glEnd();

  glBegin(GL_LINES);
      glColor3f(1, 0, 0);
      glVertex2f(-0.525, -0.7);
      glVertex2f(0.525, -0.7);
  glEnd();

  glBegin(GL_LINES);
      glColor3f(1, 0, 0);
      glVertex2f(-0.5, 0.715);
      glVertex2f(-0.5, -0.715);
  glEnd();

  glBegin(GL_LINES);
    glColor3f(1, 0, 0);
    glVertex2f(0.5, 0.715);
    glVertex2f(0.5, -0.715);
  glEnd();

  glBegin(GL_LINES);
    glColor3f(1, 0, 0);
    glVertex2f(0, 1);
    glVertex2f(0, -1);
  glEnd();

  glBegin(GL_LINES);
    glColor3f(1, 0, 0);
    glVertex2f(1, 0);
    glVertex2f(-1, 0);
  glEnd();

  glPointSize(30);
  glBegin(GL_POINTS);
    glColor3f(242, 255, 0);
    glVertex2f(0, 0);
  glEnd();

  

  glFlush();
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize (800, 800);
  glutInitWindowPosition (200, 200);
  glutCreateWindow("OpenGL");
  init();

  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}
