#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void text(int color)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{

    gotoxy(10, 10);
    textcolor(1);
    cout << "ssssssssss" << endl;
    return 0;
}