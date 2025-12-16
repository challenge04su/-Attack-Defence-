#include "Orc.h"
#include "Player.h"
#include <iostream>

using namespace std;

Orc::Orc(string monsterName) : Monster("Orc")
{
	HP = 10;
	power = 5;
	reward = 5;

	cout << "-----------------------------------------------------" << endl;
	cout << "<3>" << endl;
	cout << "Orc가 [Attack&Defence]에 나타났습니다." << endl;
}

void Orc::attack(Player* player)
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