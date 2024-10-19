#pragma once

#include "AbstractRenderer.h"

class Render : public AbstractRender {
public:
	virtual void DrawGame(Field& gameBoard, char** image);
	virtual void WriteText(Field& gameBoard, char* text);
};
