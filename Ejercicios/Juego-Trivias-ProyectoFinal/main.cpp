#include<cstdio>
#include<ctime>
#include<cstring>
#include<fstream>
#include<conio.h>
#include<windows.h>
//*********************
#include "animacion.h"
#include "cuestionario.h"
//*********************************

using namespace std;


int main(int argc, char const *argv[])
{
    ShowBar(); 
    system("cls");
   
//***********************************
   
int opcion = 0;

    while (true){
    system("COLOR B0");
    system("cls");
    cout << "**************************" << endl;
    cout << " MENU  DEL JUEGO" << endl;
    cout << "**************************" << endl;


    cout << endl;
    cout << "1 - Un jugador" << endl;
    cout << "2 - Dos jugadores" << endl;
    cout << "0 - Salir del juego" << endl;
    cout << endl;
    cout << "SELECCIONE UNA OPCION PARA JUGAR: ";
    cin >> opcion;
    cout << endl; 

    
    if (opcion == 0)
    {
        break;
    }
    
    switch (opcion)
    {
    case 1:
    {

    char juego;
    

   cout<<"PRESIONAR ENTER PARA INICIAR"<<endl;
    getch(); 
    cargando(); 
    system("cls");
   
    do
    {	
    system("COLOR B0");
	string nombre;

	cout << endl;
	
	cout << endl;
    
    cout << "Ingresar nombre  para comenzar: ";
    cin >> nombre;
    cout << endl;
     cout<<"PRESIONAR ENTER PARA COMENZAR"<<endl;
     system("cls");
	    
        cout << endl;
        cout << "JUGADOR: " << nombre << endl;

        cout << "-----------------------------------------------" << endl;
        cout << "RESPONDER A LAS PREGUNTAS!";
        cout << endl;
        
	    cuestionario();
        cout << endl;

        cout << "[ " << nombre << " ]" << endl;

    cout << "--------------------------------------------------";
    cout << endl << "GRACIAS POR JUGAR!" << endl;
    cout << "--------------------------------------------------";
    cout << endl;

    cout<<"Presiona (S) para jugar de nuevo: " << endl;
    cout<<"Presiona (N) para salir: ";
    cin>>juego;
    if (juego =='n' || juego =='N')
    {
        break;
    }
            
	}while(juego == 's' || juego == 'S');

        break;
    }
    case 2:
    {

    int numDeJugadores = 0;
    int contador = 1;

    cout<<"PRESIONAR ENTER PARA COMENZAR"<<endl;
    getch(); 
    cargando();
    system("cls");

    cout << endl;
    cout << endl;
    cout << "Ingresar cantidad de jugadores: ";
    cin >> numDeJugadores;
    cout << endl;
    

   
    do
    {
    	
    system("COLOR 70");
	string nombre;

	cout << endl;
	cout << "____________________________________________________";
	cout << endl;
    cout << "Ingresar nombre del jugador " << contador << ":";
    cin >> nombre;
    cout << endl;
    system("cls");

        cout << "JUGADOR: " << nombre << endl;        

        cout << "-----------------------------------------------" << endl;
        cout << "RESPONDER A LAS PREGUNTA!";
        cout << endl;
        
	    cuestionario();
        cout << endl;
        
    contador = contador + 1;

    cout << "PARTICIPANTE: " << nombre << endl;

    cout << "--------------------------------------------------";
    cout << endl << "GRACIAS POR JUGAR!" << endl;
    cout << "--------------------------------------------------";
    cout << endl;
    system("pause");   
	system("cls");    

	}while(contador == numDeJugadores);

    cout << endl;
    cout << "__________________________________________________";
    cout << endl << "FIN DEL JUEGO!" << endl;
    cout << "--------------------------------------------------";
    cout << endl;
    system("pause");   
	system("cls"); 


        break;
    }  

    default:{
            cout << endl;
            cout << "Ingresar una de las opciones validas entre 1 y 2.";
            system("pause");
            break;
             }
    
    }
}
cout << endl;
cout << "Finalizaste el  juego." << endl;  
cout << endl;
cout << "**********************";
cout << endl; 
    
    
    
    system("pause");
    return 0;
}

