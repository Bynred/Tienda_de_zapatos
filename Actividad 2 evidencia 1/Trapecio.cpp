#include <iostream>
using namespace std;

/*En este tube incomvenientes ya que la formula de la guia rapida 2 estaba erronea, si es buscar el area del trapecio claro esta.*/

int main(){

    double B, b , h;/*se crean las variable*/
    double area;
    cout<<"Buscar el area del Trapecio"<<endl;

    cout<<"Digite la primera base"<<endl;/*se pide la base*/
    cin>>B;
    
    cout<<"Digita la segunda base"<<endl;/*se pide la segunda bas*/
    cin>>b;

    cout<<"Digita la altura"<<endl;/*se pide la segunda bas*/
    cin>>h;

    area=((B + b)*h)/2;

    cout<<"El area del Trapecio es: "<<area <<endl;

    return 0;

    /*Brayan Alfonso Ojito Aguirre*/

}