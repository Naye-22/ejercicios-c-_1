//diseñe un progamee en c++ que jenere un numero aleatorios entre 1 y 6 si el numero gwnerado
// es impar"eres el ganador" de lo contrario "sigue intentando"
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    int num =rand () % 6 + 1;
    cout<<"el numero aleatorio es: : "<<num<<endl;
    if (num %2 != 0){
        cout<<endl<<"Ganaste un viaje a Galapagos";
    }
    else {
        cout<<endl<<"perdiste, sigue intedando";
    }
    return 0;
}
