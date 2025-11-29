#include <iostream>
#include <string>
using namespace std;

int main() {
    string productos[5];
    int inicial[5];
    int vendido[5];
    int finalStock[5];

    cout << "--- Inventario ---\n";

    for (int i = 0; i < 5; i++) {
        cout << "\nProducto " << i + 1 << ": ";
        cin >> productos[i];

        cout << "Stock inicial: ";
        cin >> inicial[i];

        cout << "Stock vendido: ";
        cin >> vendido[i];

        if (vendido[i] > inicial[i]) {
            cout << "ERROR: No puede vender más de lo que tiene.\n";
            finalStock[i] = -1;  
        } else {
            finalStock[i] = inicial[i] - vendido[i];
        }
    }

    cout << "\n--- Resultados ---\n";
    for (int i = 0; i < 5; i++) {
        cout << productos[i] << " -> ";
        if (finalStock[i] == -1)
            cout << "ERROR" << endl;
        else
            cout << "Stock final: " << finalStock[i] << endl;
    }

    return 0;
}
