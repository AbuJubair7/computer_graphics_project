//
//  circular_objects.cpp
//  Baymax_1.5
//
//  Created by Abu Jubair on 5/8/22.
//

#include "circular_objects.h"
#include <math.h>

GLfloat ballPosition = 0.0f;
GLfloat ballY = 0.0f;
GLfloat ballSpeed = 0.1f;
GLfloat spin = 0.0;
GLfloat spin_speed = 5.0;

GLfloat sunPosition = 0.0f;
GLfloat sunSpeed = 0.002f;
int sunRed = 252;
int sunGreen = 180;
int sunBlue = 13;

GLfloat cloudPosition = 0.0f;
GLfloat cloudSpeed = 0.002f;

void DrawEllipse(float cx, float cy, float rx, float ry, int num_segments){
    float theta = 2 * 3.1415926 / float(num_segments);
    float c = cosf(theta);//precalculate the sine and cosine
    float s = sinf(theta);
    float t;

    float x = 1;//we start at angle = 0
    float y = 0;

    glBegin(GL_LINE_LOOP);
    //glLineWidth(7);
    for(int ii = 0; ii < num_segments; ii++)
    {
        //apply radius and offset
        glVertex2f(x * rx + cx, y * ry + cy);//output vertex

        //apply the rotation matrix
        t = x;
        x = c * x - s * y;
        y = s * t + c * y;
    }
    glEnd();
}




void Sun()
{
    int i;

    GLfloat p1= 0.45f;
    GLfloat q1= 0.8f;
    GLfloat r1 = 0.08f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( sunRed,sunGreen,sunBlue);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
    }
    glEnd ();

}




void ball(){
    int i;

    GLfloat p1 = 0.0f;
    GLfloat q1 = -0.35f;
    GLfloat r1 = 0.06f;
    int tringle2 = 40;

    GLfloat tp2 = 2.0f * PI;

    
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 252, 255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    
    // external design (check)
    // main design will be replaced

    
    //ball design
    //1st
    glBegin (GL_POLYGON);
    glColor3ub(0,0,0);
    
    glVertex2f(0.0f, -0.33f);
    glVertex2f(-0.02f, -0.32f);
    glVertex2f(-0.01f, -0.3f);
    glVertex2f(0.01f, -0.3f);
    glVertex2f(0.02f, -0.32f);
    
    glEnd ();
    
    //2nd
    glBegin (GL_POLYGON);
    glColor3ub(0,0,0);
    
    glVertex2f(0.0f, -0.37f);
    glVertex2f(-0.02f, -0.38f);
    glVertex2f(-0.01f, -0.4f);
    glVertex2f(0.01f, -0.4f);
    glVertex2f(0.02f, -0.38f);
    
    glEnd ();
    
    //3rd
    glBegin (GL_POLYGON);
    glColor3ub(0,0,0);
    
    glVertex2f(-0.03f, -0.35f);
    glVertex2f(-0.05f, -0.33f);
    glVertex2f(-0.06f, -0.34f);
    glVertex2f(-0.06f, -0.36f);
    glVertex2f(-0.05f, -0.37f);
    
    glEnd ();
    
    //4th
    glBegin (GL_POLYGON);
    glColor3ub(0,0,0);
    
    glVertex2f(0.03f, -0.35f);
    glVertex2f(0.05f, -0.33f);
    glVertex2f(0.06f, -0.34f);
    glVertex2f(0.06f, -0.36f);
    glVertex2f(0.05f, -0.37f);
    
    glEnd ();
   
}




void Cloud(float p,float q,float r)
{
    int i;

    GLfloat p1= p;
    GLfloat q1= q;
    GLfloat r1 = r;
    int tringle2=40;

    GLfloat tp2 = 2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
    }
    glEnd ();
   
}



