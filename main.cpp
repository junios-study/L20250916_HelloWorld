#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;


int main()
{
	int PlayerInput = 2;

	//1. ����
	//2. �ָ�
	//3. ���ڱ�
	cin >> PlayerInput;

	srand(time(nullptr));

	int EnemyInput = rand() % 3 + 1;

	if (PlayerInput == EnemyInput)
	{
		cout << "���º�" << endl;
	}
	else if (PlayerInput == 1) //����
	{
		if (EnemyInput == 3) //���ڱ�
		{
			cout << "�¸�" << endl;
		}
		else if (EnemyInput == 2)
		{
			cout << "�й�" << endl;
		}
	}
	else if (PlayerInput == 2) //�ָ�
	{
		if (EnemyInput == 1) //����
		{
			cout << "�¸�" << endl;
		}
		else if (EnemyInput == 3) //���ڱ�
		{
			cout << "�й�" << endl;
		}
	}
	else if (PlayerInput == 3) //���ڱ�
	{
		if (EnemyInput == 2) //�ָ�
		{
			cout << "�¸�" << endl;
		}
		else if (EnemyInput == 1) //����
		{
			cout << "�й�" << endl;
		}
	}
	
}

