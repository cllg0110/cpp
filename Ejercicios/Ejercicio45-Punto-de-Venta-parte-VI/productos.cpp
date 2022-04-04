#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
        
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - Macchiato" << endl;
        cout << endl;

        cout << "Ingrese una opcion:";
        cin >> opcionProducto;
        cout << endl;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L.40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Expresso - L.30.00", 1, 30);
            break;
        case 3:
            agregarProducto("1 Macchiato - L.35.00", 1, 35);
            break;

        default:
            {
            cout << "opcion no valida";
            return;
            break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");

        break;
    case 2:
    
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Mochaccino" << endl;
        cout << "2 - Frapuchatta" << endl;
        cout << "3 - Caramel Granita" << endl;
        cout << endl;

        cout << "Ingrese una opcion:";
        cin >> opcionProducto;
        cout << endl;

         switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Mochaccino - L.68.00", 1, 68);
            break;
        case 2:
            agregarProducto("1 Frapuchatta - L.55.00", 1, 55);
            break;
        case 3:
            agregarProducto("1 Caramel Granita - L.65.00", 1, 65);
            break;

        default:
            {
            cout << "opcion no valida";
            return;
            break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");

        break;
    case 3:
    
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - Sambusec" << endl;
        cout << "2 - Butter Cookie" << endl;
        cout << "3 - Quequito de Elote" << endl;
        cout << endl;

        cout << "Ingrese una opcion:";
        cin >> opcionProducto;
        cout << endl;
        
        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Sambusec - L.40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Butter Cookie - L.20.00", 1, 20);
            break;
        case 3:
            agregarProducto("1 Quequito de Elote - L.35.00", 1, 35);
            break;

        default:
            {
            cout << "opcion no valida";
            return;
            break;
            }

        }
        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
}