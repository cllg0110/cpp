#include <iostream>


using namespace std;

int numeroSecreto = 7;

void adivinaNumeroSecreto(int miNumero)
{
    if (miNumero == numeroSecreto)
    {
        cout << "Adivinaste!" << endl;
        
    } 
    else
    {
        cout << "Intento fallido con " << miNumero << endl;

        int otroNumero = 0;
        cout << "Ingrese otro numero: ";
        cin >> otroNumero;
        adivinaNumeroSecreto(otroNumero);
        

    }
    
    
}

int main(int argc, char const *argv[])
{
    adivinaNumeroSecreto(5);

    system("pause");
    return 0;
}