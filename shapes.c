#include <stdlib.h>
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

void drawLine(float x1, float y1, float x2, float y2) {
    float dx, dy, step, x, y, Xin, Yin;
    dx = x2 - x1;
    dy = y2 - y1;
    step = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);
    Xin = dx / step;
    Yin = dy / step;
    x = x1;
    y = y1;
    for (int k = 0; k <= step; k++) {
        glBegin(GL_POINTS);
        glVertex2i(x, y);
        glEnd();
        x = x + Xin;
        y = y + Yin;
    }
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // Base rectangle of the house
    drawLine(200, 200, 300, 200);
    drawLine(300, 200, 300, 300);
    drawLine(300, 300, 200, 300);
    drawLine(200, 300, 200, 200);

    // Roof
    drawLine(200, 300, 250, 350);
    drawLine(250, 350, 300, 300);

    // Door
    drawLine(230, 200, 230, 250);
    drawLine(270, 200, 270, 250);
    drawLine(230, 250, 270, 250);

    //Extension
    drawLine(250,350,350,350);
    drawLine(350,350,400,300);
    drawLine(400,300,400,200);
    drawLine(400,200,300,200);
    drawLine(300,300,400,300);

    //Chimney
    drawLine(350,300,350,320);
    drawLine(350,320,370,320);
    drawLine(370,320,370,300);
  
     //Boat
    drawLine(500, 50,550,50);
    drawLine(500,50,480,100);
    drawLine(550,50,570, 100);
    drawLine(480,100,570,100);
    //drawLine(470,100,470,130);
    //drawLine(480,110,470,100);
    //drawLine(550,100,550,130);
    //drawLine(550,130,580,110);
    //drawLine(580,110,550,100);
    drawLine(550,100,550,140);
    drawLine(550,140,580,120);
    drawLine(580,120,550,120);

    glFlush();
}

void myInit(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(2.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("House using DDA");
    myInit();
    glutDisplayFunc(display);
    glutMainLoop();
}

