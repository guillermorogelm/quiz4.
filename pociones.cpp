#include <iostream>
using namespace std;

void mostrarInventario(int oro, int pociones) {
    cout << "Oro: " << oro << " | Pociones: " << pociones << endl;
}

bool comprarPocion(int* oro, int* pociones, int precio) {
    if (*oro >= precio) {
        *oro -= precio;
        (*pociones)++;
        return true;
    }
    return false;
}

void venderPocion(int* oro, int* pociones, int precioVenta) {
    if (*pociones >= 1) {
        (*pociones)--;
        *oro += precioVenta;
    } else {
        cout << "No tienes pociones para vender!" << endl;
    }
}

int main() {
    int oro = 100, pociones = 2;
    int precioCompra = 30, precioVenta = 15;

    cout << "=== Inventario Inicial ===" << endl;
    mostrarInventario(oro, pociones);

    for (int i = 0; i < 3; i++) {
        cout << "Comprando pocion... ";
        if (comprarPocion(&oro, &pociones, precioCompra)) {
            cout << "Exito!" << endl;
        } else {
            cout << "Oro insuficiente!" << endl;
        }
        mostrarInventario(oro, pociones);
    }

    cout << "Vendiendo pocion..." << endl;
    venderPocion(&oro, &pociones, precioVenta);
    mostrarInventario(oro, pociones);

    cout << "Comprando pocion... ";
    if (comprarPocion(&oro, &pociones, precioCompra)) {
        cout << "Exito!" << endl;
    } else {
        cout << "Oro insuficiente!" << endl;
    }
    mostrarInventario(oro, pociones);

    return 0;
}
