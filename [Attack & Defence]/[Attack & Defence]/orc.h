#pragma once
#include "Monster.h"
#include <string>

using namespace std;

class Orc : public Monster
{
public:
	Orc(string monsterName);
	virtual void attack(Player* player) override;
};
