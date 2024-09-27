#include<iostream>
#include<windows.h>
void gotoxy(int,int);

using namespace std;
int main()
{
system("cls"); 
gotoxy(50,14); 

cout<<"SAIMAN";

}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

}