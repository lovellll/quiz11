// quiz11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Creature.h"
#include "Player.h"

int main()
{
	std::cout << "Enter your name: ";
	std::string name;
	std::cin >> name;
	static Player player(name);
	std::cout << "Welcome, " << player.getName() << ".\n";
	std::cout << "You have " << player.getHealth() << " health and are carrying " << player.getGold() << " gold.\n";

	return 0;
}