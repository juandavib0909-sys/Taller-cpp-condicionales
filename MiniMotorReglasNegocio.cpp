#include <iostream>
using namespace std;
int main() {
    char tipoCliente;
    double montoCompra, descuento = 0.0, TotalAPagar;
    int CodigoDelCupon;
    bool EsFinDeSemana;
    cout << "Ingrese el tipo de cliente (V para Vip, N para normal): ";
    cin >> tipoCliente;
    cout << "Ingrese el monto de la compra: $";
    cin >> montoCompra;
    cout << "Ingrese el codigo del cupon (0 si no tiene): ";
    cin >> CodigoDelCupon;
    cout << "Es Fin de semana? (1 para si, 0 para no): ";
    cin >> EsFinDeSemana;
    if (tipoCliente == 'V' || tipoCliente == 'v') {
        descuento += 0.10; // 10% de descuento para clientes VIP
    } else if (tipoCliente == 'N' || tipoCliente == 'n') {
        descuento += 0.05; // 5% de descuento para clientes normales
    } else {
        cout << "Tipo de cliente no valido." << endl;
        return 1;
    } 
    if (EsFinDeSemana == 1) {
        descuento += 0.05;
    }
    switch (CodigoDelCupon) {
    case 1:
        descuento += 0.10; // 5% de descuento adicional
        break;
        case 2:
        descuento += 0.15; // 10% de descuento adicional
        break;
        case 3:
        descuento += 0.20; // 15% de descuento adicional
        break;
        default: cout << "Cupon no valido, sin descuento por cupon panita";
    }
    if (descuento > 0.50)   {
        descuento = 0.50;
    }
    TotalAPagar = montoCompra * (1 - descuento);
    cout << "El total a pagar es: $" << TotalAPagar << endl;
    cout << "El descuento que se le aplico fue de: " << descuento * 100 << "%" << endl;
    return 0;
}
    
   

