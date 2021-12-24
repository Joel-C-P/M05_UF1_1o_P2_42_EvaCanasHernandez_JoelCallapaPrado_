#include "Player.h"

void Player::Update(Map* _map, USER_INPUTS input)
{
}

void Player::Draw()
{
	ConsoleUtils::Console_SetPos(position);
	ConsoleUtils::Console_SetColor(foreground, background);
	std::cout << character;
}



