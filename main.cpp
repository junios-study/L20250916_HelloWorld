#include <iostream>

using namespace std;

int main()
{
	//int, 산술 연산자.
	int PlayerHP = 100;
	int MonsterAttack = 10;
	int PlayerDefence = 10;

	int Damage = MonsterAttack - PlayerDefence;

	PlayerHP = PlayerHP - Damage;


	cout << PlayerHP; //애니메이션 

	return 0;
}