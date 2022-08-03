//
//  main.cpp
//  Baymax
//
//  Created by Abu Jubair on 19/7/22.
//

#include <GLUT/glut.h>
#include<math.h>
#include "houses.h"
#define PI  3.141516

GLfloat ballPosition = 0.0f;
GLfloat ballY = 0.0f;
GLfloat ballSpeed = 0.1f;
GLfloat baymaxPosition = 0.0f;
GLfloat baymaxSpeed = 0.01f;


void DrawEllipse(float cx, float cy, float rx, float ry, int num_segments)
{
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

    GLfloat p1= 0.5f;
    GLfloat q1= 0.8f;
    GLfloat r1 = 0.08f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 252,180,13);
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

void Cloud(float p,float q,float r)
{
    int i;

    GLfloat p1= p;
    GLfloat q1= q;
    GLfloat r1 = r;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

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

void ball()
{
    int i;

    GLfloat p1=0.0f;
    GLfloat q1= -0.35f;
    GLfloat r1 = 0.10f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glPushMatrix();
    glTranslated(ballPosition, ballY, 0.0f);
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
    glPopMatrix();

}

void baymax()
{
    int i;

    GLfloat p1= -0.45f;
    GLfloat q1= -0.15f;
    GLfloat r1 = 0.10f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;
    
    glPushMatrix();
    glTranslated(baymaxPosition, 0.0f, 0.0f);
    
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (211,211,211);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    
    glBegin(GL_QUADS);
    glColor3ub(211,211,211);

    glVertex2f(-0.5f, -0.2f);    // x, y
    glVertex2f(-0.5f, -0.4f);    // x, y
    glVertex2f(-0.4f, -0.4f);    // x, y
    glVertex2f(-0.4f, -0.2f);    // x, y

    glEnd();
    glPopMatrix();
 
}


// v = (1/2)gt^2;

void collision(int value)
{
    if(baymaxPosition >= 0.3f){
        baymaxPosition = 0.3f;
        
        if(ballPosition < 0.8){
            ballPosition += ballSpeed;
            if(ballY > 0.0f){
                ballY = 0.0f;
            }else ballY = 0.1f;
        }else{
            ballPosition = 0.8f;
        }

    }else{
        baymaxPosition += baymaxSpeed;
    }
    
    
    glutPostRedisplay();
    glutTimerFunc(100, collision, 0);
}

void display() {
    glClearColor(0.7f, 0.7f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    houses();
    
    
    //div 2
    glBegin(GL_QUADS);
    glColor3ub(248,219,121);

    glVertex2f(-1.0f, 0.3f);    // x, y
    glVertex2f(-1.0f, 0.27f);    // x, y
    glVertex2f(1.0f, 0.27f);    // x, y
    glVertex2f(1.0f, 0.3f);    // x, y

    glEnd();
    
    //div 3
    glBegin(GL_QUADS);
    glColor3ub(112,176,214);

    glVertex2f(-1.0f, 0.27f);    // x, y
    glVertex2f(-1.0f, 0.1f);    // x, y
    glVertex2f(1.0f, 0.1f);    // x, y
    glVertex2f(1.0f, 0.27f);    // x, y

    glEnd();
    
    //div 4
    glBegin(GL_QUADS);
    glColor3f(0.7f, 0.7f, 0.0f);

    glVertex2f(-1.0f, 0.1f);    // x, y
    glVertex2f(-1.0f, 0.0f);    // x, y
    glVertex2f(1.0f, 0.0f);    // x, y
    glVertex2f(1.0f, 0.1f);    // x, y

    glEnd();
    
    
    //field
    glBegin(GL_QUADS);
    glColor3ub(167,187,75);

    glVertex2f(-0.85f, 0.0f);    // x, y
    glVertex2f(-0.97f, -0.9f);    // x, y
    glVertex2f(0.97f, -0.9f);    // x, y
    glVertex2f(0.85f, 0.0f);    // x, y

    glEnd();
    
    //middle line
    glBegin(GL_LINES);
    glColor3f(0.9f, 1.0f, 1.0f);
    //glLineWidth(15);

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
    
    //left side line
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.6f, -0.1f);    // x, y
    glVertex2f(-0.6f, -0.8f);    // x, y
    glVertex2f(-0.6f, -0.1f);    // x, y
    glVertex2f(-0.86f, -0.1f);    // x, y
    glVertex2f(-0.6f, -0.8f);    // x, y
    glVertex2f(-0.96f, -0.8f);    // x, y

    glEnd();
    
    //right goalPost
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.89f, -0.72f);    // x, y
    glVertex2f(1.0f, -0.72f);    // x, y

    glEnd();
        
    //left goalPost
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.89f, -0.72f);    // x, y
    glVertex2f(-1.0f, -0.72f);    // x, y
//    glVertex2f(-0.89f, -0.22f);    // x, y
//    glVertex2f(-1.0f, -0.22f);    // x, y

    glEnd();
    
    Sun();
    //1st left
    Cloud(-0.8f,0.8f,0.05f);
    Cloud(-0.85f,0.8f,0.033f);
    Cloud(-0.75f,0.8f,0.033f);
    //2nd left
    Cloud(-0.6f,0.9f,0.05f);
    Cloud(-0.65f,0.9f,0.033f);
    Cloud(-0.55f,0.9f,0.033f);
    //3rd left
    Cloud(0.6f,0.75f,0.05f);
    Cloud(0.55f,0.75f,0.033f);
    Cloud(0.65f,0.75f,0.033f);
    baymax();
    ball();
   
    
    
//    //div 5
//    glBegin(GL_QUADS);
//    glColor3f(0.9f, 0.9f, 0.0f);
//
//    glVertex2f(-1.0f, 0.0f);    // x, y
//    glVertex2f(-1.0f, -1.0f);    // x, y
//    glVertex2f(1.0f, -1.0f);    // x, y
//    glVertex2f(1.0f, 0.0f);    // x, y
//
//    glEnd();

    
    glFlush();  // Render now
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(2560, 1600);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Translation Animation");
    glutDisplayFunc(display);
    glutTimerFunc(100, collision, 0);
    glutMainLoop();
    return 0;
}

