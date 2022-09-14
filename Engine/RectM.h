#pragma once
#include "Vec2.h"

class RectM
{
public:
	int top, bottom, left, right;
	int width, height;

public:
	RectM(const int Top, const int Bottom, const int Left, const int Right);
	RectM(const Vec2 Pos, const int Width, const int Height);
};