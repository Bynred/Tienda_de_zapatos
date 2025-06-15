#include <iostream>
using namespace std;

int main(){

    double h, b;/*se crean las variable*/
    double area;
    cout<<"Buscar el area del Triangulo"<<endl;

    cout<<"Digite la base del triangulo"<<endl;/*se pide la base*/
    cin>>b;
    
    cout<<"Digita la altura del triangulo"<<endl;/*se pide la altura*/
    cin>>h;

    area=(b*h)/2; /*la operación no cambia si le quitas los parentesis, la mayoria de los programadores lo hacen por presentación a menos que cambies de posicion los parentesis.*/

    cout<<"El area del Triangulo es: "<<area <<endl;

    return 0;

    /*Brayan Alfonso Ojito Aguirre*/

}