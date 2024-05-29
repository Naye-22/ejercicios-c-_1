#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int lanzar_dado() {
    return rand() % 6 + 1;
}

void mostrar_resultado(int dado) {
    switch(dado) {
        case 1:
            cout << "*" << endl;
            break;
        case 2:
            cout << "- -" << endl;
            break;
        case 3:
            cout << "+ + +" << endl;
            break;
        case 4:
            cout << "@ @ @ @" << endl;
            break;
        case 5:
            cout << "|   |   |   |   |" << endl;
            break;
        case 6:
            cout << ":-)    :-)     :-)     :-)    :-)     :-)" << endl;
            cout << "¡Has ganado!" << endl;
            break;
    }
}

int main() {
    srand(time(0)); 

    while (true) {
        cout << "Presiona Enter para lanzar el dado..." << endl;
        cin.ignore();  

        int dado = lanzar_dado();
        mostrar_resultado(dado);

        if (dado == 6) {
            break; 
        }
    }

    return 0;
}