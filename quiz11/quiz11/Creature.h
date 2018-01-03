#pragma once
#include <iostream>
#include <string>

class Creature
{
	std::string m_name;
	char m_symbol;
	int m_health;
	int m_dpa;
	int m_gold;

public:
	Creature(std::string name, char symbol, int health, int dpa, int gold) :m_name(name), m_symbol(symbol), m_health(health), m_dpa(dpa), m_gold(gold)
	{
	}


	std::string getName();
	char getSymbol();
	int getHealth();	
	int getDpa();
	int getGold();
	void reduceHealth(int damage);
	bool isDead();
	void addGold(int gold);
	void addDpa(int dpa);

};