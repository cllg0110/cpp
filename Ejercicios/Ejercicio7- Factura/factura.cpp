#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;


    
    cin >> subtotal;

    total = subtotal + (subtotal * 0.15);


    cout << endl;
    cout << "Total a pagar es: " << total;



    return 0;
}
