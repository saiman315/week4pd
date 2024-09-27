#include <iostream>
#include <windows.h>
void gotoxy(int x,int y);
void  maze();
void moveplayer(int ,int);

using namespace std;
int main()
{
int x=4, y=4;
system("cls");
 maze();

while(true)
{
moveplayer(x,y);
 x=x+1;
if (x==21)
{
    x=4;
   }
  }
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
Sleep(500);
cout<<" ";

}

void gotoxy(int x, int y)
{
COORD coordinates;
    coordinates.X = x; 
    coordinates.Y = y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates); 

}