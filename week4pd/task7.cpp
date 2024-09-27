#include<iostream>
#include<windows.h>
void printmaize();
void gotoxy(int,int); 
void moveplayer(int,int);

using namespace std;
 main()
{
int x=3 ,y=1;
system("cls"); 
printmaize();
while (true)
{
moveplayer(x,y);
y=y+1;
if(y==8)
{
  y=1;
}
}



}

void printmaize()
{
      cout<<"##############################"<<endl;
    cout<<"#                               #"<<endl;
    cout<<"#                               #"<<endl;
    cout<<"#                               #"<<endl;
    cout<<"#                               #"<<endl;
    cout<<"#                               #"<<endl;
    cout<<"#                               #"<<endl;
    cout<<"#                               #"<<endl;
     cout<<" ############################ "<<endl;  
}
void moveplayer(int x, int y)
{
gotoxy(x,y);
cout<<" P ";
Sleep(500);
gotoxy(x,y);
cout<<"   ";



}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);


}