#include <iostream>
using namespace std;
int main() {
    double peso, altura, imc;
    cout << "Ingrese su peso en kg: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    imc = peso / (altura * altura);
    cout << "Su IMC es: " << imc << endl;
    if (imc < 18.5) {
        cout << "Usted está flaco mi perrito, coma mas.";
    } else if (imc >= 18.5 && imc < 25) {
        cout << "Usted tiene un peso normal.";
    } else if (imc >= 25 && imc < 30) {
        cout << "Usted tiene grasita de mas panita.";
    } else {
        cout << "Usted tiene obesidad :(.";
    }
}