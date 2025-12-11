# include <iostream>
#include <string>

using namespace std;

void printChoice()
{
	cout << "아래의 [ 선택창 ]에서 원하는 번호를 입력해주세요!" << endl;
	cout << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "[ 선택창 ]" << endl;
	cout << "1. 나의 상태창 보기" << endl;
	cout << "2. Gobline과 대결하러가기!" << endl;
	cout << "   공격력 : " << endl;  //<-몬스터 관련 변수 들어가야함.
	cout << "3. Orc와 대결하러가기!" << endl;
	cout << "   공격력 : " << endl;
	cout << "4. Dragon과 대결하러가기!" << endl;
	cout << "   공격력 : " << endl;
	cout << "5. [ Attack & Defence ] 종료하기" << endl;
	cout << "* 몬스터와 대결 시 몬스터가 먼저 공격합니다." << endl;
	cout << "-------------------------------------------------------" << endl;

	cout << "선택할 번호를 입력해주세요. : ";
}

int main()
{
	//string monster_kind = { "Gobline", "Orc", "Dragon" };
	int viewChoice = 0;
	string player;

	cout << "플레이어 이름을 입력하세요. : ";
	getline(cin, player);
	cout << endl;

	cout << "안녕하세요 " << player << "님! 이곳은 [ Attack & Defence ] 입니다!" << endl;
	cout << endl;
	while(viewChoice != 5)
	{ 
		printChoice();

		cin >> viewChoice;

		switch (viewChoice)
		{
			case 1 :
				cout << "1" << endl;
				break;
			case 2 :
				cout << "2" << endl;
				break;
			case 3:
				cout << "3" << endl;
				break;
			case 4:
				cout << "4" << endl;
				break;
			case 5 :
				cout << "게임 종료" << endl;
				break;
			default :
				cout << "해당 번호는 [ 선택창 ]에 없습니다." << endl;
		}

	}
}