#pragma once
#include "Creature.h"

class Player :public Creature
{
	int m_level;
public:
	Player(std::string name, char symbol = '@', int health = 10, int dpa = 1, int gold = 0) :Creature(name, symbol, health, dpa, gold)
	{
	}

	void levelUp();
	int getLevel();
	bool hasWon();
};


