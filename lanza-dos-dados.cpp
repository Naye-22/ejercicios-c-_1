#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int lanzar_dado() {
    return rand() % 6 + 1; 
}

void mostrar_resultado(int dado1, int dado2) {
    cout << "Dado 1: " << dado1 << ", Dado 2: " << dado2 << endl;
}

bool es_ganador(int dado1, int dado2) {
    return (dado1 == dado2) || (dado1 + dado2 == 11);
}

int main() {
    srand(time(0)); 

    while (true) {
        cout << "Presiona Enter para lanzar los dados..." << endl;
        cin.ignore(); 
        int dado1 = lanzar_dado();
        int dado2 = lanzar_dado();
        mostrar_resultado(dado1, dado2);

        if (es_ganador(dado1, dado2)) {
            cout << "¡Has ganado!" << endl;
            break; 
        } else {
            cout << "Inténtalo de nuevo." << endl;
        }
    }

    return 0;
}