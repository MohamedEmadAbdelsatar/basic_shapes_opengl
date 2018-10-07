// shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <iostream>
#include <stdlib.h> //Needed for "exit" function
#define _USE_MATH_DEFINES
#include <cmath>
  //Include OpenGL header files, so that we can use OpenGL
#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include "main.h"
#endif

using namespace std;

void init()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 920.0, 0.0, 1200.0);
}

void hexagon() {
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0, 0.0, 0.0);//black vertical
	glBegin(GL_LINES);
	glVertex2f(385, 0);
	glVertex2f(385, 1200);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);//black horizontal
	glBegin(GL_LINES);
	glVertex2f(0, 900);
	glVertex2f(920, 900);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);//black horizontal
	glBegin(GL_LINES);
	glVertex2f(0, 540);
	glVertex2f(920, 540);
	glEnd();

	glColor3f(0.4, 0.4, 0.4);	//Gray Pentagon
	glBegin(GL_POLYGON);
	glVertex2i(85, 925);	// Left Bottom
	glVertex2i(235, 925);	// Right Bottom
	glVertex2i(285, 1075);	// Right Middle	
	glVertex2i(160, 1175);	// Top
	glVertex2i(35, 1075);	// Left Middle
	glEnd();


	glColor3f(1, 0.2, 0.2);	//red Hexagon
	glBegin(GL_POLYGON);
	glVertex2i(550, 925);	// Left Bottom
	glVertex2i(700, 925);	// Right Bottom
	glVertex2i(775, 1050);	// Right Middle
	glVertex2i(700, 1175);	// Right Top
	glVertex2i(550, 1175);	// Left Top
	glVertex2i(475, 1050);	// Left Middle
	glEnd();


	glColor3f(0.7, 0.5, 0.3);//brown Heptagon
	glBegin(GL_POLYGON);
	glVertex2i(100, 605);	// Left Bottom
	glVertex2i(250, 605);	// Right Bottom
	glVertex2i(325, 730);	// Right Middle
	glVertex2i(275, 830);	// Right Top
	glVertex2i(175, 880);	// Top
	glVertex2i(75, 830);	// Left Top
	glVertex2i(25, 730);	// Left Middle
	glEnd();
	

	glColor3f(0.2, 0.5, 0.4);//green Octagon
	glBegin(GL_POLYGON);
	glVertex2i(550, 580);	// Left Bottom
	glVertex2i(700, 580);	// Right Bottom
	glVertex2i(800, 680);	// Right Bottom Middle
	glVertex2i(800, 780);	// Right Top Middle
	glVertex2i(700, 880);	// Right Top
	glVertex2i(550, 880);	// Left Top
	glVertex2i(450, 780);	// Left Top Middle
	glVertex2i(450, 680);	// Left Bottom Middle
	glEnd();

	glColor3f(0.7, 0.7, 0.6);	//whiteGray Nonagon 
	glBegin(GL_POLYGON);
	glVertex2i(150, 170);	// Left Bottom
	glVertex2i(250, 170);	// Right Bottom
	glVertex2i(350, 270);	// Right Bottom Middle
	glVertex2i(375, 370);	// Right Middle
	glVertex2i(320, 470);	// Right Top Middle
	glVertex2i(200, 520);	// Top
	glVertex2i(80, 470);	// Left Top Middle
	glVertex2i(25, 370);	// Left Middle
	glVertex2i(45, 270);	// Left Bottom Middle
	glEnd();

	glColor3f(0.3, 0.6, 0.8); //blue Decagon
	glBegin(GL_POLYGON);
	glVertex2i(550, 70);	// Left Bottom
	glVertex2i(750, 70);	// Right Bottom
	glVertex2i(850, 170);	// Right Bottom Middle
	glVertex2i(900, 275);	// Right Middle
	glVertex2i(850, 420);	// Right Top Middle
	glVertex2i(750, 520);	// Right Top
	glVertex2i(550, 520);	// Left Top
	glVertex2i(450, 420);	// Left Top Middle
	glVertex2i(400, 295);	// Left Middle
	glVertex2i(450, 160);	// Left Bottom Middle
	glEnd();

	glFlush();

}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(920, 1200);
	glutCreateWindow("Basic Shapes");
	init();
	glutDisplayFunc(hexagon);
	glutMainLoop();
	return 0; //This line is never reached
}
