#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<fstream>
#include<conio.h>
#include<windows.h>
//**************************
#include "LectorArchivoTxt.h"
//**************************

using namespace std;

void borrar(int a, int b)
{
    fflush(stdin);
    for(int i=a; i<=b; i++)
    {
    
    }
    fflush(stdin);
}

bool comprobarLetra(char letra)
{
	if(letra=='a' || letra=='b'	|| letra=='c'  || letra=='A' || letra=='B'	|| letra=='C' )
	{
		return true;
	}
	else
	{
		return false;
	}
}



int cuestionario()
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, puntajeMaximo = 0;
        char p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;

    
        cout << endl;
        cout << "POR 5 PUNTOS" << endl;
        leerp1();
        leerres1();

        cout << "Indicar la  respuesta: ";
        cin >> p1;
        if (p1 == 'c' || p1 == 'C')
        {n1 = 5;} else{n1 = 0;}
        if (p1 !=' ')        
        while(!comprobarLetra(p1))
		        {        	
	
                    cout << endl;
			        cout<<"OPCION INCORRECTA"<<endl<<endl<<" R E S P U E S T A  :   ";
			        cin>>p1;
			        cin.get();
		        }
        carga();

    //---------------------------------------------------------
        cout << endl;
        cout << "POR 15 PUNTOS" << endl;
        leerp2();
        leerres2();
        cout << "Indicar la respuesta: ";
        cin >> p2;
        if (p2 == 'b' || p2 == 'B')
        {n2 = 15;} else{n2 = 0;}
        while(!comprobarLetra(p2))
		        {        	
                    cout << endl;
			        cout<<"OPCION INCORRECTA"<<endl<<endl<<" R E S P U E S T A  :   ";
			        cin>>p2;
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 20 PUNTOS" << endl;
        leerp3();
        leerres3();
        cout << "Indicar la respuesta: ";
        cin >> p3;
        if (p3 == 'c' || p3 == 'C')
        {n3 = 20;} else{n3 = 0;}
        while(!comprobarLetra(p3))
		        {        	
                    cout << endl;
			        cout<<"OPCION INCORRECTA"<<endl<<endl<<" R E S P U E S T A  :   ";
			        cin>>p3;
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 25 PUNTOS" << endl;
        leerp4();
        leerres4();
        cout << "Indicar la respuesta: ";
        cin >> p4;
        if (p4 == 'b' || p4 == 'B')
        {n4 = 25;} else{n4 = 0;}
        while(!comprobarLetra(p4))
		        {        	
		        	
                    cout << endl;
			        cout<<"OPCION INCORRECTA"<<endl<<endl<<" R E S P U E S T A  :   ";
			        cin>>p4;
			        cin.get();
		        }
        carga();
    
        cout << endl;
        cout << "POR 30 PUNTOS" << endl;
        leerp5();
        leerres5();
        cout << "Indicar la respuesta: ";
        cin >> p5;
        if (p5 == 'a' || p5 == 'A')
        {n5 = 30;} else{n5 = 0;}
        while(!comprobarLetra(p5))
		        {        	
                    cout << endl;
			        cout<<"OPCION INCORRECTA"<<endl<<endl<<" R E S P U E S T A  :   ";
			        cin>>p5;
			        cin.get();
		        }
        carga();
    //---------------------------------------------------------
        cout << endl;
        cout << "POR 35 PUNTOS" << endl;
        leerp6();
        leerres6();
        cout << "Indicar la respuesta: ";
        cin >> p6;
        if (p6 == 'a' || p6 == 'A')
        {n6 = 35;} else{n6 = 0;}
        while(!comprobarLetra(p6))
		        {        	    
                    cout << endl;
			        cout<<"OPCION INCORRECTA"<<endl<<endl<<" R E S P U E S T A  :   ";
			        cin>>p6;
			        cin.get();
		        }
        carga();
    
        cout << endl;
        cout << "POR 40 PUNTOS" << endl;
        leerp7();
        leerres7();
        cout << "Indicar la  respuesta: ";
        cin >> p7;
        if (p7 == 'a' || p7 == 'A')
        {n7 = 40;} else{n7 = 0;}
        while(!comprobarLetra(p7))
		        {        	
		        	
                    cout << endl;
			        cout<<"OPCION INCORRECTA"<<endl<<endl<<" R E S P U E S T A  :   ";
			        cin>>p7;
			        cin.get();
		        }
        carga();
    
        cout << endl;
        cout << "POR 45 PUNTOS" << endl;
        leerp8();
        leerres8();
        cout << "Indicar la respuesta: ";
        cin >> p8;
        if (p8 == 'a' || p8 == 'A')
        {n8 = 45;} else{n8 = 0;}
        while(!comprobarLetra(p8))
		        {        	
                    cout << endl;
			        cout<<"OPCION INCORRECTA"<<endl<<endl<<" R E S P U E S T A  :   ";
			        cin>>p8;
			        cin.get();
		        }
        carga();
    
        cout << endl;
        cout << "POR 50 PUNTOS" << endl;
        leerp9();
        leerres9();
        cout << "Indicar la respuesta: ";
        cin >> p9;
        if (p9 == 'c' || p9 == 'C')
        {n9 = 50;} else{n9 = 0;}
        while(!comprobarLetra(p9))
		        {        	
		        	
                    cout << endl;
			        cout<<"OPCION INCORRECTA"<<endl<<endl<<"R E S P U E S T A  :   ";
			        cin>>p9;
			        cin.get();
		        }
        carga();
    
        cout << endl;
        cout << "POR 55 PUNTOS" << endl;
        leerp10();
        leerres10();
        cout << "Indicar la respuesta: ";
        cin >> p10;
        if (p10 == 'a' || p10 == 'A')
        {n10 = 55;} else{n10 = 0;}
        while(!comprobarLetra(p10))
		        {        	
		        	
                    cout << endl;
			        cout<<"OPCION INCORRECTA"<<endl<<endl<<"R E S P U E S T A  :   ";
			        cin>>p10;
			        cin.get();
		        }
     
        carga();
    
        system("COLOR 7");
        system("cls");
        puntajeMaximo = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
        cout << endl;
        cout << "Tu puntaje es: " << puntajeMaximo << endl;
    
}

