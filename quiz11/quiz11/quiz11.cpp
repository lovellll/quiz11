// quiz11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Creature.h"
#include "Player.h"
#include "Monster.h"

int main()
{
	/*
	std::cout << "Enter your name: ";
	std::string name;
	std::cin >> name;
	static Player player(name);
	std::cout << "Welcome, " << player.getName() << ".\n";
	std::cout << "You have " << player.getHealth() << " health and are carrying " << player.getGold() << " gold.\n";
	*/

	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // get rid of first result

	for (int i = 0; i < 10; ++i)
	{
		Monster m = Monster::getRandomMonster();
		std::cout << "A " << m.getName() << " (" << m.getSymbol() << ") was created.\n";
	}
}