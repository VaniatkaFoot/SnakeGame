#pragma once
#include <iostream> 
#include "Snake.h"
#include "Apple.h"
#include "Field.h"

struct GameEngine
{
	Snake _snake;
	Field _field;
	Apple _apple;

	const int res_x = 80, res_y = 25;
	std::string player_name;
	int difficulty;
	bool game_state;


	std::string Set_name();
	int Set_difficulty();
	void Game_init();
	void Game_render(std::string name);
	void Collision_check();
	void Update_game(int dif);


};
