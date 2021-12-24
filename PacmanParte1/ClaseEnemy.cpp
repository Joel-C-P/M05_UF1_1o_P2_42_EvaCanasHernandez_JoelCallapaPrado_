
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
	COORD newPosition = position;
	newPosition.X += direction.X;
	newPosition.Y += direction.Y;

	if (newPosition.X < 0)
	{
		newPosition.X = _map->Width - 1;
	}
	newPosition.X %= _map->Width;
	if (newPosition.Y < 0)
	{
		newPosition.Y = _map->Height - 1;
	}
	newPosition.Y %= _map->Height;
	switch (_map->GetTile(newPosition.X, newPosition.Y))
	{
	case Map::MAP_TILES::MAP_WALL:
		newPosition = position;
		break;
	}
	position = newPosition;
}
