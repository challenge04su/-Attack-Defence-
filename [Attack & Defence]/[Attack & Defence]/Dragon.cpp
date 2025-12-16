#include "Dragon.h"
#include "Player.h"
#include <iostream>

using namespace std;

Dragon::Dragon(string monsterName) : Monster("Dragon")
{
	HP = 20;
	power = 10;
	reward = 1;

	cout << "-----------------------------------------------------" << endl;
	cout << "<4>" << endl;
	cout << "Dragon이 [Attack&Defence]에 나타났습니다." << endl;
}

void Dragon::attack(Player* player)
{
	cout << endl;
	
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