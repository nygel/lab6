//nygelA.cpp
//by Nygel Aton
//
//make a pull request
#include "fonts.h"
#include <GL/glx.h>
void showName(){

        Rect r; 
        r.bot = 500;
        r.left = 10;
        r.center = 0;
        ggprint8b(&r, 16, 0x00ff0000, "Nygel :D!!!!");
}

void drawBox(int x, int y){

	static float angle =0.0;
      //Draw spinning box
        //glColor3fv(1.0,0.2,0.5);
        glColor3ub(240,200,130);
        glPushMatrix();
        //center the box
	glTranslatef(x,y,0);
	//rotate on the z-axis
        glRotatef(angle, 0.0f, 0.0f, 1.0f);
        //move center of rotation to center of box
	glTranslatef(-50,-50,0);
	angle += 2.5;
        glBegin(GL_QUADS);
                glVertex2i(0,	0);
                glVertex2i(100,	0);
                glVertex2i(100,	100);
                glVertex2i(0,	100);
        glEnd();
        Rect c; 
        c.bot = 50;
        c.left = 50;
	//center is a flag for some fonts set it to 
	//1 = true(center text)
	//0 = false(no center)
        c.center = 1;
        ggprint8b(&r, 16, 0x0aff0200, "Nygel :D!!!!");
        glPopMatrix();
	

}
