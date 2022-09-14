#pragma once
#include "Colors.h"
#include <string>

class Surface
{
	Color* pPixels = nullptr;
	int width, height;
	int nPixels;

public:
	Surface() = default;
	Surface(const std::string& filename)
	{
		Init(filename);
	}
	Surface(int Width, int Height);
	Surface(const Surface& oth);

	void Init(const std::string& filename);

	Surface& operator = (const Surface& oth);
	void PutPixel(int X, int Y, Color Color);
	Color GetPixel(int X, int Y) const;
	int GetWidth() const;
	int GetHeight() const;

	~Surface();
};