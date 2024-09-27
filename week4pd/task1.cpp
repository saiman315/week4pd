#include <iostream>
#include <windows.h>

using namespace std;


void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x; 
    coordinates.Y = y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates); 
}

int main() {
    system("cls"); 
    cout << "test" << endl; 
    gotoxy(15, 5); 
    cout << "My name is Saiman" << endl; 
    return 0;
}
