#include <iostream>
using namespace std;
int main() {
    double n1,n2;
    char operacion;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingresa el operador (+, -, *, /,%): ";
    cin >> operacion;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    switch (operacion) {
        case '+':
            cout << "El Resultado es: " << n1 + n2;break;
        case '-':
            cout << "El Resultado es: " << n1 - n2;break;
        case '*':   
            cout << "El Resultado es: " << n1 * n2;break;   
        case '/':
            if (n2 ==0) {
                cout << "Error no se puede dividir por cero";
            } else {
                cout << "El Resultado es: " << n1 / n2;
            }break;
        case '%':
            if (n2 ==0) {
                cout << "Error: Division por cero";
            } else {
                cout << "El Resultado es: " << static_cast<int>(n1) % static_cast<int>(n2);
            }break;
        default:
            cout << "Operacion no valida";
    }
    return 0;  
}