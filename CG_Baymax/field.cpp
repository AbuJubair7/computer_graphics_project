//
//  field.cpp
//  Baymax_1.5
//
//  Created by Abu Jubair on 5/8/22.
//

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <windows.h>
#endif
#include "field.h"
#include "circular_objects.h"

void putField(){
    
    //field
    glBegin(GL_QUADS);
    glColor3ub(167,187,75);

    glVertex2f(-0.65f, 0.0f);    // x, y
    glVertex2f(-0.77f, -0.9f);    // x, y
    glVertex2f(0.97f, -0.9f);    // x, y
    glVertex2f(0.85f, 0.0f);    // x, y

    glEnd();

    //middle line
    glBegin(GL_LINES);
    glColor3f(0.9f, 1.0f, 1.0f);
    
//    glEnable(GL_LINE_WIDTH);
//    glLineWidth(10);

    glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(0.0f, -0.9f);    // x, y

    glEnd();

    //middleCircle();
    DrawEllipse(0.0f, -0.45f, 0.15f, 0.1f, 20);

    //    //left side line
    //    glBegin(GL_LINES);
    //    glColor3f(1.0f, 1.0f, 1.0f);
    //
    //    glVertex2f(-0.6f, -0.1f);    // x, y
    //    glVertex2f(-0.6f, -0.8f);    // x, y
    //    glVertex2f(-0.6f, -0.1f);    // x, y
    //    glVertex2f(-0.86f, -0.1f);    // x, y
    //    glVertex2f(-0.6f, -0.8f);    // x, y
    //    glVertex2f(-0.96f, -0.8f);    // x, y
    //
    //    glEnd();
    
    
    
    //right side line
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.6f, -0.1f);    // x, y
    glVertex2f(0.6f, -0.8f);    // x, y
    glVertex2f(0.6f, -0.1f);    // x, y
    glVertex2f(0.86f, -0.1f);    // x, y
    glVertex2f(0.6f, -0.8f);    // x, y
    glVertex2f(0.96f, -0.8f);    // x, y

    glEnd();
    
}
