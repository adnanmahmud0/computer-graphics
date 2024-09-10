#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    gluOrtho2D(0, 60, 0, 40);
    //glOrtho(-4, 4, -4, 4, -4, 4);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2d(19, 0);
    glVertex2d(53, 4);
    glVertex2d(54, 8);
    glVertex2d(19, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2d(3, 12);
    glVertex2d(19, 0);
    glVertex2d(19, 4);
    glVertex2d(5, 15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2d(54, 8);
    glVertex2d(51, 7.5);
    glVertex2d(40, 16);
    glVertex2d(40, 19);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2d(40, 19);
    glVertex2d(40, 16);
    glVertex2d(7.5, 13);
    glVertex2d(5, 15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2d(7.5, 13);
    glVertex2d(40, 16);
    glVertex2d(51, 7.5);
    glVertex2d(19, 4);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2d(2, 17);
    glVertex2d(5, 16);
    glVertex2d(11, 26);
    glVertex2d(9, 29);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2d(9, 29);
    glVertex2d(11, 26);
    glVertex2d(45, 32);
    glVertex2d(46, 35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2d(40, 31);
    glVertex2d(36, 23);
    glVertex2d(39, 20);
    glVertex2d(45, 32);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2d(7, 19);
    glVertex2d(36, 23);
    glVertex2d(39, 20);
    glVertex2d(5, 16);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2d(11, 26);
    glVertex2d(40, 31);
    glVertex2d(36, 23);
    glVertex2d(7, 19);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(28, 18.8);
    glVertex2d(33, 19.4);
    glVertex2d(33, 18.2);
    glVertex2d(28, 17.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(18, 17.5);
    glVertex2d(18, 16.5);
    glVertex2d(13, 16);
    glVertex2d(13, 17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2d(24, 8);
    glVertex2d(40, 10);
    glVertex2d(40, 7);
    glVertex2d(24, 5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2d(24, 8);
    glVertex2d(24, 5);
    glVertex2d(22, 6);
    glVertex2d(22, 7);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(22, 6);
    glVertex2d(22, 7);
    glVertex2d(21, 6.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2d(24, 16);
    glVertex2d(32, 17);
    glVertex2d(35, 13);
    glVertex2d(27, 12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(24, 16);
    glVertex2d(27, 12);
    glVertex2d(23, 11);
    glVertex2d(20, 13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(23, 11);
    glVertex2d(23, 9);
    glVertex2d(20, 11);
    glVertex2d(20, 13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(27, 12);
    glVertex2d(27, 10);
    glVertex2d(23, 9);
    glVertex2d(23, 11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2d(27, 12);
    glVertex2d(35, 13);
    glVertex2d(35, 11);
    glVertex2d(27, 10);
    glEnd();



    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("212-15-4155");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}