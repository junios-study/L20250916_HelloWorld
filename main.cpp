#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;


int main()
{
	int PlayerInput = 2;

	//1. 가위
	//2. 주먹
	//3. 보자기
	cin >> PlayerInput;

	srand(time(nullptr));

	int EnemyInput = rand() % 3 + 1;

	if (PlayerInput == EnemyInput)
	{
		cout << "무승부" << endl;
	}
	else if (PlayerInput == 1) //가위
	{
		if (EnemyInput == 3) //보자기
		{
			cout << "승리" << endl;
		}
		else if (EnemyInput == 2)
		{
			cout << "패배" << endl;
		}
	}
	else if (PlayerInput == 2) //주먹
	{
		if (EnemyInput == 1) //가위
		{
			cout << "승리" << endl;
		}
		else if (EnemyInput == 3) //보자기
		{
			cout << "패배" << endl;
		}
	}
	else if (PlayerInput == 3) //보자기
	{
		if (EnemyInput == 2) //주먹
		{
			cout << "승리" << endl;
		}
		else if (EnemyInput == 1) //가위
		{
			cout << "패배" << endl;
		}
	}
	
}

