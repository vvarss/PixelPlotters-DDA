#include <stdlib.h> 
#include <stdio.h>
 #include <GL/gl.h>
 #include <GL/glut.h>
float x_start, x_end, y_start, y_end;
void display(void) {
 float dy, dx, step, x, y, k, Xin, Yin;
dx = x_end - x_start;
dy = y_end - y_start;

if (abs(dx) > abs(dy)) {
    step = abs(dx);
} else {
    step = abs(dy);
}

Xin = dx / step;
Yin = dy / step;

x = x_start;
y = y_start;

glBegin(GL_POINTS);
glVertex2i(x, y);
glEnd();

for (k = 1; k <= step; k++) {
    x = x + Xin;
    y = y + Yin;
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}

glFlush();
 
}
void myInit(void) { 
glClearColor(0.0, 0.0, 0.0, 0.0); 
glMatrixMode(GL_PROJECTION); 
glLoadIdentity(); 
gluOrtho2D(0.0, 640.0, 0.0, 480.0); 
}
int main(int argc, char** argv) {
 printf("Value of x1: ");
 scanf("%f", &x_start);
 printf("Value of y1: "); 
scanf("%f", &y_start); 
printf("Value of x2: "); 
scanf("%f", &x_end); 
printf("Value of y2: ");
 scanf("%f", &y_end);
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(640, 480);
glutInitWindowPosition(100, 150);
glutCreateWindow("DDA Line Drawing");
myInit();
glutDisplayFunc(display);
glutMainLoop();
 
}


