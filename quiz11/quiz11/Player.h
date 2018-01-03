#pragma once
#include "Creature.h"
#include <iostream>
#include "Monster.h"

class Monster;

class Player :public Creature
{
	int m_level;
public:
	Player(std::string name, char symbol = '@', int health = 10, int dpa = 1, int gold = 0) :Creature(name, symbol, health, dpa, gold),m_level(0)
	{
	}

	void levelUp();
	int getLevel();
	bool hasWon();
	void encounterMonster(Monster &monster);
	void attackMonster(Monster &monster);
	bool runFromMonster(Monster &monster);
};


