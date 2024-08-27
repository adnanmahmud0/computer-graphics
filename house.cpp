#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    //glOrtho(-4, 4, -4, 4, -4, 4);
    gluOrtho2D(0, 1000, 0, 1000);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    // glColor3f(1.0f, 0.0f, 0.0f);
    // glVertex2f(-2.0f, -2.0f);
    // glVertex2f(2.0f, -2.0f);
    // glVertex2f(2.0f, 2.0f);
    // glVertex2f(-2.0f, 2.0f);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(100, 100);
    glVertex2d(900, 100);
    glVertex2d(900, 700);
    glVertex2d(100, 700);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2d(400, 100);
    glVertex2d(600, 100);
    glVertex2d(600, 600);
    glVertex2d(400, 600);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2d(150, 400);
    glVertex2d(350, 400);
    glVertex2d(350, 550);
    glVertex2d(150, 550);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2d(650, 400);
    glVertex2d(850, 400);
    glVertex2d(850, 550);
    glVertex2d(650, 550);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2d(100, 700);
    glVertex2d(500, 900);
    glVertex2d(900, 700);

    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Square");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}