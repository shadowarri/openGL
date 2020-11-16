#include "GameWindow.h"

GameWindow::GameWindow(int width, int height)
: Window(width, height)
{

}

void GameWindow::setup()
{
	glClearColor(0.2f, 0.35f, 0.45f, 1.0f);

	glMatrixMode(GL_PROJECTION);

	gluPerspective(45, ((double) width()) / ((double) height()), 0.1, 30.);

	glMatrixMode(GL_MODELVIEW);

}

void GameWindow::render()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity();

	gluLookAt(
			5., 5., 3.,
			0., 0., 0.,
			0., 0., 1.);

	glRotated(_angle, 0., 0., 1.);

	glBegin(GL_TRIANGLES);
	glColor3d(1.0, 1.0, 0.0);
	glVertex3d(0.0, 0.8, -0.);
	glColor3d(1.0, 1.0, 1.0);
	glVertex3d(0.8, -0.8, 0.);
	glColor3d(1.0, 0.0, 1.0);
	glVertex3d(-0.8, -0.8, 0.);

	glEnd();
}

void GameWindow::do_logic() {

	_angle += 0.5;
	if (_angle>=360.){
		_angle -=360;
	}
}
