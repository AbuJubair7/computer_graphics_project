//
//  gallery.cpp
//  Baymax_1.5
//
//  Created by Mahjabin Mim on 8/16/22.
//

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <windows.h>
#endif
#include "gallery.h"

void putGallery(){
    
    //lower border
    glBegin(GL_QUADS);
    glColor3ub(128,128,128);

    glVertex2f(-1.0f, -0.75f);    // x, y
    glVertex2f(-1.0f, -0.9f);    // x, y
    glVertex2f(-0.86f,-0.86f);    // x, y
    glVertex2f(-0.86f,-0.7f);    // x, y

    glEnd();
    
    
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(-0.86f,-0.7f);    // x, y
    glVertex2f(-0.86f,-0.86f);    // x, y
    glVertex2f(-0.67f,-0.1f);    // x, y
    glVertex2f(-0.67f,-0.05f);    // x, y

    glEnd();
    
    
    //seat
    //1st row
    glBegin(GL_QUADS);
    glColor3ub(0,0,200);

    glVertex2f(-0.98f, -0.55f);    // x, y
    glVertex2f(-0.92f, -0.55f);  // x, y
    glVertex2f(-0.69f, -0.05f);    // x, y
    glVertex2f(-0.71f, 0.0f);    // x, y

    glEnd();
    
    //2nd row
    glBegin(GL_QUADS);
    glColor3ub(0,100,220);

    glVertex2f(-1.f, -0.49f);    // x, y
    glVertex2f(-0.96f, -0.51f);    // x, y
    glVertex2f(-0.71f, 0.0f);    // x, y
    glVertex2f(-0.73f, 0.02f);    // x, y

    glEnd();
    
    //3rd row
    glBegin(GL_QUADS);
    glColor3ub(0,200,220);

    glVertex2f(-1.0f, -0.39f);    // x, y
    glVertex2f(-1.0f,-0.49f);    // x, y
    glVertex2f(-0.73f, 0.02f);    // x, y
    glVertex2f(-0.75f, 0.07f);    // x, y

    glEnd();
    
    //4th row
    glBegin(GL_QUADS);
    glColor3ub(150,200,220);

    glVertex2f(-1.0f, -0.29f);    // x, y
    glVertex2f(-1.0f, -0.39f);    // x, y
    glVertex2f(-0.75f, 0.07f);    // x, y
    glVertex2f(-0.76f, 0.11f);    // x, y

    glEnd();
    
    //5th row
    glBegin(GL_QUADS);
    glColor3ub(150,200,220);

    glVertex2f(-1.0f, -0.29f);    // x, y
    glVertex2f(-1.0f, -0.29f);    // x, y
    glVertex2f(-0.73f, 0.14f);    // x, y
    glVertex2f(-0.74f, 0.13f);    // x, y

    glEnd();
    
    //6th row
    glBegin(GL_QUADS);
    glColor3ub(150,200,220);

    glVertex2f(-1.0f, -0.29f);    // x, y
    glVertex2f(-1.0f, -0.29f);    // x, y
    glVertex2f(-0.73f, 0.14f);    // x, y
    glVertex2f(-0.74f, 0.13f);    // x, y

    glEnd();
    
    
    //sirir wall
    glBegin(GL_QUADS);
    glColor3ub(155,155,155);

    glVertex2f(-1.0f,-0.51f);    // x, y
    glVertex2f(-0.92f,-0.55f);    // x, y
    glVertex2f(-0.9f, -0.7f);    // x, y
    glVertex2f(-1.0f, -0.7f);    // x, y

    glEnd();
    
    
    //way for walk
    glBegin(GL_POLYGON);
    glColor3ub(110,110,110);

    glVertex2f(-1.0f, -0.72f);    // x, y
    glVertex2f(-1.0f, -0.75f);    // x, y
    glVertex2f(-0.86f,-0.7f);    // x, y
    glVertex2f(-0.9f,-0.63f);    // x, y
    glVertex2f(-0.95f,-0.64f);    // x, y
    
    glVertex2f(-0.9f,-0.63f);    // x, y
    glVertex2f(-0.86f,-0.7f);    // x, y
    glVertex2f(-0.67f,-0.05f);    // x, y
    glVertex2f(-0.69f,-0.05f);    // x, y

    glEnd();
    
    
   
    
    

    
    //upper wall lower up quads
    glBegin(GL_QUADS);
    glColor3ub(200,200,220);

    glVertex2f(-1.0f,-0.51f);    // x, y
    glVertex2f(-0.96f, -0.53f);    // x, y
    glVertex2f(-0.96f, -0.47f);  // x, y
    glVertex2f(-1.0f, -0.45f);    // x, y

    glEnd();
    
   
    
    
    //grill
    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255,255,255);

    glVertex2f(-1.0f, -0.57f);    // x, y
    glVertex2f(-0.87f, -0.53f);    // x, y
    
    glVertex2f(-0.87f, -0.53f);
    glVertex2f(-0.67f, -0.01f);
    
    glVertex2f(-0.87f, -0.6f);
    glVertex2f(-0.67f, -0.03f);
    
    //small grill
    glVertex2f(-0.87f, -0.69f);  // x, y
    glVertex2f(-0.87f, -0.53f); // x, y
    
    glVertex2f(-0.85f, -0.64f);  // x, y
    glVertex2f(-0.85f, -0.48f); // x, y
    
    glVertex2f(-0.83f, -0.58f);  // x, y
    glVertex2f(-0.83f, -0.43f); // x, y
    
    glVertex2f(-0.81f, -0.51f);  // x, y
    glVertex2f(-0.81f, -0.38f); // x, y
    
    glVertex2f(-0.79f, -0.44f);  // x, y
    glVertex2f(-0.79f, -0.32f); // x, y
    
    glVertex2f(-0.77f, -0.37f);  // x, y
    glVertex2f(-0.77f, -0.27f); // x, y
    
    glVertex2f(-0.75f, -0.3f);  // x, y
    glVertex2f(-0.75f, -0.22f); // x, y
    
    glVertex2f(-0.73f, -0.24f);  // x, y
    glVertex2f(-0.73f, -0.16f); // x, y
    
    glVertex2f(-0.71f, -0.17f);  // x, y
    glVertex2f(-0.71f, -0.12f); // x, y
    
    glVertex2f(-0.69f, -0.1f);  // x, y
    glVertex2f(-0.69f, -0.06f); // x, y
    
    glVertex2f(-0.67f, -0.05f);  // x, y
    glVertex2f(-0.67f, -0.01f); // x, y
    
    glVertex2f(-0.92f, -0.6f);  // x, y
    glVertex2f(-0.92f, -0.44f); // x, y
    
    glVertex2f(-0.96f, -0.53f);  // x, y
    glVertex2f(-0.96f, -0.42f); // x, y
    
    glVertex2f(-0.92f, -0.44f); // x, y
    glVertex2f(-1.0f, -0.4f); // x, y
    
    glEnd();
    
}