#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;

void lanzamiento (int cantidad)
{
  
  if (cantidad == 1)
    {
      cout << "Presionar \" la tecla ENTER\" para lanzar el dado  1";
    }
  else
    {
      cout << "Presionar \"la tecla ENTER\" para lanzar el dado 2";
    
    }
 cin.ignore();
}


int tirarDado ()
{
  int numero;
  srand (time (0));
  numero = rand () % 6 + 1;
  cout << "Has obtenido un " << numero << endl;
  return numero;
}


int dado (int pDado, int sDado)
{
  cout << "Ha recorrido a la  " << pDado + sDado << " casilla" << endl;
  cout << endl;
  return pDado + sDado;
}


int main(int argc, char const *argv[])
{
int total, primerDado, segundoDado;

  lanzamiento (1);
  primerDado = tirarDado ();
  lanzamiento (2);
  segundoDado = tirarDado ();
  total = dado(primerDado, segundoDado);


    return 0;
}