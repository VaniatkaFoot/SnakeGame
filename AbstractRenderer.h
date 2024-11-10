#pragma once
#include <vector>
#include <string>
#include "Field.h"
#include "GameEngine.h"

struct AbstractRender {
	virtual void DrawGame(Field& gameBoard, std::vector<std::vector<char>>& image) = 0;
	virtual void WriteText(Field& gameBoard, const std::string& text) = 0;
};
