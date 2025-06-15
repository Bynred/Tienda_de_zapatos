#include <iostream>
#include <math.h>
using namespace std;

int main(){

    double pi, r, area; /*creo las variables*/
    pi=3.14;/*valor de pi*/
    cout<<"Buscar el area del circulo"<<endl;
    cout<<"Digite el radio"<<endl;/*agrego el radio del circulo*/
    cin>>r;

    area=pi* pow(r,2); /*pow con la libreria math.h elevar el primero número a la 2*/

    cout<<"El area del circulo es: "<<area<<endl;


    return 0;

    /*Brayan Alfonso Ojito Aguirre*/

}