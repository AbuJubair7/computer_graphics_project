//
//  houses.cpp
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
#include "houses.h"

void putAllHouses(){
    
    //1st house
    //left side
    glBegin(GL_QUADS);
    glColor3ub(229,167,80);

    glVertex2f(-0.95f, 0.3f);    // x, y
    glVertex2f(-0.85f, 0.3f);    // x, y
    glVertex2f(-0.85f, 0.6f);    // x, y
    glVertex2f(-0.95f, 0.55f);    // x, y

    glEnd();

    //1st window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(193, 129, 62);

    glVertex2f(-0.94f, 0.36f);    // x, y
    glVertex2f(-0.9f, 0.35f);    // x, y
    glVertex2f(-0.9f, 0.42f);    // x, y
    glVertex2f(-0.94f, 0.41f);    // x, y

    glEnd();

    //2nd window- bottom right
    glBegin(GL_QUADS);
    glColor3ub(193, 129, 62);

    glVertex2f(-0.855f, 0.35f);    // x, y
    glVertex2f(-0.895f, 0.36f);    // x, y
    glVertex2f(-0.895f, 0.41f);    // x, y
    glVertex2f(-0.855f, 0.42f);    // x, y

    glEnd();

    //3rd window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(193, 129, 62);

    glVertex2f(-0.94f, 0.44f);    // x, y
    glVertex2f(-0.9f, 0.43f);    // x, y
    glVertex2f(-0.9f, 0.5f);    // x, y
    glVertex2f(-0.94f, 0.49f);    // x, y

    glEnd();

    //4th window - bottom right
    glBegin(GL_QUADS);
    glColor3ub(193, 129, 62);

    glVertex2f(-0.855f, 0.43f);    // x, y
    glVertex2f(-0.895f, 0.44f);    // x, y
    glVertex2f(-0.895f, 0.49f);    // x, y
    glVertex2f(-0.855f, 0.5f);    // x, y

    glEnd();


    //right side
    glBegin(GL_QUADS);
    glColor3ub(245,207,114);

    glVertex2f(-0.85f, 0.6f);    // x, y
    glVertex2f(-0.85f, 0.3f);    // x, y
    glVertex2f(-0.75f, 0.3f);    // x, y
    glVertex2f(-0.75f, 0.55f);    // x, y

    glEnd();

    //1st window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(210, 145, 59);

    glVertex2f(-0.8f, 0.36f);    // x, y
    glVertex2f(-0.76f, 0.35f);    // x, y
    glVertex2f(-0.76f, 0.41f);    // x, y
    glVertex2f(-0.8f, 0.42f);    // x, y

    glEnd();

    //2nd window- bottom right
    glBegin(GL_QUADS);

    glColor3ub(210, 145, 59);

    glVertex2f(-0.81f, 0.35f);    // x, y
    glVertex2f(-0.845f, 0.36f);    // x, y
    glVertex2f(-0.845f, 0.42f);    // x, y
    glVertex2f(-0.81f, 0.41f);    // x, y

    glEnd();

    //3rd window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(210, 145, 59);

    glVertex2f(-0.8f, 0.44f);    // x, y
    glVertex2f(-0.76f, 0.43f);    // x, y
    glVertex2f(-0.76f, 0.49f);    // x, y
    glVertex2f(-0.8f, 0.5f);    // x, y

    glEnd();

    //4th window - bottom right
    glBegin(GL_QUADS);
    glColor3ub(210, 145, 59);

    glVertex2f(-0.81f, 0.43f);    // x, y
    glVertex2f(-0.845f, 0.44f);    // x, y
    glVertex2f(-0.845f, 0.5f);    // x, y
    glVertex2f(-0.81f, 0.49f);    // x, y

    glEnd();


    //3th house
    //left side
    glBegin(GL_QUADS);
    glColor3ub(240,229,195);

    glVertex2f(-0.5f, 0.3f);    // x, y
    glVertex2f(-0.4f, 0.3f);    // x, y
    glVertex2f(-0.4f, 0.62f);    // x, y
    glVertex2f(-0.5f, 0.58f);    // x, y

    glEnd();

    //1st window
    //botom left

 glBegin(GL_QUADS);
    glColor3ub(0,0,0);

    glVertex2f(-0.49f, 0.32f);    // x, y
    glVertex2f(-0.46f, 0.32f);    // x, y
    glVertex2f(-0.46f, 0.37f);    // x, y
    glVertex2f(-0.49f, 0.36f);    // x, y

    glEnd();

    //2nd window
    //botom right

 glBegin(GL_QUADS);
    glColor3ub(0,0,0);

    glVertex2f(-0.44f, 0.32f);    // x, y
    glVertex2f(-0.41f, 0.32f);    // x, y
    glVertex2f(-0.41f, 0.37f);    // x, y
    glVertex2f(-0.44f, 0.36f);    // x, y

    glEnd();


    //3rd window
    //mid right

 glBegin(GL_QUADS);
    glColor3ub(0,0,0);

    glVertex2f(-0.44f, 0.40f);    // x, y
    glVertex2f(-0.41f, 0.40f);    // x, y
    glVertex2f(-0.41f, 0.45f);    // x, y
    glVertex2f(-0.44f, 0.44f);    // x, y

    glEnd();

    //4th window
    //mid left

 glBegin(GL_QUADS);
    glColor3ub(0,0,0);

    glVertex2f(-0.49f, 0.40f);    // x, y
    glVertex2f(-0.46f, 0.40f);    // x, y
    glVertex2f(-0.46f, 0.45f);    // x, y
    glVertex2f(-0.49f, 0.44f);    // x, y

    glEnd();


    //5th window
    //top left

 glBegin(GL_QUADS);
    glColor3ub(0,0,0);

    glVertex2f(-0.49f, 0.48f);    // x, y
    glVertex2f(-0.46f, 0.48f);    // x, y
    glVertex2f(-0.46f, 0.53f);    // x, y
    glVertex2f(-0.49f, 0.52f);    // x, y

    glEnd();

    //6th window
    //mid right

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);

    glVertex2f(-0.44f, 0.48f);    // x, y
    glVertex2f(-0.41f, 0.48f);    // x, y
    glVertex2f(-0.41f, 0.53f);    // x, y
    glVertex2f(-0.44f, 0.52f);    // x, y

    glEnd();



    //right side
    glBegin(GL_QUADS);
    glColor3ub(196,192,176);
     glVertex2f(-0.3f, 0.3f);    // x, y
    glVertex2f(-0.4f, 0.3f);    // x, y
    glVertex2f(-0.4f, 0.62f);    // x, y
    glVertex2f(-0.3f, 0.59f);    // x, y


    glEnd();

    //1st window
    //bottom left
     glBegin(GL_QUADS);
    glColor3ub(0,0,0);

       glVertex2f(-0.39f, 0.32f);    // x, y
     glVertex2f(-0.36f, 0.32f);    // x, y
     glVertex2f(-0.36f, 0.36f);    // x, y
     glVertex2f(-0.39f, 0.37f);    // x, y

    glEnd();


    //2nd window
    //bottom right
     glBegin(GL_QUADS);
    glColor3ub(0,0,0);

       glVertex2f(-0.34f, 0.32f);    // x, y
     glVertex2f(-0.31f, 0.32f);    // x, y
     glVertex2f(-0.31f, 0.36f);    // x, y
     glVertex2f(-0.34f, 0.37f);    // x, y

    glEnd();


    //3rd window
    //mid left
     glBegin(GL_QUADS);
    glColor3ub(0,0,0);

       glVertex2f(-0.39f, 0.39f);    // x, y
     glVertex2f(-0.36f, 0.39f);    // x, y
     glVertex2f(-0.36f, 0.43f);    // x, y
     glVertex2f(-0.39f, 0.44f);    // x, y

    glEnd();


    //4th window
    //mid right
     glBegin(GL_QUADS);
    glColor3ub(0,0,0);

       glVertex2f(-0.34f, 0.39f);    // x, y
     glVertex2f(-0.31f, 0.39f);    // x, y
     glVertex2f(-0.31f, 0.43f);    // x, y
     glVertex2f(-0.34f, 0.44f);    // x, y

    glEnd();

    //5th window
    //top left
     glBegin(GL_QUADS);
    glColor3ub(0,0,0);

       glVertex2f(-0.39f, 0.46f);    // x, y
     glVertex2f(-0.36f, 0.46f);    // x, y
     glVertex2f(-0.36f, 0.50f);    // x, y
     glVertex2f(-0.39f, 0.51f);    // x, y

    glEnd();


    //6th window
    //top right
     glBegin(GL_QUADS);
    glColor3ub(0,0,0);

       glVertex2f(-0.34f, 0.46f);    // x, y
     glVertex2f(-0.31f, 0.46f);    // x, y
     glVertex2f(-0.31f, 0.50f);    // x, y
     glVertex2f(-0.34f, 0.51f);    // x, y

    glEnd();



    //4th house
    //right side
    glBegin(GL_QUADS);
    glColor3ub(225,180,75);

    glVertex2f(-0.1f, 0.3f);    // x, y
    glVertex2f(-0.21f, 0.3f);    // x, y
    glVertex2f(-0.21f, 0.7f);    // x, y
    glVertex2f(-0.1f, 0.65f);    // x, y

    glEnd();

    //1st window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(137, 184, 206);

    glVertex2f(0.35f, 0.35f);    // x, y
    glVertex2f(0.31f, 0.35f);    // x, y
    glVertex2f(0.31f, 0.42f);    // x, y
    glVertex2f(0.35f, 0.41f);    // x, y

    glEnd();

    //2nd window- bottom right
    glBegin(GL_QUADS);

    glColor3ub(137, 184, 206);

    glVertex2f(0.36f, 0.35f);    // x, y
    glVertex2f(0.4f, 0.35f);    // x, y
    glVertex2f(0.4f, 0.41f);    // x, y
    glVertex2f(0.36f, 0.42f);    // x, y

    glEnd();

    //3rd window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(137, 184, 206);

    glVertex2f(0.35f, 0.44f);    // x, y
    glVertex2f(0.31f, 0.44f);    // x, y
    glVertex2f(0.31f, 0.51f);    // x, y
    glVertex2f(0.35f, 0.5f);    // x, y

    glEnd();

    //4th window - bottom right
    glBegin(GL_QUADS);
    glColor3ub(137, 184, 206);

    glVertex2f(0.36f, 0.44f);    // x, y
    glVertex2f(0.4f, 0.44f);    // x, y
    glVertex2f(0.4f, 0.5f);    // x, y
    glVertex2f(0.36f, 0.51f);    // x, y

    glEnd();

    //5th window - bottom left
    glBegin(GL_QUADS);
    glColor3ub(137, 184, 206);

    glVertex2f(0.35f, 0.53f);    // x, y
    glVertex2f(0.31f, 0.53f);    // x, y
    glVertex2f(0.31f, 0.6f);    // x, y
    glVertex2f(0.35f, 0.59f);    // x, y

    glEnd();

    //6th window - bottom right
    glBegin(GL_QUADS);
    glColor3ub(137, 184, 206);

    glVertex2f(0.36f, 0.53f);    // x, y
    glVertex2f(0.4f, 0.53f);    // x, y
    glVertex2f(0.4f, 0.59f);    // x, y
    glVertex2f(0.36f, 0.6f);    // x, y

    glEnd();

    //left side
    glBegin(GL_QUADS);
    glColor3ub(229,167,80);

    glVertex2f(-0.32f, 0.65f);    // x, y
    glVertex2f(-0.32f, 0.3f);    // x, y
    glVertex2f(-0.21f, 0.3f);    // x, y
    glVertex2f(-0.21f, 0.7f);    // x, y

    glEnd();

    //1st window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.24f, 0.35f);    // x, y
    glVertex2f(0.2f, 0.35f);    // x, y
    glVertex2f(0.2f, 0.41f);    // x, y
    glVertex2f(0.24f, 0.42f);    // x, y

    glEnd();

    //2nd window- bottom right
    glBegin(GL_QUADS);

    glColor3ub(157, 167, 174);

    glVertex2f(0.25f, 0.35f);    // x, y
    glVertex2f(0.29f, 0.35f);    // x, y
    glVertex2f(0.29f, 0.42f);    // x, y
    glVertex2f(0.25f, 0.41f);    // x, y

    glEnd();

    //3rd window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.24f, 0.44f);    // x, y
    glVertex2f(0.2f, 0.44f);    // x, y
    glVertex2f(0.2f, 0.5f);    // x, y
    glVertex2f(0.24f, 0.51f);    // x, y

    glEnd();

    //4th window - bottom right
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.25f, 0.44f);    // x, y
    glVertex2f(0.29f, 0.44f);    // x, y
    glVertex2f(0.29f, 0.51f);    // x, y
    glVertex2f(0.25f, 0.5f);    // x, y

    glEnd();

    //5th window - bottom left
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.24f, 0.53f);    // x, y
    glVertex2f(0.2f, 0.53f);    // x, y
    glVertex2f(0.2f, 0.59f);    // x, y
    glVertex2f(0.24f, 0.6f);    // x, y

    glEnd();

    //6th window - bottom right
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.25f, 0.53f);    // x, y
    glVertex2f(0.29f, 0.53f);    // x, y
    glVertex2f(0.29f, 0.6f);    // x, y
    glVertex2f(0.25f, 0.59f);    // x, y

    glEnd();


    //5th house
    //left side
    glBegin(GL_QUADS);
    glColor3ub(225, 192, 201);

    glVertex2f(0.0f, 0.3f);    // x, y
    glVertex2f(0.11f, 0.3f);    // x, y
    glVertex2f(0.11f, 0.62f);    // x, y
    glVertex2f(0.0f, 0.58f);    // x, y

    glEnd();

      //1st window
      // bottom left
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    glVertex2f(0.01f, 0.34f);    // x, y
    glVertex2f(0.04f, 0.34f);    // x, y
    glVertex2f(0.04f, 0.41f);    // x, y
    glVertex2f(0.01f, 0.40f);    // x, y

    glEnd();


    //2nd window
    // bottom right
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    glVertex2f(0.07f, 0.34f);    // x, y
    glVertex2f(0.10f, 0.34f);    // x, y
    glVertex2f(0.10f, 0.41f);    // x, y
    glVertex2f(0.07f, 0.40f);    // x, y

    glEnd();

    //3rd window
    // bottom left
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    glVertex2f(0.01f, 0.45f);    // x, y
    glVertex2f(0.04f, 0.45f);    // x, y
    glVertex2f(0.04f, 0.52f);    // x, y
    glVertex2f(0.01f, 0.51f);    // x, y

    glEnd();


    //4th window
    // bottom right
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    glVertex2f(0.07f, 0.45f);    // x, y
    glVertex2f(0.10f, 0.45f);    // x, y
    glVertex2f(0.10f, 0.52f);    // x, y
    glVertex2f(0.07f, 0.51f);    // x, y

    glEnd();

    //right side
    glBegin(GL_QUADS);
    glColor3ub(211, 155, 187);

    glVertex2f(0.11f, 0.3f);    // x, y
    glVertex2f(0.19f, 0.3f);    // x, y
    glVertex2f(0.19f, 0.59f);    // x, y
    glVertex2f(0.11f, 0.62f);    // x, y

    glEnd();
    //1st window
    //bottom left

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    glVertex2f(0.12f, 0.34f);    // x, y
    glVertex2f(0.15f, 0.34f);    // x, y
    glVertex2f(0.15f, 0.40f);    // x, y
    glVertex2f(0.12f, 0.41f);    // x, y

    glEnd();

      //2nd window
    //bottom right

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    glVertex2f(0.16f, 0.34f);    // x, y
    glVertex2f(0.19f, 0.34f);    // x, y
    glVertex2f(0.19f, 0.40f);    // x, y
    glVertex2f(0.16f, 0.41f);    // x, y

    glEnd();

    //3rd window
    //top left

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    glVertex2f(0.12f, 0.45f);    // x, y
    glVertex2f(0.15f, 0.45f);    // x, y
    glVertex2f(0.15f, 0.51f);    // x, y
    glVertex2f(0.12f, 0.52f);    // x, y

    glEnd();

    //4th window
    //bottom right

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    glVertex2f(0.16f, 0.45f);    // x, y
    glVertex2f(0.19f, 0.45f);    // x, y
    glVertex2f(0.19f, 0.51f);    // x, y
    glVertex2f(0.16f, 0.52f);    // x, y




    //last er ager house
    //right side
    glBegin(GL_QUADS);
    glColor3ub(239,228,194);

    glVertex2f(0.3f, 0.3f);    // x, y
    glVertex2f(0.41f, 0.3f);    // x, y
    glVertex2f(0.41f, 0.65f);    // x, y
    glVertex2f(0.3f, 0.7f);    // x, y

    glEnd();

    //1st window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(137, 184, 206);

    glVertex2f(0.35f, 0.35f);    // x, y
    glVertex2f(0.31f, 0.35f);    // x, y
    glVertex2f(0.31f, 0.42f);    // x, y
    glVertex2f(0.35f, 0.41f);    // x, y

    glEnd();

    //2nd window- bottom right
    glBegin(GL_QUADS);

    glColor3ub(137, 184, 206);

    glVertex2f(0.36f, 0.35f);    // x, y
    glVertex2f(0.4f, 0.35f);    // x, y
    glVertex2f(0.4f, 0.41f);    // x, y
    glVertex2f(0.36f, 0.42f);    // x, y

    glEnd();

    //3rd window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(137, 184, 206);

    glVertex2f(0.35f, 0.44f);    // x, y
    glVertex2f(0.31f, 0.44f);    // x, y
    glVertex2f(0.31f, 0.51f);    // x, y
    glVertex2f(0.35f, 0.5f);    // x, y

    glEnd();

    //4th window - bottom right
    glBegin(GL_QUADS);
    glColor3ub(137, 184, 206);

    glVertex2f(0.36f, 0.44f);    // x, y
    glVertex2f(0.4f, 0.44f);    // x, y
    glVertex2f(0.4f, 0.5f);    // x, y
    glVertex2f(0.36f, 0.51f);    // x, y

    glEnd();

    //5th window - bottom left
    glBegin(GL_QUADS);
    glColor3ub(137, 184, 206);

    glVertex2f(0.35f, 0.53f);    // x, y
    glVertex2f(0.31f, 0.53f);    // x, y
    glVertex2f(0.31f, 0.6f);    // x, y
    glVertex2f(0.35f, 0.59f);    // x, y

    glEnd();

    //6th window - bottom right
    glBegin(GL_QUADS);
    glColor3ub(137, 184, 206);

    glVertex2f(0.36f, 0.53f);    // x, y
    glVertex2f(0.4f, 0.53f);    // x, y
    glVertex2f(0.4f, 0.59f);    // x, y
    glVertex2f(0.36f, 0.6f);    // x, y

    glEnd();

    //left side
    glBegin(GL_QUADS);
    glColor3ub(195,191,175);

    glVertex2f(0.3f, 0.7f);    // x, y
    glVertex2f(0.3f, 0.3f);    // x, y
    glVertex2f(0.19f, 0.3f);    // x, y
    glVertex2f(0.19f, 0.65f);    // x, y

    glEnd();

    //1st window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.24f, 0.35f);    // x, y
    glVertex2f(0.2f, 0.35f);    // x, y
    glVertex2f(0.2f, 0.41f);    // x, y
    glVertex2f(0.24f, 0.42f);    // x, y

    glEnd();

    //2nd window- bottom right
    glBegin(GL_QUADS);

    glColor3ub(157, 167, 174);

    glVertex2f(0.25f, 0.35f);    // x, y
    glVertex2f(0.29f, 0.35f);    // x, y
    glVertex2f(0.29f, 0.42f);    // x, y
    glVertex2f(0.25f, 0.41f);    // x, y

    glEnd();

    //3rd window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.24f, 0.44f);    // x, y
    glVertex2f(0.2f, 0.44f);    // x, y
    glVertex2f(0.2f, 0.5f);    // x, y
    glVertex2f(0.24f, 0.51f);    // x, y

    glEnd();

    //4th window - bottom right
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.25f, 0.44f);    // x, y
    glVertex2f(0.29f, 0.44f);    // x, y
    glVertex2f(0.29f, 0.51f);    // x, y
    glVertex2f(0.25f, 0.5f);    // x, y

    glEnd();

    //5th window - bottom left
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.24f, 0.53f);    // x, y
    glVertex2f(0.2f, 0.53f);    // x, y
    glVertex2f(0.2f, 0.59f);    // x, y
    glVertex2f(0.24f, 0.6f);    // x, y

    glEnd();

    //6th window - bottom right
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.25f, 0.53f);    // x, y
    glVertex2f(0.29f, 0.53f);    // x, y
    glVertex2f(0.29f, 0.6f);    // x, y
    glVertex2f(0.25f, 0.59f);    // x, y

    glEnd();


    //last house
    //right side
    glBegin(GL_QUADS);
    glColor3ub(195,191,175);

    glVertex2f(0.95f, 0.3f);    // x, y
    glVertex2f(0.85f, 0.3f);    // x, y
    glVertex2f(0.85f, 0.6f);    // x, y
    glVertex2f(0.95f, 0.55f);    // x, y

    glEnd();

    //1st window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.94f, 0.35f);    // x, y
    glVertex2f(0.9f, 0.35f);    // x, y
    glVertex2f(0.9f, 0.42f);    // x, y
    glVertex2f(0.94f, 0.41f);    // x, y

    glEnd();

    //2nd window- bottom right
    glBegin(GL_QUADS);

    glColor3ub(157, 167, 174);

    glVertex2f(0.855f, 0.35f);    // x, y
    glVertex2f(0.895f, 0.35f);    // x, y
    glVertex2f(0.895f, 0.41f);    // x, y
    glVertex2f(0.855f, 0.42f);    // x, y

    glEnd();

    //3rd window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.94f, 0.43f);    // x, y
    glVertex2f(0.9f, 0.43f);    // x, y
    glVertex2f(0.9f, 0.5f);    // x, y
    glVertex2f(0.94f, 0.49f);    // x, y

    glEnd();

    //4th window - bottom right
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.855f, 0.43f);    // x, y
    glVertex2f(0.895f, 0.43f);    // x, y
    glVertex2f(0.895f, 0.49f);    // x, y
    glVertex2f(0.855f, 0.5f);    // x, y

    glEnd();

    //left side
    glBegin(GL_QUADS);
    glColor3ub(239,228,194);

    glVertex2f(0.85f, 0.6f);    // x, y
    glVertex2f(0.85f, 0.3f);    // x, y
    glVertex2f(0.75f, 0.3f);    // x, y
    glVertex2f(0.75f, 0.55f);    // x, y

    glEnd();

    //1st window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.8f, 0.35f);    // x, y
    glVertex2f(0.76f, 0.35f);    // x, y
    glVertex2f(0.76f, 0.41f);    // x, y
    glVertex2f(0.8f, 0.42f);    // x, y

    glEnd();

    //2nd window- bottom right
    glBegin(GL_QUADS);

    glColor3ub(157, 167, 174);

    glVertex2f(0.81f, 0.35f);    // x, y
    glVertex2f(0.845f, 0.35f);    // x, y
    glVertex2f(0.845f, 0.42f);    // x, y
    glVertex2f(0.81f, 0.41f);    // x, y

    glEnd();

    //3rd window- bottom left
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.8f, 0.43f);    // x, y
    glVertex2f(0.76f, 0.43f);    // x, y
    glVertex2f(0.76f, 0.49f);    // x, y
    glVertex2f(0.8f, 0.5f);    // x, y

    glEnd();

    //4th window - bottom right
    glBegin(GL_QUADS);
    glColor3ub(157, 167, 174);

    glVertex2f(0.81f, 0.43f);    // x, y
    glVertex2f(0.845f, 0.43f);    // x, y
    glVertex2f(0.845f, 0.5f);    // x, y
    glVertex2f(0.81f, 0.49f);    // x, y

    glEnd();


    
    

    
}
