//
//  circular_objects.hpp
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
#ifndef CIRCULAR_OBJECTS_H
#define CIRCULAR_OBJECTS_H
#define PI  3.141516

#include <stdio.h>

//.......variables...
extern GLfloat ballPosition;
extern GLfloat ballY;
extern GLfloat ballSpeed;
extern GLfloat spin;
extern GLfloat spin_speed;

extern GLfloat sunPosition;
extern GLfloat sunSpeed;
extern int sunRed;
extern int sunGreen;
extern int sunBlue;

extern GLfloat cloudPosition;
extern GLfloat cloudSpeed;
//...........


void Sun();

void DrawEllipse(float cx, float cy, float rx, float ry, int num_segments);

void ball();

//void ballDesign();

void Cloud(float p,float q,float r);

#endif /* circular_objects_hpp */
