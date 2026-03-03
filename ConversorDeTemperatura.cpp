#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double celsius, fahrenheit, kelvin, rankine;
    cout << "Ponga la temperatura en celsius:";
    cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;
    rankine = (celsius + 273.15) * 9 / 5;
    cout << fixed << setprecision(2);
    cout << "La temperatura en fahrenheit es: " << fahrenheit;
    cout << "La temperatura en kelvin es: " << kelvin;
    cout << "La temperatura en rankine es: " << rankine;
    return 0;
}