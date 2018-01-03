#include "stdafx.h"
#include "Creature.h"

std::string Creature::getName()
{
	return m_name;
}

char Creature::getSymbol()
{
	return m_symbol;
}

int Creature::getHealth()
{
	return m_health;
}

int Creature::getDpa()
{
	return m_dpa;
}

int Creature::getGold()
{
	return m_gold;
}

void Creature::reduceHealth(int damage)
{
	m_health -= damage;
}

bool Creature::isDead()
{
	return(m_health <= 0);
}

void Creature::addGold(int gold)
{
	m_gold += gold;
}