#pragma once
#include <iostream> 

struct GameEngine
{
	const int res_x = 80, res_y = 25;
	std::string player_name;
	int difficulty;

	void Update_game(int dif);
	void Input_name();
};
