#include <iostream>
#include "Monster.h"
#include "Player.h"

using namespace std;

Monster::Monster(string monsterName) : monsterName(monsterName), HP(0), power(0), reward(0) {}

string Monster::getmonsterName() { return monsterName; }
int Monster::getHP() { return HP; }
int Monster::getpower() { return power; }
int Monster::getreward() { return reward; }

void Monster::setmonsterName(string maonsterName)
{
	this->monsterName = monsterName;
}
bool Monster::setHP(int HP)
{
	if (HP > 0)
	{
		this->HP = HP;
		return true;
	}
	else
	{
		this->HP = 0;
		return false;
	}
}
void Monster::setpower(int power)
{
	this->power = power;
}
void Monster::setreward(int reward)
{
	this->reward = reward;
}

