#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // RGB background color
    //glOrtho(-4, 4, -4, 4, -4, 4); // first two value x,y,z
    gluOrtho2D(0, 800, 0, 800);
    glClear(GL_COLOR_BUFFER_BIT); // clear screen

    // glBegin(GL_QUADS);
    // glColor3f(1.0f, 0.0f, 0.0f); // polygon color ---- rang: 3f(0-1); 3ub(0-255)
    // glVertex2f(-2.0f, -2.0f);
    // glVertex2f(2.0f, -2.0f);
    // glVertex2f(2.0f, 2.0f);
    //glVertex2f(-2.0f, 2.0f);  
    //body
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(200, 200);
    glVertex2d(600, 200);
    glVertex2d(600, 600);
    glVertex2d(200, 600);
    glEnd();
    //dorja
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2d(350, 200);
    glVertex2d(450, 200);
    glVertex2d(450, 450);
    glVertex2d(350, 450);
    glEnd();
    //janala
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2d(240, 360);
    glVertex2d(310, 360);
    glVertex2d(310, 460);
    glVertex2d(240, 460);
    glEnd();
    //janala
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2d(490, 360);
    glVertex2d(560, 360);
    glVertex2d(560, 460);
    glVertex2d(490, 460);
    glEnd();
    //chad
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2d(200, 600);
    glVertex2d(600, 600);
    glVertex2d(400, 800);
    glEnd();
    //gacher mati
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(640, 200);
    glVertex2d(720, 200);
    glEnd();
    //gacher guri
    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(660, 200);
    glVertex2d(700, 200);
    glVertex2d(700, 400);
    glVertex2d(660, 400);
    glEnd();
    //gaser pata
    glBegin(GL_TRIANGLES);
    glColor3f(0.4f, 0.5f, 0.3f);
    glVertex2d(620, 400);
    glVertex2d(740, 400);
    glVertex2d(670, 540);
    glEnd();
    //gaser pata
    glBegin(GL_TRIANGLES);
    glColor3f(0.5f, 0.5f, 0.2f);
    glVertex2d(620, 460);
    glVertex2d(740, 460);
    glVertex2d(670, 600);
    glEnd();
    //gaser pata
    glBegin(GL_TRIANGLES);
    glColor3f(0.6f, 0.5f, 0.1f);
    glVertex2d(620, 520);
    glVertex2d(740, 520);
    glVertex2d(670, 660);
    glEnd();
    //uthan
    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(330, 180);
    glVertex2d(470, 180);
    glVertex2d(450, 200);
    glVertex2d(350, 200);
    glEnd();
    //rasta
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(0, 110);
    glVertex2d(800, 110);
    glVertex2d(760, 140);
    glVertex2d(40, 140);
    glEnd();

    //bera
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(50, 200);
    glVertex2d(50, 350);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(70, 210);
    glVertex2d(70, 360);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(90, 220);
    glVertex2d(90, 370);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(90, 230);
    glVertex2d(90, 380);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(110, 240);
    glVertex2d(110, 390);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(130, 250);
    glVertex2d(130, 400);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(150, 260);
    glVertex2d(150, 410);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(170, 270);
    glVertex2d(170, 420);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(30, 200);
    glVertex2d(190, 290);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(30, 220);
    glVertex2d(190, 310);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(30, 240);
    glVertex2d(190, 330);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(30, 260);
    glVertex2d(190, 350);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(30, 280);
    glVertex2d(190, 370);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(30, 300);
    glVertex2d(190, 390);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2d(30, 320);
    glVertex2d(190, 410);
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