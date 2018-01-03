// quiz11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Creature.h"


int main()
{
	Creature o("orc", 'o', 4, 2, 10);
	o.addGold(5);
	o.reduceHealth(1);
	std::cout << "The " << o.getName() << " has " << o.getHealth() << " health and is carrying " << o.getGold() << " gold.\n.";

	return 0;
}