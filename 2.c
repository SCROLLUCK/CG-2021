#include <GL/freeglut.h>
#include <GL/gl.h>
#include <stdio.h>
#include <math.h>

void rectangle(){
    glColor3f(0,10,1);
    glRotated(45,0,0,45);
    glBegin(GL_POLYGON);
        glVertex2f(-0.7,0.4);
        glVertex2f(0.7,0.4);
        glVertex2f(0.7,-0.4);
        glVertex2f(-0.7,-0.4);
    glEnd();
    glFlush();
}

int main(int argc, char** argv){

    glutInit(&argc,argv);
    glutCreateWindow("simple");
    glutDisplayFunc(rectangle);
    glutMainLoop();

}
