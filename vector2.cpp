#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    string materias[n];

    materias[0] = "Redes de computadores";
    materias[1] = "Algoritmos y Estructuras de Datos";
    materias[2] = "Arquitectura de Computadores";
    materias[3] = "Programacion";
    materias[4] = "Sistemas Operativos";

    cout << "\nMaterias almacenadas:\n";
    for (int i = 0; i < n; i++) {
        cout << "Posicion " << i << ": " << materias[i] << endl;
    }

    return 0;
}
