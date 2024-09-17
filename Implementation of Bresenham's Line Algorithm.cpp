#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    gluOrtho2D(0, 1000, 0, 800);
    glClear(GL_COLOR_BUFFER_BIT);


    float x1 = 20, x2 = 700, y1 = 70, y2 = 600;

    float dx = x2 - x1;
    float dy = y2 - y1;

    float p = (2 * dy) - dx;

    for (int i = 0; i < dx; i++)
    {
        if (p < 0) {
            x1 = x1 + 1;
            p = p + (2 * dy);

            glBegin(GL_POINTS);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(x1, y1);
            glEnd();
        }
        else
        {
            x1 = x1 + 1;
            y1 = y1 + 1;
            p = p + (2 * dy) - (2 * dx);

            glBegin(GL_POINTS);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(x1, y1);
            glEnd();
        }
        glFlush();

    }




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