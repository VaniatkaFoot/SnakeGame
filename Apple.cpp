#include "Apple.h"
#include <cstdlib>

Apple::Apple() : apple_pos_x(0), apple_pos_y(0) {}

Apple::Apple(int positionX, int positionY)
	: apple_pos_x(positionX), apple_pos_y(positionY) {}

void Apple::apple_init(int field_width, int field_height)
{
	do {
		apple_pos_x = rand() % field_width;
		apple_pos_y = rand() % field_height;
	} while (apple_pos_x == field_width / 2 && apple_pos_y == field_height / 2);
}

void Apple::apple_spawn(int prev_x, int prev_y, int field_width, int field_height)
{
	do {
		apple_pos_x = rand() % field_width;
		apple_pos_y = rand() % field_height;
	} while (apple_pos_x == prev_x && apple_pos_y == prev_y);
}

bool Apple::operator==(const Apple& other) const {
	return apple_pos_x == other.apple_pos_x && apple_pos_y == other.apple_pos_y;
}

std::istream& operator>>(std::istream& in, Apple& apple) {
	int x, y;
	in >> x >> y;
	apple = Apple(x, y);
	return in;
}

std::ostream& operator<<(std::ostream& out, const Apple& apple) {
	out << apple.apple_pos_x << " " << apple.apple_pos_y;
	return out;
}
