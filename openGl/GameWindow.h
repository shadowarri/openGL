#pragma once
#ifndef GAMEWINDOW_H_
#define GAMEWINDOW_H_

#include "Window.h"
#include <GL/gl.h>
#include <GL/glu.h>

class GameWindow: public Window
{
public:
	GameWindow(	int width = DEFAULT_WIDTH,
				int height = DEFAULT_HEIGHT);
	virtual ~GameWindow() = default;

	virtual void setup() override;
	virtual void render() override;
};

#endif



