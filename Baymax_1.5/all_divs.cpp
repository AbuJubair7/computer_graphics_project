//
//  all_divs.cpp
//  Baymax_1.5
//
//  Created by Abu Jubair on 5/8/22.
//
#include <math.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <windows.h>
#endif
#include "all_divs.h"

int skyRed = 130;
int skyGreen = 211;
int skyBlue = 240;

void putDiv1(){
    //div 1
    glBegin(GL_QUADS);
    glColor3ub(130,211,240);
    glVertex2f(-1.0f, 1.0f);
    
    glColor3ub(skyRed,skyGreen,skyBlue);// x, y
    
    glVertex2f(-1.0f, 0.3f);// x, y
    glVertex2f(1.0f, 0.3f);
    glColor3ub(130,211,240);// x, y
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


void putTrees(float x){
       float x2 = x+0.01f;
       glBegin(GL_QUADS);
       glColor3ub(96, 63, 55);
       glVertex2f(x, 0.28f);
       glVertex2f(x2, 0.28f);
       glVertex2f(x2, 0.4f);
       glVertex2f(x ,0.4f);
       glEnd();
       
       glBegin(GL_TRIANGLES);
       glColor3ub(113, 156, 80);
       glVertex2f(x-0.03, 0.3f); // lower area
       glVertex2f(x2+0.03, 0.3f);
       glVertex2f(((x2+0.03) + (x-0.03))/2, 0.45f);
       glEnd();
}

void putBridge(){
    // 110, 74, 49
    // max = 0.27f;
    // min = 0.1f;
    
    // first part
    glBegin(GL_QUADS);
    glColor3ub(110, 74, 49);
    
    glVertex2f(0.6f, 0.27f); // top-left
    glVertex2f(0.65f, 0.27f); // top right
    glVertex2f(0.72f, 0.1667f); // bottom-right
    glVertex2f(0.67f, 0.1667f); // bottom left
    glEnd();
    
    // second part
    glBegin(GL_QUADS);
    glColor3ub(110, 74, 49);
    
    glVertex2f(0.67f, 0.1667f); // top-left
    glVertex2f(0.72f, 0.1667f); // top right
    glVertex2f(0.73f, 0.1f); // bottom-right
    glVertex2f(0.68f, 0.1f); // bottom left
    glEnd();
    
    // piller
    // 1
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    
    glVertex2f(0.67f, 0.1667f);
    glVertex2f(0.67f, 0.12f);
    glEnd();
    //2
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    
    glVertex2f(0.64f, 0.21f);
    glVertex2f(0.64f, 0.18f);
    glEnd();
    
    //3
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    
    glVertex2f(0.62f, 0.24f);
    glVertex2f(0.62f, 0.22f);
    glEnd();
    
    
}
