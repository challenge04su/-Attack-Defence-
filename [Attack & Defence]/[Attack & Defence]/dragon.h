#pragma once
#include "Monster.h"
#include <string>

using namespace std;

class Dragon : public Monster
{
public:
	Dragon(string monsterName);
	virtual void attack(Player* player) override;
};