#pragma once
#include "ConsoleUtils.h"
#include "Map.h"

enum USER_INPUT { NONE, UP, DOWN, RIGHT, LEFT, QUIT };
class Player
{
private:
	COORD spawn;
	COORD position;
	COORD direction;
	char character = 'O';
	ConsoleUtils::CONSOLE_COLOR foreground = ConsoleUtils::CONSOLE_COLOR::YELLOW;
	ConsoleUtils::CONSOLE_COLOR background = ConsoleUtils::CONSOLE_COLOR::BLACK;

public:

	/*Player(COORD _spawn);
	void Update(Map* _map, USER_INPUTS input);
	void Draw();*/
};

