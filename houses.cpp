//
//  houses.cpp
//  Baymax
//
//  Created by Abu Jubair on 4/8/22.
//

#include "houses.h"
#include<GLUT/glut.h>

void firstHouse(){
    //div 1
    glBegin(GL_QUADS);
    glColor3ub(130,211,240);

    glVertex2f(-1.0f, 1.0f);    // x, y
    glVertex2f(-1.0f, 0.3f);    // x, y
    glVertex2f(1.0f, 0.3f);    // x, y
    glVertex2f(1.0f, 1.0f);    // x, y

    glEnd();
    
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
}

void secondHouse(){
    
    glBegin(GL_QUADS);

    glColor3ub(164,163,198);



   glVertex2f(-0.67f, 0.25f);    // x, y
   glVertex2f(-0.57f, 0.25f);    // x, y
   glVertex2f(-0.57f, 0.6f);    // x, y
   glVertex2f(-0.67f, 0.6f);    // x, y



   glEnd();

   //1st window


    //glBegin(GL_QUADS);

    glColor3ub(0,0,0);



   glVertex2f(-0.75f, 0.35f);    // x, y
   glVertex2f(-0.68f, 0.35f);    // x, y
   glVertex2f(-0.68f, 0.5f);    // x, y
   glVertex2f(-0.75f, 0.5f);    // x, y



   glEnd();

   //2nd window


    glBegin(GL_QUADS);

    glColor3ub(0,0,0);



   glVertex2f(-0.66f, 0.35f);    // x, y
   glVertex2f(-0.59f, 0.35f);    // x, y
   glVertex2f(-0.59f, 0.5f);    // x, y
   glVertex2f(-0.66f, 0.5f);    // x, y



   glEnd();

}

void thirdHouse(){
    glBegin(GL_QUADS);

   glColor3ub(204,255,229);



       glVertex2f(-0.54f, 0.25f);    // x, y
       glVertex2f(-0.34f, 0.25f);    // x, y
       glVertex2f(-0.34f, 0.7f);    // x, y
       glVertex2f(-0.54f, 0.7f);    // x, y





       glEnd();

       //1st window
        glBegin(GL_QUADS);

          glColor3ub(0,0,0);



       glVertex2f(-0.52f, 0.3f);    // x, y
       glVertex2f(-0.45f, 0.3f);    // x, y
       glVertex2f(-0.45f, 0.45f);    // x, y
       glVertex2f(-0.52f, 0.45f);    // x, y





       glEnd();


       //2nd window
        glBegin(GL_QUADS);

          glColor3ub(0,0,0);




       glVertex2f(-0.43f, 0.3f);    // x, y
       glVertex2f(-0.36f, 0.3f);    // x, y
       glVertex2f(-0.36f, 0.45f);    // x, y
       glVertex2f(-0.43f, 0.45f);    // x, y





       glEnd();


        //3rd window
        glBegin(GL_QUADS);

          glColor3ub(0,0,0);



       glVertex2f(-0.52f, 0.5f);    // x, y
       glVertex2f(-0.45f, 0.5f);    // x, y
       glVertex2f(-0.45f, 0.65f);    // x, y
       glVertex2f(-0.52f, 0.65f);    // x, y





       glEnd();



       //4th window
        glBegin(GL_QUADS);

          glColor3ub(0,0,0);




       glVertex2f(-0.43f, 0.5f);    // x, y
       glVertex2f(-0.36f, 0.5f);    // x, y
       glVertex2f(-0.36f, 0.65f);    // x, y
       glVertex2f(-0.43f, 0.65f);    // x, y





       glEnd();



}
void fourthHouse(){
    glBegin(GL_QUADS);

   glColor3ub(98,10,10);




   glVertex2f(-0.31f, 0.25f);    // x, y
   glVertex2f(-0.11f, 0.25f);    // x, y
   glVertex2f(-0.11f, 0.6f);    // x, y
   glVertex2f(-0.31f, 0.6f);    // x, y





   glEnd();


   //1st window

    glBegin(GL_QUADS);

   glColor3ub(0,0,0);




   glVertex2f(-0.29f, 0.35f);    // x, y
   glVertex2f(-0.22f, 0.35f);    // x, y
   glVertex2f(-0.22f, 0.5f);    // x, y
   glVertex2f(-0.29f, 0.5f);    // x, y





   glEnd();


   //2nd window

    glBegin(GL_QUADS);

   glColor3ub(0,0,0);





   glVertex2f(-0.20f, 0.35f);    // x, y

   glVertex2f(-0.13f, 0.35f);    // x, y
   glVertex2f(-0.13f, 0.5f);    // x, y
   glVertex2f(-0.20f, 0.5f);    // x, y





   glEnd();

}

void fifthHouse(){
    glBegin(GL_QUADS);

   glColor3ub(158,133,75);



  glVertex2f(-0.08f, 0.25f);    // x, y
   glVertex2f(0.12f, 0.25f);    // x, y
   glVertex2f(0.12f, 0.8f);    // x, y
      glVertex2f(-0.08f, 0.8f);    // x, y




   glEnd();

   //1st window
    glBegin(GL_QUADS);

   glColor3ub(0,0,0);



  glVertex2f(-0.06f, 0.3f);    // x, y
   glVertex2f(0.013f, 0.3f);    // x, y
   glVertex2f(0.013f, 0.45f);    // x, y
      glVertex2f(-0.06f, 0.45f);    // x, y




   glEnd();

   //2nd window

        glBegin(GL_QUADS);

   glColor3ub(0,0,0);



   glVertex2f(0.03f, 0.3f);    // x, y
   glVertex2f(0.10f, 0.3f);    // x, y
   glVertex2f(0.10f, 0.45f);    // x, y
   glVertex2f(0.03f, 0.45f);    // x, y




   glEnd();


   //3rd window
    glBegin(GL_QUADS);

   glColor3ub(0,0,0);



  glVertex2f(-0.06f, 0.6f);    // x, y
   glVertex2f(0.013f, 0.6f);    // x, y
   glVertex2f(0.013f, 0.75f);    // x, y
      glVertex2f(-0.06f, 0.75f);    // x, y




   glEnd();

   //4th window

        glBegin(GL_QUADS);

   glColor3ub(0,0,0);



   glVertex2f(0.03f, 0.6f);    // x, y
   glVertex2f(0.10f, 0.6f);    // x, y
   glVertex2f(0.10f, 0.75f);    // x, y
   glVertex2f(0.03f, 0.75f);    // x, y




   glEnd();
}
void houses(){
    
     // first house
    firstHouse();
        //2nd house
    secondHouse();


    //3rd house
    thirdHouse();


    //4th house
    fourthHouse();
        
    //5th house
         

         
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


