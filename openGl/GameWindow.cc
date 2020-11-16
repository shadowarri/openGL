#include "GameWindow.h"

GameWindow::GameWindow(int width, int height)
: Window(width, height)
{

}

void GameWindow::setup()
{
	glClearColor(0.2f, 0.35f, 0.45f, 1.0f);

}

void GameWindow::render()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glColor3d(1.0, 1.0, 0.0);
	glVertex2d(0.0, 0.8);
	glColor3d(1.0, 1.0, 1.0);
	glVertex2d(0.8, -0.8);
	glColor3d(1.0, 0.0, 1.0);
	glVertex2d(-0.8, -0.8);

	glEnd();
}
