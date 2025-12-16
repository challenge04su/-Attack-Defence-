#include "Gobline.h"
#include "Player.h"
#include <iostream>

using namespace std;

Gobline::Gobline(string monsterName) : Monster("Gobline")
{
	//monsterName = "Gobline";
	HP = 5;
	power = 1;
	reward = 5;
}

void Gobline::attack(Player* player)
{
	cout << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "<2>" << endl;
	cout << monsterName << "이 [Attack&Defence]에 나타났습니다." << endl;
	cout << monsterName << "이 " << power << "만큼 공격합니다." << endl;

	bool isAlive = player->setHP(player->getHP() - power);

	if (isAlive)
	{
		cout << player->getplayerName() << "님의 HP가 " << power << "감소합니다. ";
		cout << "| 현재 " << player->getplayerName() << "님 HP : " << player->getHP() << endl;
	}
	else
	{
		cout << player->getplayerName() << "님의 남은 HP : " << player->getHP() << endl;
		cout << player->getplayerName() << "님의 패배입니다. " << endl;
	}
}