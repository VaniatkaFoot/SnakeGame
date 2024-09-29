#pragma once

struct Snake
{
	int head_cord_x, head_cord_y;
	int tail_cord_x[100], tail_cord_y[100];

	int tail_len;

	enum move_direction { LEFT, RIGHT, UP, DOWN };
	move_direction snake_dir;


	void InitSnake();
	void ChangeDir(move_direction initDir);
};
