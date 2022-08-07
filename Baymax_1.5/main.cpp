//
//  main.cpp
//  Baymax
//
//  Created by Mahjabin Mim on 7/19/22.
//





#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <windows.h>
#endif
#include<math.h>
#include <iostream>
#include "houses.h"
#include "baymax.h"
#include "circular_objects.h"
#include "field.h"
#include "all_divs.h"

#define PI  3.141516

using namespace std;


GLfloat boatPosition = 0.0f;
GLfloat boatSpeed = 0.004f;

void cloudMove(int v)
{
    if(cloudPosition >= 1.5)
        cloudPosition = -1.5;
    else cloudPosition += cloudSpeed;

    glutPostRedisplay();
    glutTimerFunc(100, cloudMove, 0);
}

void sunMove(int v){
    if(sunPosition < -0.58f){
        sunPosition = 0.28f;
    }
    sunPosition -= sunSpeed;
    glutPostRedisplay();
    glutTimerFunc(100, sunMove, 0);
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


void boat(){

    //1st boat
    //small quad
    glBegin(GL_QUADS);
    glColor3ub(255,254,248);

    glVertex2f(-0.45f, 0.22f);    // x, y
    glVertex2f(-0.45f, 0.2f);    // x, y
    glVertex2f(-0.4f, 0.2f);    // x, y
    glVertex2f(-0.4f, 0.22f);    // x, y

    glEnd();

    //big quad
    glBegin(GL_QUADS);
    glColor3ub(255,254,248);

    glVertex2f(-0.5f, 0.2f);    // x, y
    glVertex2f(-0.49f, 0.17f);    // x, y
    glVertex2f(-0.37f, 0.17f);    // x, y
    glVertex2f(-0.36f, 0.2f);    // x, y

    glEnd();

    //2nd boat
    //small quad
    glBegin(GL_QUADS);
    glColor3ub(255,254,248);

    glVertex2f(0.45f, 0.22f);    // x, y
    glVertex2f(0.45f, 0.2f);    // x, y
    glVertex2f(0.4f, 0.2f);    // x, y
    glVertex2f(0.4f, 0.22f);    // x, y

    glEnd();

    //big quad
    glBegin(GL_QUADS);
    glColor3ub(255,254,248);

    glVertex2f(0.5f, 0.2f);    // x, y
    glVertex2f(0.49f, 0.17f);    // x, y
    glVertex2f(0.37f, 0.17f);    // x, y
    glVertex2f(0.36f, 0.2f);    // x, y

    glEnd();
}

void boatMove(int v){

    if(boatPosition >= 1.5)
        boatPosition = -1.5;
    else boatPosition += boatSpeed;

    glutPostRedisplay();
    glutTimerFunc(100, boatMove, 0);
}

void clouds(){
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
}

void display() {
    glClearColor(0.7f, 0.7f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    putDiv1();
    glPushMatrix();
    glTranslatef(0.0f, sunPosition, 0);
    Sun();
    glPopMatrix();
    //..... houses..............
    putAllHouses(); // check housses.cpp file to edit houses
    //..........................

    putDiv2();
    putDiv3();
    putDiv4();

    //field
    putField();
    
    
    
    glPushMatrix();
    glTranslated(cloudPosition, 0.0f, 0.0f);
    clouds();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(boatPosition, 0.0f, 0.0f);
    boat();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(baymaxPosition, 0.0f, 0.0f);
    putBaymax();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(ballPosition, ballY, 0.0f);
    ball();
    glPopMatrix();



    //putDiv5();


    glFlush();  // Render now
}

void controlKey(unsigned char key, int kX, int kY){
   
    if(key == 'r'){
        baymaxPosition = 0.0f;
        ballPosition = 0.0f;
    }
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(2560, 1600);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Translation Animation");
    glutDisplayFunc(display);
    glutTimerFunc(100, cloudMove, 0);
    glutTimerFunc(100, boatMove, 0);
    glutTimerFunc(100, collision, 0);
    glutTimerFunc(100, sunMove, 0);
    glutKeyboardFunc(controlKey);
    glutMainLoop();
    
  
    return 0;
}





