#include <iostream>
using namespace std;
int main (){

    char opcion, variable = 'x';

    do{

        cout << "Menu" <<"\n";
        cout << "A carne Asada" << "\n";
        cout << "B pollo" << "\n";
        cout << "C cerdo" << "\n";
        cout << "Seleccione una opcion:" << "\n";
        cin >> opcion;
        cout << "Opcion seleccionada" << "\n";

    }
    while (opcion != variable);

    return 0;
}