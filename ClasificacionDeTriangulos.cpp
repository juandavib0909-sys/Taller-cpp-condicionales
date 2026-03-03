#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    double a, b, c;
    cout << "Ingresa el lado 1 del triangulo: ";
    cin >> a;
    cout << "Ingresa el lado 2 del triangulo: ";
    cin >> b;
    cout << "Ingresa el lado 3 del triangulo: ";
    cin >> c;
    double lados[3] = {a, b, c};
    sort(lados, lados + 3);
    if (lados[0] + lados[1] > lados[2]) {
        if (lados[0] == lados[1] && lados[1] == lados[2]) {
            cout << "El triangulo es equilatero";
        } else if (lados[0] == lados[1] || lados[1] == lados[2]) {
            cout << "El triangulo es isosceles";
        } else {
            cout << "El triangulo es escaleno";
        }
    } else {
        cout << "No es un triangulo valido";
    }
    return 0;
}
