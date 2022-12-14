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
#include "gallery.h"
#include "wave.h"
#include "goal_post.h"
#include "plane.h"
#define PI  3.141516

using namespace std;

GLfloat boatPosition = 0.0f;
GLfloat boatSpeed = 0.004f;

GLfloat waterEffectX = 0.0f;

GLfloat planePosition = 0.40f;
int canPlaneMove = 0;

int sunDown = 0;
int kick = 0;

void cloudMove(int v)
{
    if(cloudPosition >= 1.5)
        cloudPosition = -1.5;
    else cloudPosition += cloudSpeed;

    glutPostRedisplay();
    glutTimerFunc(1000.0f/60.0f, cloudMove, 0);
}
// 234 164 75 (R, G, B) for gradient
void sunMove(int v){
     // optional
    if(sunPosition < -0.58f){
        sunPosition = -0.58f;

    }
    
    if(sunPosition < -0.25f){
        if(sunRed > 213) sunRed -= 1;
        if(sunGreen > 78) sunGreen -= 2;
        if(sunBlue > 18) sunBlue -= 5;
        
        if(skyRed < 234){
            skyRed += 5;
        }
        if(skyGreen > 164){
            skyGreen -= 5;
        }
        if(skyBlue > 74){
            skyBlue -= 5;
        }
    }
    
    if(sunDown)  sunPosition -= sunSpeed;
    glutPostRedisplay();
    glutTimerFunc(1000.0f/60.0f, sunMove, 0);
}

void planeMove(int v){

    if(planePosition > -1.85){
        if(canPlaneMove){
            planePosition -= 0.06;
        }
    }else {
        canPlaneMove = 0;
        planePosition =0.40f;
    }
    
    glutPostRedisplay();
    glutTimerFunc(1000.0f/ 60.0f, planeMove, 0);
        
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
            ballPosition = 0.935f;
        }

    }else{
        if(kick) baymaxPosition += baymaxSpeed;
    }

    glutPostRedisplay();
    glutTimerFunc(1000.0f/60.0f, collision, 0);
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
    glutTimerFunc(1000.0f/60.0f, boatMove, 0);
}

void waterMove(int v){
    waterEffectX -= 0.003f;
    glutPostRedisplay();
    glutTimerFunc(100, waterMove, 0);
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
    
    
    // putting trees
    putTrees(0.68f); // 1
    putTrees(0.71f); // 3
    putTrees(0.66f); // 3
    
    putTrees(-0.5f); // 3
    putTrees(-0.52f); // 2
    putTrees(-0.55f); // 3
    
    putTrees(0.5f); // 1
    putTrees(0.52f); // 3
    putTrees(0.55f); // 3
    
    putTrees(0.95f); // 1
    putTrees(0.92f); // 3
    putTrees(0.97f); // 3
    
    putTrees(-0.15f); // 1
    putTrees(-0.12f); // 3
    putTrees(-0.1f); // 3
    
    putTrees(-0.03f); // 1
    putTrees(-0.05f); // 3
    
    putTrees(-0.7f); // 3
    putTrees(-0.67f); // 2
    putTrees(-0.65f); // 3
    
    putTrees(-0.6f); // 2
   
    putTrees(-0.95f); // 3
    putTrees(-0.97f); // 3
    
    
    
    
    //field
    putField();
    
    glPushMatrix();
    glTranslated(planePosition, 0, 0);
    putPlane();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(cloudPosition, 0.0f, 0.0f);
    clouds();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslatef(waterEffectX, 0, 0);
    putWave();
//    RenderSineWave();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(boatPosition, 0.0f, 0.0f);
    boat();
    glPopMatrix();
    
    
    putBridge();
    
    glPushMatrix();
    glTranslated(baymaxPosition, 0.0f, 0.0f);
    putBaymax();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(ballPosition, ballY, 0.0f);
    ball();
    //ballDesign();
    glPopMatrix();


    putGallery();
    //putDiv5();

    putGoalPost();

    glFlush();  // Render now
}

void controlKey(unsigned char key, int kX, int kY){
   
    if(key == 'r'){
        baymaxPosition = 0.0f;
        ballPosition = 0.0f;
    }else if(key == 'm'){
        sunPosition = 0.28f;
        skyRed = 130;
        skyGreen = 211;
        skyBlue = 240;

        sunRed = 252;
        sunGreen = 180;
        sunBlue = 13;
    }else if(key == 's'){
        sunDown = sunDown ? 0 : 1;
    }else if(key == 'k'){
        kick = kick ? 0 : 1;
    }else if(key == 'p'){
        canPlaneMove = canPlaneMove ? 0 : 1;
    }
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(2560, 1600);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Translation Animation");
    
    glutDisplayFunc(display);
    glutTimerFunc(1000.0f/60.0f, cloudMove, 0);
    glutTimerFunc(1000.0f/60.0f, boatMove, 0);
    glutTimerFunc(1000.0f/60.0f, collision, 0);
    glutTimerFunc(1000.0f/60.0f, sunMove, 0);
    glutTimerFunc(1000.0f/60.0f, planeMove, 0);
    glutTimerFunc(1000.0f/60.0f, waterMove, 0);
    glutKeyboardFunc(controlKey);
    
    glutMainLoop();
    
  
    return 0;
}





