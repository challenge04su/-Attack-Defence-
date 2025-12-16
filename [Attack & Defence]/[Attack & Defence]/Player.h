#pragma once
#include <iostream>
#include <string>

using namespace std;

class Monster;

class Player
{
public :
	Player(const string& playerName);

	void attack(Monster* monster);

	void printStatus();

	const string& getplayerName() const;
	int getHP();
	int getpower();
	int getlevel();

	void setplayerName(const string& playerName);
	bool setHP(int HP);
	void setpower(int power);
	void setlevel(int level);

protected :
	string playerName;
	int HP;
	int power;
	int level;
};