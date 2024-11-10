#pragma once
#include <iostream>

struct Apple
{
	int apple_pos_x, apple_pos_y;

	Apple();
	Apple(const int positionX, int positionY);
	Apple(const Apple& other);

	Apple operator = (const Apple& other);
	bool operator == (const Apple& other) const;

	void apple_init();
	void apple_spawn(int prev_x, int prev_y);
};

std::istream& operator >> (std::istream& in, Apple& apple);
std::ostream& operator << (std::ostream& out, const Apple& apple);