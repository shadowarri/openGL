#pragma once
#ifndef GAMEWINDOW_H_
#define GAMEWINDOW_H_

#include "Window.h"
#include <GL/gl.h>
#include <GL/glu.h>

class GameWindow: public Window
{
protected:
	double _angle {0.};
	double _camera_z {0.};
public:
	GameWindow(	int width = DEFAULT_WIDTH,
				int height = DEFAULT_HEIGHT);
	virtual ~GameWindow() = default;

	virtual void setup();
	virtual void render();
	virtual void do_logic();
};

#endif



