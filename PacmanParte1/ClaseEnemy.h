#pragma once
#include "ConsoleUtils.h"
#include "Map.h"

#include <stdlib.h>

class ClaseEnemy
{
private:
	COORD position;
	COORD direction;
	char character = 'A';
	ConsoleUtils::CONSOLE_COLOR foreground = ConsoleUtils::CONSOLE_COLOR::DARK_RED;
	ConsoleUtils::CONSOLE_COLOR background = ConsoleUtils::CONSOLE_COLOR::BLACK;
	void RandomDirection();
public:
	ClaseEnemy();
	ClaseEnemy(COORD _spawn);
	void Draw();
	void Update(Map* _map);
};

