//
//  baymax.hpp
//  Baymax_1.5
//
//  Created by Abu Jubair on 5/8/22.
//

#ifndef BAYMAX_H
#define BAYMAX_H

#include <stdio.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <windows.h>
#endif
#define PI  3.141516

extern GLfloat baymaxPosition;
extern GLfloat baymaxSpeed;

void putBaymax();
#endif /* baymax_hpp */
