#pragma once
#include "Field.h"
#include "GameEngine.h"

struct AbstractRender {
	virtual void DrawGame(Field& gameBoard, char** image) = 0;
	virtual void WriteText(Field& gameBoard, char* text) = 0;
};