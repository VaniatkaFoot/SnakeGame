#pragma once

struct Field
{
	const int width;
	const int height;

	Field(int w = 80, int h = 20) : width(w), height(h) {}
};
