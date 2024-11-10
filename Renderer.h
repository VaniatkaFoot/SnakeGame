#pragma once

#include "AbstractRenderer.h"
#include <vector>
#include <string>

class Render : public AbstractRender {
public:
	void DrawGame(Field& gameBoard, std::vector<std::vector<char>>& image) override;
	void WriteText(Field& gameBoard, const std::string& text) override;
};
