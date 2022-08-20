//
//  wave.cpp
//  Baymax_1.5
//
//  Created by Abu Jubair on 19/8/22.
//

#include "wave.h"


void putWave(){
    // for first boat
    // river height (top-0.27 ~ bottom-0.1);
    // water effect dis = 0.009
    bool flag = 1;
    glColor3ub(45, 79, 183);
    for(float x = -5.0f; x <= 5.0f; x+=0.015f){
        for(float y = 0.11f; y < 0.25f; y +=0.02f){
            glBegin(GL_LINES);
            glVertex2f(flag ? x : x-0.003f, y);
            glVertex2f(flag?x+0.009f:(flag ? x : x-0.001f)+0.009f, y);
            glEnd();
            flag = flag ? false : true;
        }
    }
    
   
}

void RenderSineWave(){
//    glClearColor(0.0, 0.0, 0.0, 1.0);  // clear background with black
//    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    double w = glutGet( GLUT_WINDOW_WIDTH );
    double h = glutGet( GLUT_WINDOW_HEIGHT );
    double ar = w / h;
    glOrtho( -360 * ar, 360 * ar, -120, 120, -1, 1 );

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glPointSize(10);
    glColor3f(1.0,0.0,0.0);

    glBegin(GL_POINTS);
    for(int i=0;i<361;i=i+5)
    {
        float x = (float)i;
        float y = 100.0 * sin(i *(6.284/360.0));
        glVertex2f(x,y);
    }
    glEnd();

  
}




