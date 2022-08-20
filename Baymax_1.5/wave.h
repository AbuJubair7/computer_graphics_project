//
//  wave.hpp
//  Baymax_1.5
//
//  Created by Abu Jubair on 19/8/22.
//

#ifndef WAVE_H
#define WAVE_H
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <windows.h>
#endif
#include<math.h>
#include <iostream>

void putWave();
void RenderSineWave();


#endif /* wave_hpp */
