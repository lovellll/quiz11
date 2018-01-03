#pragma once
#include "Creature.h"

class Monster :public Creature
{
	enum Type
	{
		DRAGON,
		ORC,
		SLIME,
		MAX_TYPES,
	};
};