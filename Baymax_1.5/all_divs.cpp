//
//  all_divs.cpp
//  Baymax_1.5
//
//  Created by Abu Jubair on 5/8/22.
//

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include "all_divs.h"

void putDiv1(){
    //div 1
    glBegin(GL_QUADS);
    glColor3ub(130,211,240);

    glVertex2f(-1.0f, 1.0f);    // x, y
    glVertex2f(-1.0f, 0.3f);    // x, y
    glVertex2f(1.0f, 0.3f);    // x, y
    glVertex2f(1.0f, 1.0f);    // x, y

    glEnd();
}

void putDiv2(){
    //div 2
    glBegin(GL_QUADS);
    glColor3ub(248,219,121);

    glVertex2f(-1.0f, 0.3f);    // x, y
    glVertex2f(-1.0f, 0.27f);    // x, y
    glVertex2f(1.0f, 0.27f);    // x, y
    glVertex2f(1.0f, 0.3f);    // x, y

    glEnd();

}

void putDiv3(){
    //div 3
    glBegin(GL_QUADS);
    glColor3ub(112,176,214);

    glVertex2f(-1.0f, 0.27f);    // x, y
    glVertex2f(-1.0f, 0.1f);    // x, y
    glVertex2f(1.0f, 0.1f);    // x, y
    glVertex2f(1.0f, 0.27f);    // x, y

    glEnd();
}

void putDiv4(){
    //div 4
    glBegin(GL_QUADS);
    glColor3f(0.7f, 0.7f, 0.0f);

    glVertex2f(-1.0f, 0.1f);    // x, y
    glVertex2f(-1.0f, 0.0f);    // x, y
    glVertex2f(1.0f, 0.0f);    // x, y
    glVertex2f(1.0f, 0.1f);    // x, y

    glEnd();
}

void putDiv5(){
    //div 5
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.9f, 0.0f);

    glVertex2f(-1.0f, 0.0f);    // x, y
    glVertex2f(-1.0f, -1.0f);    // x, y
    glVertex2f(1.0f, -1.0f);    // x, y
    glVertex2f(1.0f, 0.0f);    // x, y

    glEnd();
}
