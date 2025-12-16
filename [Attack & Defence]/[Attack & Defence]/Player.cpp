#include <iostream>
#include "Monster.h"
#include "Player.h"

using namespace std;

Player::Player(const string& playerName) : playerName(playerName), HP(10), power(5), level(1) {}

const string& Player::getplayerName() const { return playerName; }
int Player::getHP() { return HP; }
int Player::getpower() { return power; }
int Player::getlevel() { return level; }

void Player::setplayerName(const string& playerName)
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
	cout << "-----------------------------------------------------" << endl;
	cout << "<1>" << endl;
	cout << "현재 Level : " << level << " | " << "현재 HP : " << HP << " | " << "현재 공격력 : " << power << endl;
	cout << "-----------------------------------------------------" << endl;
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
