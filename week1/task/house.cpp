#include <GL/glut.h>
#include <cctype>

void init(void);
void display(void);

int polygon = 4;

void init(void) {
  glClearColor(255, 255, 255, 1.0);

  glMatrixMode (GL_PROJECTION);
  glLoadIdentity();
  glOrtho (-1, 1, -1, 1, -1, 1);
}

void keyboard(unsigned char key, int x, int y) {
  if (isspace(key)) {
    glClearColor(0, 0, 0, 1.0);
  } else {
    glClearColor(255, 255, 255, 1.0);
  }

  display();
}

void display() {
  glClear(GL_COLOR_BUFFER_BIT);
  glLineWidth(4);

  glBegin(GL_POLYGON);
    glColor3f(93, 0, 255);
    glVertex2f(-0.4, 0.2);
    glVertex2f(-0.4, -0.3); 
    glVertex2f(0.4, -0.3);
    glVertex2f(0.4, 0.2); 
  glEnd();

  glBegin(GL_POLYGON);
    glColor3f(255, 255, 255);
    glVertex2f(-0.1, 0.1);
    glVertex2f(-0.1, -0.28); 
    glVertex2f(0.1, -0.28);
    glVertex2f(0.1, 0.1);
  glEnd();

  glBegin(GL_POLYGON);
    glColor3f(255, 255, 255);
    glVertex2f(0.17, 0.08);
    glVertex2f(0.17, -0.02); 
    glVertex2f(0.32, -0.02);
    glVertex2f(0.32, 0.08);
  glEnd();

  glBegin(GL_LINES);
    glColor3f(93, 0, 255);
    glVertex2f(0.245, 0.08);
    glVertex2f(0.245, -0.02);

    glVertex2f(0.17, 0.03);
    glVertex2f(0.32, 0.03); 
  glEnd();

 glBegin(GL_TRIANGLE_STRIP);
  glColor3f(255, 0, 0);
  glVertex2f(0, 0.5); 
  glVertex2f(-0.4, 0.2);
  glVertex2f(0.4, 0.2);
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
  glutKeyboardFunc(keyboard);
  glutMainLoop();

  return 0;
}
