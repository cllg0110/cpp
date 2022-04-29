#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<fstream>
#include<conio.h>
#include<windows.h>

using namespace std;

void cargando()
{
	int segundos=3;
    for(int i=0; i<=0; i++)
   	cout << "INICIANDO...";
   
    for(int i=0; i<=1; i++)
        cout << char(220);
    for(int i=0; i<=150; i++)
    {
        cout << char(220);
        Sleep(segundos*500/100);
    }
    cout << "JUEGO COMPLETADO!" << endl;
    cout << endl;
}


void carga()
{
	int segundo=2;       
    for(int i=0; i<=100; i++)
    {
        cout << "__";
        Sleep(segundo*500/100);
    }
    cout << endl;
    
}


void gotoxy(short x, short y);
void ShowBar();
void LoadBar();


void ShowBar(){
	int x,m=4;
	char h=201;
	char j=186;
	char k=200;
	char l=205;
	char v=187;
	char b=188;
	system("cls");
	gotoxy (3,9);cout<<h;
	gotoxy (3,10);cout<<j;
	gotoxy (3,11);cout<<k;
	for(x=0;x<72;x++){
		gotoxy (m,9);cout<<l;
		gotoxy (m,11);cout<<l;
		m++;
	}
	gotoxy (m,9);cout<<v;
	gotoxy (m,10);cout<<j;
	gotoxy (m,11);cout<<j;
	gotoxy (m,11);cout<<b;
	/////////////////////////////////////////////////////////////////
	gotoxy (29,4);cout<<h;
	gotoxy (29,5);cout<<j;
	gotoxy (29,6);cout<<k;
	m=30;
	for(x=0;x<15;x++){
		gotoxy (m,4);cout<<l;
		gotoxy (m,6);cout<<l;
		m++;
	}
	gotoxy (45,4);cout<<v;
	gotoxy (45,5);cout<<j;
	gotoxy (45,6);cout<<b;
	LoadBar();
}
////////////////////////////////////////////
void LoadBar(){
	int i, n=4,j,m;
	char z=178;
	double porcentaje={1.45};
	float sum=0;
	srand (time (NULL));
	m=rand()%2;

        system("color D5");
 
	gotoxy (28,2);
	cout << " _________________";
	gotoxy (28,3);
	cout << "[CLLG 20152005774]";
	gotoxy (30,5);
    cout<<"CARGANDO...";
	gotoxy (45,5);
	cout << "|-[ JUEGO DE TRIVIAS ]";
	Sleep(200);

	for(i=15;i<=84;i++){ 
		n++;
		gotoxy (n,10); cout<<z;
		Sleep(20);
		gotoxy (38,5);cout<<".     "; 
		Sleep(25);
		gotoxy (38,5);cout<<"..";
		Sleep(25);
		gotoxy (38,5);cout<<"...";
		Sleep(25);
		gotoxy (38,5);cout<<"....";
		Sleep(25);
		gotoxy (38,5);cout<<".....";
		gotoxy (35,10);cout<<sum<<"%";
		if(i==40){
			if(m==0){
				for(j=0;j<=10;j++){
					Sleep(20);
					gotoxy (38,5);cout<<".     "; 
					Sleep(25);
					gotoxy (38,5);cout<<"..";
					Sleep(25);
					gotoxy (38,5);cout<<"...";
					Sleep(25);
					gotoxy (38,5);cout<<"....";
					Sleep(25);
					gotoxy (38,5);cout<<".....";
				}
			}
		}
		sum+=porcentaje;
	}
	gotoxy (35,10);cout<<"100.00"<<"%";
}

void gotoxy(short x, short y) {
	HANDLE hConsoleOutput;
	COORD Cursor_Pos = {x, y};

	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
}

