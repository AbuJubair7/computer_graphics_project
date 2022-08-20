//
//  plane.cpp
//  Baymax_1.5
//
//  Created by Mahjabin Mim on 8/20/22.
//

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <windows.h>
#endif

#include "plane.h"

void putPlane()
{
    glBegin(GL_QUADS);
    glColor3ub(91,127,187);

    glVertex2f(0.69f, 0.8f);    // x, y
    glVertex2f(0.72f, 0.83f);    // x, y
    glVertex2f(0.75f, 0.83f);    // x, y
    glVertex2f(0.73f, 0.77f);    // x, y

    glEnd();
    
    glBegin(GL_QUADS);
    glColor3ub(240,240,240);

    glVertex2f(0.75f, 0.83f);    // x, y
    glVertex2f(0.73f, 0.77f);    // x, y
    glVertex2f(0.745f, 0.77f);    // x, y
    glVertex2f(0.765f, 0.83f);    // x, y

    glEnd();
    
    glBegin(GL_QUADS);
    glColor3ub(91,127,187);
    
    glVertex2f(0.745f, 0.77f);    // x, y
    glVertex2f(0.765f, 0.83f);    // x, y
    glVertex2f(0.78f, 0.83f);    // x, y
    glVertex2f(0.76f, 0.77f);    // x, y

    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3ub(240,240,240);

    glVertex2f(0.78f, 0.83f);    // x, y
    glVertex2f(0.76f, 0.77f);    // x, y
    glVertex2f(0.81f, 0.775f);    // x, y
    glVertex2f(0.85f, 0.8f);    // x, y
    glVertex2f(0.85f, 0.83f);    // x, y

    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3ub(91,127,187);
    
    glVertex2f(0.845f, 0.83f);    // x, y
    glVertex2f(0.855f, 0.9f);    // x, y
    glVertex2f(0.83f, 0.9f);    // x, y
    glVertex2f(0.81f, 0.86f);    // x, y
    glVertex2f(0.8f, 0.83f);    // x, y

    glEnd();
}
