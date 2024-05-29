#include <iostream>

using namespace std;

int contar_cifras(int numero) {
    int contador = 0;
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}

int main() {
    int numero;

    cout << "Ingrese un número entre 1 y 9.999.999: ";
    cin >> numero;

    if (numero < 1 || numero > 9999999) {
        cout << "El número ingresado está fuera del rango permitido." << endl;
    } else {
        int cifras = contar_cifras(numero);
        cout << "El número " << numero << " se compone de " << cifras << " cifra(s)." << endl;
    }

    return 0;
}