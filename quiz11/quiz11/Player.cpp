#include "stdafx.h"
#include "Player.h"


void Player::levelUp()
{
	++m_level;
	std::cout << "You are now level " << getLevel() << ".\n";
	Creature::addDpa(1);
	std::cout << "Your damage has increased to " << getDpa() << ".\n";
}

int Player::getLevel()
{
	return m_level;
}

bool Player::hasWon()
{
	return (m_level >= 20);
}

void Player::encounterMonster(Monster & monster)
{
	std::cout << "You You have encountered a " << monster.getName() << " (" << monster.getSymbol() << ")\n";
	while (true)
	{
		std::cout << "(R)un or (F)ight: ";
		char choice;
		std::cin >> choice;
		if (choice == 'f')
		{
			attackMonster(monster);
			if (monster.isDead())
			{
				std::cout << "You killed the " << monster.getName() << ".\n";
				levelUp();
				std::cout << "You found " << monster.getGold() << " gold.\n";
				addGold(monster.getGold());
				break;
			}
			else
			{
				monster.attackPlayer(*this);
				if (this->isDead())
				{
					std::cout << "You have been slain by " << monster.getName() << ".\n";
					break;
				}
			}
		}
		else if (choice == 'r')
		{
			if (runFromMonster(monster))
			{
				break;
			}
			else
			{
				monster.attackPlayer(*this);
				if (this->isDead())
				{
					std::cout << "You have been slain by " << monster.getName() << ".\n";
					break;
				}
			}

		}
			
	}
	
}

void Player::attackMonster(Monster & monster)
{
	std::cout << "You hit the " << monster.getName() << " for " << getDpa() << " damage.\n";
	monster.reduceHealth(getDpa());
	std::cout << monster.getName() << " now has " << monster.getHealth() << " HP left!\n";
}

bool Player::runFromMonster(Monster & monster)
{
	int rdm = Monster::getRandomNumber(0, 1);
	if (rdm)
	{
		std::cout << "You successfully fled.\n";
		return true;
	}
	else
	{
		std::cout << "You failed to flee.\n";
		return false;
	}
}


