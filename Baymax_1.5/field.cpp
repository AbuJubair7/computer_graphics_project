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

    //right goalPost
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.945f, -0.72f);    // x, y
    glVertex2f(1.0f, -0.72f);    // x, y
    
    glVertex2f(0.875f, -0.17f);    // x, y
    glVertex2f(1.0f, -0.17f);    // x, y
    
    glVertex2f(0.945f, -0.72f);    // x, y
    glVertex2f(0.945f, -0.1f);    // x, y
    
    glVertex2f(0.875f, -0.17f);    // x, y
    glVertex2f(0.875f, 0.2f);    // x, y
    
    glVertex2f(0.945f, -0.1f);    // x, y
    glVertex2f(0.875f, 0.2f);    // x, y
    
    glVertex2f(0.945f, -0.1f);    // x, y
    glVertex2f(1.0f, -0.1f);    // x, y
    
    glVertex2f(1.0f, 0.2f);    // x, y
    glVertex2f(0.875f, 0.2f);    // x, y

    glEnd();
    
    
    //net
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.875f, 0.15);    // x, y
    glVertex2f(1.0f, 0.15f);    // x, y
    
    glVertex2f(0.875f, 0.1f);    // x, y
    glVertex2f(1.0f, 0.1f);    // x, y
    
    glVertex2f(0.875f, 0.05f);    // x, y
    glVertex2f(1.0f, 0.05);    // x, y
    
    glVertex2f(0.875f, 0.0f);    // x, y
    glVertex2f(1.0f, 0.0f);    // x, y
    
    glVertex2f(0.875f, -0.05f);    // x, y
    glVertex2f(1.0f, -0.05f);    // x, y
    
    glVertex2f(0.875f, -0.1f);    // x, y
    glVertex2f(1.0f, -0.1);    // x, y
    
    glVertex2f(0.875f, -0.15f);    // x, y
    glVertex2f(1.0f, -0.15f);    // x, y
    
    glVertex2f(0.945f, -0.2f);    // x, y
    glVertex2f(1.0f, -0.2f);    // x, y
    
    glVertex2f(0.945f, -0.25f);    // x, y
    glVertex2f(1.0f, -0.25f);    // x, y
    
    glVertex2f(0.945f, -0.3f);    // x, y
    glVertex2f(1.0f, -0.3);    // x, y
    
    glVertex2f(0.945f, -0.35f);    // x, y
    glVertex2f(1.0f, -0.35f);    // x, y
    
    glVertex2f(0.945f, -0.4f);    // x, y
    glVertex2f(1.0f, -0.4f);    // x, y
    
    glVertex2f(0.945f, -0.45f);    // x, y
    glVertex2f(1.0f, -0.45f);    // x, y
    
    glVertex2f(0.945f, -0.5f);    // x, y
    glVertex2f(1.0f, -0.5);    // x, y
    
    glVertex2f(0.945f, -0.55f);    // x, y
    glVertex2f(1.0f, -0.55f);    // x, y
    
    glVertex2f(0.945f, -0.6f);    // x, y
    glVertex2f(1.0f, -0.6f);    // x, y
    
    glVertex2f(0.945f, -0.65f);    // x, y
    glVertex2f(1.0f, -0.65f);    // x, y
    
    glVertex2f(0.945f, -0.7f);    // x, y
    glVertex2f(1.0f, -0.7);    // x, y

    glEnd();
    

    //1
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.945f, -0.72f);    // x, y
    glVertex2f(0.945f, -0.725f);    // x, y
    glVertex2f(1.0f, -0.725f);    // x, y
    glVertex2f(1.0f, -0.72f);    // x, y

    glEnd();
    
    
    //2
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.875f, -0.17f);    // x, y
    glVertex2f(0.875f, -0.175f);    // x, y
    glVertex2f(1.0f, -0.175f);    // x, y
    glVertex2f(1.0f, -0.17f);    // x, y

    glEnd();
    
    
    //3
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.945f, -0.72f);    // x, y
    glVertex2f(0.945f, -0.1f);    // x, y
    glVertex2f(0.955f, -0.1f);    // x, y
    glVertex2f(0.955f, -0.72f);    // x, y

    glEnd();
    
    
    //4
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.875f, -0.17f);    // x, y
    glVertex2f(0.875f, 0.2f);    // x, y
    glVertex2f(0.885f, 0.2f);    // x, y
    glVertex2f(0.885f, -0.17f);    // x, y

    glEnd();
    
    
    //5
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.945f, -0.1f);    // x, y
    glVertex2f(0.875f, 0.2f);    // x, y
    glVertex2f(0.885f, 0.2f);    // x, y
    glVertex2f(0.955f, -0.1f);    // x, y

    glEnd();
    
    
    //6
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.945f, -0.1f);    // x, y
    glVertex2f(0.945f, -0.09f);    // x, y
    glVertex2f(1.0f, -0.09f);    // x, y
    glVertex2f(1.0f, -0.1f);    // x, y

    glEnd();
    
    
    //7
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(1.0f, 0.2f);    // x, y
    glVertex2f(1.0f, 0.19f);    // x, y
    glVertex2f(0.875f, 0.19f);    // x, y
    glVertex2f(0.875f, 0.2f);    // x, y

    glEnd();
    
    
//    //left goalPost
//    glBegin(GL_LINES);
//    glColor3f(1.0f, 1.0f, 1.0f);
//
//    glVertex2f(-0.89f, -0.72f);    // x, y
//    glVertex2f(-1.0f, -0.72f);    // x, y
////    glVertex2f(-0.89f, -0.22f);    // x, y
////    glVertex2f(-1.0f, -0.22f);    // x, y
//
//    glEnd();
}
