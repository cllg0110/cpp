#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

int main(int argc, char const *argv[])
{
    
    int sumarMatriz[5][5];
    int numeroRandom = 0;

    int totalSuma = 0;


    srand(time(NULL));
    
    cout << endl;
    cout << "-----------------------------";
    cout << endl;
    
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++)
        {
            numeroRandom = rand() % 1000 + 1;
            sumarMatriz[i][j] = numeroRandom;
            numeroRandom = 0;
            cout << " " << "|"<<sumarMatriz[i][j]<<"|" << " ";
        }
        cout << endl;
    }
    cout << "-----------------------------";
    cout << endl;


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            totalSuma += sumarMatriz[i][j];
        }
        
    }
    cout << endl;
    cout << "La Suma de los Elementos de la Matriz es: " << totalSuma << endl;
    cout << endl;

    return 0;
}