#pragma once
#include <iostream> 

struct GameEngine
{
	const int res_x = 80, res_y = 25;
	std::string player_name;
	int difficulty;

	void game_render(std::string name);
	void Update_game(int dif)
};
