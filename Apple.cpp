#include "Apple.h"
#include <stdlib.h>

Apple::Apple() { apple_pos_x = 0; apple_pos_y = 0; }

Apple::Apple(const int positionX, int positionY) 
{
	apple_pos_x = positionX;
	apple_pos_y = positionY;
}

Apple::Apple(const Apple& other)
{
	apple_pos_x = other.apple_pos_x;
	apple_pos_y = other.apple_pos_y;
}

void Apple::apple_init() 
{
	do
	{
		apple_pos_x = rand() % 80;
		apple_pos_y = rand() % 20;
	} while (apple_pos_x == 40 && apple_pos_y ==10);	
};

void Apple::apple_spawn(int prev_x, int prev_y) 
{
	do
	{
		apple_pos_x = rand() % 80;
		apple_pos_y = rand() % 20;
	} while (apple_pos_x == prev_x && apple_pos_y == prev_y);

};

Apple Apple::operator = (const Apple& other) {
	apple_pos_x = other.apple_pos_x;
	apple_pos_y = other.apple_pos_y;
	return *this;
}
bool Apple::operator == (const Apple& other) const {
	return apple_pos_x == other.apple_pos_x && apple_pos_y == other.apple_pos_y;
}

std::istream& operator >> (std::istream& in, Apple& apple) {
	int x, y;
	in >> x >> y;
	apple = Apple(x,y);
	return in;
}

std::ostream& operator << (std::ostream& out, const Apple& apple) {
	out << apple.apple_pos_x << apple.apple_pos_y;
	return out;
}
