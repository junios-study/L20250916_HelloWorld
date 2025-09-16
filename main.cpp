#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	int PlayerX = 0;
	int PlayerY = 0;

	PlayerX++;
	PlayerY++;

	//¿£Áø
	COORD Cur;
	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	cout << "P" << endl;
	_getch();
	system("cls");

	PlayerX++;

	//COORD Cur;
	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	cout << "P" << endl;
	_getch();
	system("cls");

	PlayerY++;

	//COORD Cur;
	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	cout << "P" << endl;
	_getch();
	system("cls");



	return 0;
}
