#include <iostream>
#include <windows.h>
void gotoxy(int x,int y);
void  maze();
void moveplayer(int ,int);

using namespace std;
int main()
{
int x=4, y=5;
system("cls");
 maze();
moveplayer(x,y);
}

void maze()
{
        cout<<"#####################" <<endl;
      cout<<"#                      #"<<endl;;
      cout<<"#                      #"<<endl;;
      cout<<"#                      #"<<endl;;
      cout<<"#                      #"<<endl;;
      cout<<"#                      #"<<endl;;
      cout<<"#                      #"<<endl;;
      cout<<"#                      #"<<endl;;
       cout<<" #####################"<<endl;;
} 
void moveplayer(int x,int y)
{
gotoxy(x,y);
cout<<"P";
Sleep(400);
cout<<" ";
}

void gotoxy(int x, int y)
{
COORD coordinates;
    coordinates.X = x; 
    coordinates.Y = y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates); 

}