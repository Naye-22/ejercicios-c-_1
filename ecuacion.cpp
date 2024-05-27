#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    double a,b,c; //variables reales de doble precision
    double d; //discriminante
    cout<<"ingresa el valor de a: ";
    cin>>a;
    cout<<"ingresa el valor de b: ";
    cin>>b;
    cout<<"ingresa el valor de c: ";
    cin>>c;
    if(a==0)
    {
        cout<<endl<<"imposible dividir para 0";

    }
    else{
    //Calculamos el descriminante (b*b-4*a)
        d=(b*b) - (4*a*c);
        if (d<0){
            cout<<endl<<"las soluciones con imaginarias";
        }
        else{
            double x1 = (-b + sqrt(d))/(2*a);
            double x2 = (-b - sqrt(d))/(2*a);
            cout<<"valor de x1 = " <<x1;
            cout<<"valor de x2 = "<<x2;

        }
    }
    return 0;
}