#pragma once
#include <iostream>
#include <string>

struct GameEngine
{
	const int res_x;
	const int res_y;
	std::string player_name;
	int difficulty;

	GameEngine(int width = 80, int height = 25, int dif = 1)
		: res_x(width), res_y(height), difficulty(dif) {}

	void UpdateGame(int dif);
	void InputName();
};
