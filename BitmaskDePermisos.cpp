#include <iostream>
using namespace std;
int main() {
    const int LEER = 0b0001; // 1
    const int ESCRIBIR = 0b0010; // 2
    const int EJECUTAR = 0b0100; // 4

    int valor;
    cout << "ingresa el valor de permisos (0-7): ";
    cin >> valor;
    if (valor & LEER) {
        cout << "Permiso de lectura" << endl;
    }
    if (valor & ESCRIBIR) {
        cout << "Permiso de escritura" << endl;
    }
    if (valor & EJECUTAR) {
        cout << "Permiso de ejecucion" << endl;
    }
    return 0;
}