#include <iostream>
using namespace std;

int totalVentas(int ventas[], int n) {
    if (n == 0) 
        return 0;       
    return ventas[n - 1] + totalVentas(ventas, n - 1); 
}

int main() {
    int dias;
    cout << "Ingrese cantidad de dias de venta: ";
    cin >> dias;

    int ventas[dias];
    for (int i = 0; i < dias; i++) {
        cout << "Ventas del dia " << i + 1 << ": ";
        cin >> ventas[i];
    }

    int total = totalVentas(ventas, dias);

    cout << "\nTotal vendido en " << dias << " dias: $" << total << endl;

    return 0;
}
