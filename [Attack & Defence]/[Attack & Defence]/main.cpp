# include <iostream>
#include <string>
#include "Player.h"
#include "Monster.h"
#include "Gobline.h"
#include "Orc.h"
#include "Dragon.h"

using namespace std;

void printMenu()
{
	cout << "[ 선택창 ]" << endl;
	cout << "1. 나의 스탯창 보기" << endl;
	cout << "2. Gobline과 대결하러가기" << endl;
	cout << "   공격력 : 1 | HP : 5      * 대결에서 우승 시 HP +5!" << endl;
	cout << "3. Orc와 대결하러가기" << endl;
	cout << "   공격력 : 5 | HP : 10     * 대결에서 우승 시 공격력 +5!" << endl;
	cout << "4. Dragon과 대결하러가기" << endl;
	cout << "   공격력 : 10 | HP : 20    * 대결에서 우승 시 Level UP!" << endl;
	cout << "5. [Attack&Defence] 종료하기" << endl;
	cout << "* 몬스터와 대결 시 몬스터가 먼저 공격합니다." << endl;
}
void fight(Player* player, Monster* monster)
{
	while (player->getHP() > 0 && monster->getHP() > 0)
	{
		monster->attack(player);
		if (player->getHP() < 1)
		{
			break;
		}
		player->attack(monster);
		if (monster->getHP() < 1)
		{
			if (monster->getmonsterName() == "Gobline")
			{
				player->setHP(player->getHP() + monster->getreward());
				cout << player->getplayerName() << "님의 HP가 " << monster->getreward() << "만큼 증가했습니다." << endl;
				cout << "[ Level : " << player->getlevel() << " | 공격력 : " << player->getpower() << " | HP : " << player->getHP() << " ]" << endl;
				cout << "-----------------------------------------------------" << endl;
				cout << endl;
			}
			else if (monster->getmonsterName() == "Orc")
			{
				player->setpower(player->getpower() + monster->getreward());
				cout << player->getplayerName() << "님의 공격력이 " << monster->getreward() << "만큼 증가했습니다." << endl;
				cout << "[ Level : " << player->getlevel() << " | 공격력 : " << player->getpower() << " | HP : " << player->getHP() << " ]" << endl;
				cout << "-----------------------------------------------------" << endl;
				cout << endl;
			}
			else
			{
				player->setlevel(player->getlevel() + monster->getreward());
				cout << player->getplayerName() << "님의 Level이 " << monster->getreward() << "만큼 증가했습니다." << endl;
				cout << "[ Level : " << player->getlevel() << " | 공격력 : " << player->getpower() << " | HP : " << player->getHP() << " ]" << endl;
				cout << "-----------------------------------------------------" << endl;
				cout << endl;
			}
			break;
		}
		
	}
}

int main()
{
	string playerName;
	string monsterName;
	int menuChoice =0;

	cout << "플레이어 이름을 입력하세요. : ";
	getline(cin, playerName);

	cout << "안녕하세요 " << playerName << "님! 이곳은 [Attack&Defence]입니다!" << endl;
	cout << endl;

	Player* player = new Player(playerName);
	Monster* monster = nullptr;

	bool winGame = true;
	while (winGame)
	{
		printMenu();
		cout << endl;
		cout << "선택할 번호를 적어주세요. : ";
		cin >> menuChoice;
		cout << endl;

		switch (menuChoice)
		{
		case 1 :
			player->printStatus();
			cout << endl;
			break;
		case 2 :
			monster = new Gobline(monsterName);
			fight(player, monster);

			if (player->getHP() < 1)
			{
				winGame = false;
			}
			break;
		case 3 :
			monster = new Orc(monsterName);
			fight(player, monster);

			if (player->getHP() < 1)
			{
				winGame = false;
			}
			break;
		case 4:
			monster = new Dragon(monsterName);
			fight(player, monster);

			if (player->getHP() < 1)
			{
				winGame = false;
			}
			break;
		case 5 :
			cout << "[Attack&Defence]를 종료합니다." << endl;
			winGame = false;
			break;
		default:
			cout << "잘못된 입력입니다." << endl;
		}
	}
	
	delete player;
	delete monster;
	return 0;
}