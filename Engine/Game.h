#pragma once
#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Surface.h"
#include "RectM.h"
#include "FrameTimer.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	FrameTimer ft;

	static const short nSurfs = 30;
	float currFrame = 0.f;
	Surface surfs[nSurfs];

#ifndef NDEBUG
	float dSpeed = 4.f * 60.0f;
#else
	float dSpeed = 0.895f * 60.0f;
#endif
	/********************************/
};