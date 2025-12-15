#include <iostream>
#include "Monster.h"
#include "Player.h"

using namespace std;

Player::Player(string playerName) : playerName(playerName), HP(10), power(5), level(1) {}

string Player::getplayerName() { return playerName; }
int Player::getHP() { return HP; }
int Player::getpower() { return power; }
int Player::getlevel() { return level; }

void Player::setplayerName(string playerName)
{
	this->playerName = playerName;
}
bool Player::setHP(int HP)
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
void Player::setpower(int power)
{
	this->power = power;
}
void Player::setlevel(int level)
{
	this->level = level;
}

void Player :: printStatus()
{
	cout << "현재 Level : " << level << " | " << "현재 HP : " << HP << " | " << "현재 공격력 : " << power << endl;
}

void Player::attack(Monster* monster)
{
	cout << playerName << "님이 " << power << "만큼 공격합니다." << endl;

	bool isAlive = monster->setHP(monster->getHP() - power);

	if (isAlive)
	{
		cout << monster->getmonsterName() << " HP가 " << power << "만큼 감소합니다.";
		cout << "| 현재 " << monster->getmonsterName() << " HP : " << monster->getHP() << endl;
	}
	else
	{
		cout << monster->getmonsterName() << " 남은 HP : " << monster->getHP() << endl;
		cout << playerName << "님의 승리입니다. " << endl;
	}
	
	
}
