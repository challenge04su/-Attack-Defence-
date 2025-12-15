#pragma once
#include "Monster.h"
#include <string>

using namespace std;

class Gobline : public Monster
{
public :
	Gobline(string monsterName);
	virtual void attack(Player* player) override;
};
