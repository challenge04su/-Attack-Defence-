#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player
{
public : 
	Player(string player)

		virtual void attack(Monster* monster) = 0;

};