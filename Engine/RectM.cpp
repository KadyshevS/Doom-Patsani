#include "RectM.h"

RectM::RectM(const int Top, const int Bottom, const int Left, const int Right)
	:
	top(Top),
	bottom(Bottom),
	left(Left),
	right(Right),
	width(Right-Left),
	height(Bottom-Top)
{}

RectM::RectM(const Vec2 Pos, const int Width, const int Height)
	:
	top(Pos.y),
	bottom(Pos.y+Height),
	left(Pos.x),
	right(Pos.x+Width),
	width(Width),
	height(Height)
{}
