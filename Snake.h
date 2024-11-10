#pragma once
#include <vector>

struct Snake
{
	int head_cord_x;
	int head_cord_y;
	std::vector<int> tail_cord_x;
	std::vector<int> tail_cord_y;

	int tail_len;
	enum move_direction { LEFT, RIGHT, UP, DOWN };
	move_direction snake_dir;

	Snake() : head_cord_x(0), head_cord_y(0), tail_len(0), snake_dir(RIGHT) {}

	void InitSnake();
	void ChangeDir(move_direction initDir);
};
