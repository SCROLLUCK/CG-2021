#include <GL/freeglut.h>
#include <GL/gl.h>
#include <stdio.h>
#include <math.h>

void circle_GL_LINE_STRIP(){

    double theta;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    glBegin(GL_LINE_STRIP);
    for(int i=0; i <= 360; i++){
        theta = i*M_PI/180;
        glVertex2f(0.5*cos(theta),0.5*sin(theta));
    }    
    glEnd();
    glFlush();

}

int main(int argc, char** argv){

    glutInit(&argc,argv);
    glutCreateWindow("simple");
    glutDisplayFunc(circle_GL_LINE_STRIP);
    glutMainLoop();

}