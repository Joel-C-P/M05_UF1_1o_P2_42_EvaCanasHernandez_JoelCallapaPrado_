#include "ClaseEnemy.h"

void ClaseEnemy::RandomDirection()
{
	direction = { 0,0 };
	int random = rand() % 4;
	switch (random)
	{
	case 0:
		direction.X = 1;
		break;
	case 1:
		direction.X = -1;
		break;
	case 2:
		direction.Y= 1;
		break;
	case 3:
		direction.Y = -1;
		break;	
	}
}

ClaseEnemy::ClaseEnemy()
{
	position = { 0,0 };
	direction = { 0, 0 };
}

ClaseEnemy::ClaseEnemy(COORD _spawn)
{
	position = _spawn;
	direction = { 0,0 };
}

void ClaseEnemy::Draw()
{
	ConsoleUtils::Console_SetPos(position);
	ConsoleUtils::Console_SetColor(foreground, background);
	std::cout << character;
}

void ClaseEnemy::Update(Map* _map)
{
	RandomDirection();
	position.X += direction.X;
	position.Y += direction.Y;
}
