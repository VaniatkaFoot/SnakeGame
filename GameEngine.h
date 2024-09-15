#pragma once
#include <iostream> 

struct GameEngine
{
	const int res_x = 80, res_y = 25;
	std::string player_name;
	int difficulty;


	std::string Set_name();
	void Game_render(std::string name);
	void Update_game(int dif)
};
