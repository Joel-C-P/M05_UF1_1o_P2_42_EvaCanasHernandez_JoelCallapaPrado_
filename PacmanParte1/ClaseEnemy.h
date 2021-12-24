#pragma once
#include "ConsoleUtils.h"
class ClaseEnemy
{
private:
	COORD position;
	COORD direction;
	char character = 'A';
	ConsoleUtils::CONSOLE_COLOR foreground = ConsoleUtils::CONSOLE_COLOR::DARK_RED;
	ConsoleUtils::CONSOLE_COLOR background = ConsoleUtils::CONSOLE_COLOR::BLACK;
public:
	void Draw();
};

