#pragma once

struct Apple
{
	int apple_pos_x, apple_pos_y;

	void apple_init();
	void apple_spawn(int prev_x, int prev_y);
};
