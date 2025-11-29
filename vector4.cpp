#include <iostream>
#include <string>
using namespace std;

void autorPrograma() {
    cout << "Autor del programa: Angui Fierro\n";
}

void llenarPaises(string paises[]) {
    cout << "\n--- Llenar 5 paises ---\n";
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el pais " << i + 1 << ": ";
        cin >> paises[i];
    }
}

void llenarPrecios(float precios[]) {
    cout << "\n--- Registrar precios de vuelos ---\n";
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el precio del vuelo " << i + 1 << ": ";
        cin >> precios[i];
    }
}

int main() {
    string paises[5];
    float precios[5];

    autorPrograma();
    llenarPaises(paises);
    llenarPrecios(precios);

    cout << "\nPaises y precios registrados:\n";
    for (int i = 0; i < 5; i++) {
        cout << paises[i] << " -> $" << precios[i] << endl;
    }

    return 0;
}
