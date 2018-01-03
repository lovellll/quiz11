#include "stdafx.h"
#include "Player.h"

void Player::levelUp()
{
	++m_level;
	Creature::addDpa(1);
}

int Player::getLevel()
{
	return m_level;
}

bool Player::hasWon()
{
	return (m_level >= 20);
}
