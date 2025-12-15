#pragma once
#include <iostream>
#include <string>

using namespace std;

class Monster;

class Player
{
public :
	Player(string playerName);

	void attack(Monster* monster);

	void printStatus();

	string getplayerName();
	int getHP();
	int getpower();
	int getlevel();

	void setplayerName(string playerName);
	bool setHP(int HP);
	void setpower(int power);
	void setlevel(int level);

protected :
	string playerName;
	int HP;
	int power;
	int level;
};