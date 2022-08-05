//
//  baymax.cpp
//  Baymax_1.5
//
//  Created by Abu Jubair on 5/8/22.
//

#include "baymax.h"
#include <math.h>

GLfloat baymaxPosition = 0.0f;
GLfloat baymaxSpeed = 0.01f;

void putBaymax(){
    int i;

    //for matha
    GLfloat p3= -0.42f;
    GLfloat q3= 0.04f;
    GLfloat r3 = 0.04f;
    int tringle4=40;

    GLfloat tp4 =2.0f * PI  ;

    //for ghar
    GLfloat p2= -0.425f;
    GLfloat q2= -0.04f;
    GLfloat r2 = 0.05f;
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;


    //for vuri
    GLfloat p1= -0.42f;
    GLfloat q1= -0.22f;
    GLfloat r1 = 0.09f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

//    glPushMatrix();
//    glTranslated(baymaxPosition, 0.0f, 0.0f);

    //matha
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
    glVertex2f (p3,q3);
    for(i= 0;i<=tringle4; i++)
    {
        glVertex2f (
                    p3+(r3*cos(i*tp4/tringle4)),
                    q3+(r3*sin(i*tp4/tringle4))
                    );


    }
    glEnd ();

    //ghar
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
    glVertex2f (p2,q2);
    for(i= 0;i<=tringle3; i++)
    {
        glVertex2f (
                    p2+(r2*cos(i*tp3/tringle3)),
                    q2+(r2*sin(i*tp3/tringle3))
                    );


    }
    glEnd ();

    //vurir opr e
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(-0.51f, -0.2f);    // x, y
    glVertex2f(-0.33f, -0.2f);    // x, y
    glVertex2f(-0.37f, -0.05f);    // x, y
    glVertex2f(-0.47f, -0.02f);    // x, y

    glEnd();

    //vuri
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    //leg
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(-0.46f, -0.3f);    // x, y
    glVertex2f(-0.45f, -0.4f);    // x, y
    glVertex2f(-0.4f, -0.4f);    // x, y
    glVertex2f(-0.39f, -0.3f);    // x, y

    glEnd();
   

}

