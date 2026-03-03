#include <iostream>
using namespace std;
int main() {
    double saldo = 1000.0;
    int opcion, transacciones = 0;
    double monto;
    cout << "Bienvenido a su ATM parcero" << endl;
    cout << "Su saldo actual es: $" << saldo << endl;
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Retirar dinero" << endl;
    cout << "2. Depositar dinero" << endl;
    cout << "3. Consultar saldo" << endl;
    cout << "4. Salir" << endl;
    do {
        cout << "Opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Ingrese el monto a retirar: $";
                cin >> monto;
                if (monto > saldo) {
                    cout << "No le alcanza la platica." << endl;
                } else {
                    saldo -= monto;
                    transacciones++;
                    cout << "Retiro exitoso. Su nuevo saldo es: $" << saldo << endl;
                }
                break;
            case 2:
                cout << "Ingrese el monto a depositar: $";
                cin >> monto;
                saldo += monto;
                transacciones++;
                cout << "Deposito exitoso. Su nuevo saldo es: $" << saldo << endl;
                break;
            case 3:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;
            case 4:
                cout << "Gracias por usar nuestro ATM la buena parcero: " << transacciones << endl;
                break;
            default:
                cout << "Opcion no valida. Por favor intente de nuevo." << endl;
        }
    } while (opcion != 4);
}