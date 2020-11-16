#include "GameWindow.h"
#include <cmath>

static constexpr double Pi = acos(-1.);

GameWindow::GameWindow(int width, int height)
: Window(width, height)
{

}

void GameWindow::setup()
{
	glEnable(GL_DEPTH_TEST);

	glClearColor(0.2f, 0.35f, 0.45f, 1.0f);

	glMatrixMode(GL_PROJECTION);

	gluPerspective(45, ((double) width()) / ((double) height()), 0.1, 30.);

	glMatrixMode(GL_MODELVIEW);

}

void GameWindow::render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glLoadIdentity();

	gluLookAt(
			5., 5., _camera_z,
			0., 0., 0.,
			0., 0., 1.);

	glRotated(_angle, 0., 0., 1.);

	glBegin(GL_QUADS);
	//Down
	glColor3d(1., 0., 0.);
	glVertex3d(1., 1., -1.);
	glVertex3d(-1., 1., -1.);
	glVertex3d(-1., -1., -1.);
	glVertex3d(1., -1., -1.);

	//Up
	glColor3d(0., 1., 1.);
	glVertex3d(1., 1., 1.);
	glVertex3d(-1., 1., 1.);
	glVertex3d(-1., -1., 1.);
	glVertex3d(1., -1., 1.);

	//Left
	glColor3d(0., 1., 0.);
	glVertex3d(1., -1., 1.);
	glVertex3d(1., -1., -1.);
	glVertex3d(-1., -1., -1.);
	glVertex3d(-1., -1., 1.);

	//Right
	glColor3d(1., 0., 1.);
	glVertex3d(1., 1., 1.);
	glVertex3d(1., 1., -1.);
	glVertex3d(-1., 1., -1.);
	glVertex3d(-1., 1., 1.);

	//Back
	glColor3d(0., 0., 1.);
	glVertex3d(-1., -1., 1.);
	glVertex3d(-1., -1., -1.);
	glVertex3d(-1., 1., -1.);
	glVertex3d(-1., 1., 1.);

	//Face
	glColor3d(1., 1., 0.);
	glVertex3d(1., -1., 1.);
	glVertex3d(1., -1., -1.);
	glVertex3d(1., 1., -1.);
	glVertex3d(1., 1., 1.);


	glEnd();
}

void GameWindow::do_logic() {

	_angle += 1.;
	if (_angle>=360.){
		_angle -=360;
	}

	_camera_z = sin(_angle / 180 * Pi) * 3;
}
