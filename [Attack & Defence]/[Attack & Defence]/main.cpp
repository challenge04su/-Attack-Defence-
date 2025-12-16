# include <iostream>
#include <string>
#include "Player.h"
#include "Monster.h"
#include "Gobline.h"

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

	Player* player = new Player(playerName);
	Monster* monster = nullptr;

	cout << "플레이어 이름을 입력하세요. : ";
	cin >> playerName;

	cout << "안녕하세요 " << playerName << "님! 이곳은 [Attack&Defence]입니다!" << endl;
	cout << endl;

	while (menuChoice != 5)
	{
		printMenu();
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
			monsterName = "Gobline";
			//playerName = player->getplayerName();
			monster = new Gobline(monsterName);
			fight(player, monster);
			break;
		case 3 :
			cout << "3" << endl;
			break;
		case 4:
			cout << "4" << endl;
			break;
		case 5 :
			cout << "[Attack&Defence]를 종료합니다." << endl;
			break;
		default:
			cout << "잘못된 입력입니다." << endl;
		}
	}
	
	delete player;
	delete monster;
	return 0;
}