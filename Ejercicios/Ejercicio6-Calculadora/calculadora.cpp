#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b, suma=0, resta=0, multiplicacion=0, division=0;
	
	cout<<"Ingresar un numero: "; cin>>a;
	cout<<"Ingresar otro numero: "; cin>>b;
	
	suma= a+b;
	resta=a-b;
	multiplicacion= a*b;
	division= a/b;
	
	cout<<"\n La suma es:"<<suma<<endl;
	cout<<"\n La resta es:"<<resta<<endl;
	cout<<"\n La multiplicacion es:"<<multiplicacion<<endl;
	cout<<"\n La division es:"<<division<<endl;

    return 0;
}