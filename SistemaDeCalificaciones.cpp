#include <iostream>
using namespace std;
int main() {
    int calificacion;
    cout << "ingresa tu calificacion (0-100): ";
    cin >> calificacion;
    if (calificacion >= 90 && calificacion <= 100) {
        cout << "Tienes una A";
    } else if (calificacion >= 80 && calificacion < 90) {
        cout << "Tienes una B";
    } else if (calificacion >= 70 && calificacion < 80) {
        cout << "Tienes una C";
    } else if (calificacion >= 60 && calificacion < 70) {
        cout << "Tienes una D";
    } else if (calificacion >= 0 && calificacion < 60) {
        cout << "Tienes una F :(";
    } else {
        cout << "Calificacion no valida. Por favor ingresa un valor entre 0 y 100.";
    }
    return 0;
}
