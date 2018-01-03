// quiz11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Creature.h"
#include "Player.h"
#include "Monster.h"

void result(bool isWon, Player &player)
{
	if (isWon)
	{
		std::cout << "You won with " << player.getGold() << " gold!\n";
	}
	else
	{
		std::cout << "Game Over!\n";
		std::cout << "You reached level " << player.getLevel() << "and had " << player.getGold() << " gold.\n";
	}
}


int main()
{
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // get rid of first result
	
	std::cout << "Enter your name: ";
	std::string name;
	std::cin >> name;
	static Player player(name);
	std::cout << "Welcome, " << player.getName() << ".\n";
	std::cout << "You have " << player.getHealth() << " health and are carrying " << player.getGold() << " gold.\n";

	while(true)
	{
		player.encounterMonster(Monster::getRandomMonster());
		if (player.getLevel() >= 20)
		{
			result(true, player);
			break;
		}
		if (player.isDead())
		{
			result(false, player);
			break;
		}
	}

}