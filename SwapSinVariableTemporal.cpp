#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 10;
    cout << "Antes del intercambio: a = " << a << ", b = " << b << endl;
    
    //Con temporal
    int temp = a; a=b; b=temp;
    cout << "Después del intercambio (Metodo con temporal): a = " << a << ", b = " << b << endl;   
    //Aritmetica
    a = a + b; b = a - b; a = a - b;
    cout << "Después del intercambio (Metodo aritmetico): a = " << a << ", b = " << b << endl;
    // (c) XOR
    a = a ^ b; b = a ^ b; a = a ^ b;
    cout << "Después del intercambio (Metodo XOR): a = " << a << ", b = " << b << endl;
    return 0;
}