#include <iostream>
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

	return 0;
}
