#include <GL/glut.h>

void init(void);
void display(void);

int polygon = 4;

void init(void) {
  glClearColor(0, 0, 0, 1.0);

  glMatrixMode (GL_PROJECTION);
  glLoadIdentity();
  glOrtho (-1, 1, -1, 1, -1, 1);
}

void display() {
  glClear(GL_COLOR_BUFFER_BIT);
  glLineWidth(10);

  glBegin(GL_LINES);
      glColor3f(0, 228, 0);
      glVertex2f(0, 0.8);
      glColor3f(255, 0, 0);
      glVertex2f(-0.3, 0);

      glVertex2f(-0.3, 0);
      glVertex2f(-0.7, -0.6);

      glVertex2f(-0.7, -0.6);
      glColor3f(87, 0, 242);
      glVertex2f(0, -0.3);

      glVertex2f(0, -0.3);
      glVertex2f(0.7, -0.6);

      glVertex2f(0.7, -0.6);
      glColor3f(0, 228, 0);
      glVertex2f(0.3, 0);

      glVertex2f(0.3, 0);
      glColor3f(0, 177, 1);
      glColor3f(0, 228, 0);
      glVertex2f(0, 0.8);

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
