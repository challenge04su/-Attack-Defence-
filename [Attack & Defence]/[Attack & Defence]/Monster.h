#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player;

class Monster
{
public :
	Monster(string monsterName);

	virtual void attack(Player* player) = 0;

	string getmonsterName();
	int getHP();
	int getpower();
	int getreward();

	void setmonsterName(string monsterName);
	bool setHP(int HP);
	void setpower(int power);
	void setreward(int reward);

protected :
	string monsterName;
	int HP;
	int power;
	int reward;
};