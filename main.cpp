#include <iostream>

using namespace std;

int main()
{
	//int, ��� ������.
	int PlayerHP = 100;
	int MonsterAttack = 10;
	int PlayerDefence = 10;

	int Damage = MonsterAttack - PlayerDefence;

	PlayerHP = PlayerHP - Damage;


	cout << PlayerHP; //�ִϸ��̼� 

	return 0;
}