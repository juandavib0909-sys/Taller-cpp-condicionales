#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Ingrese un year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " es un year bisiesto.";
    } else {
        cout << year << " no es un year bisiesto.";
    }
    return 0;
}