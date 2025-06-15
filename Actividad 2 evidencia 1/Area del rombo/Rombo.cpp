#include <iostream>
using namespace std;

int main(){

    double D, d;/*se crean las variable*/
    double area;
    cout<<"Buscar el area del Rombo"<<endl;

    cout<<"Digite la diagonal mayor"<<endl;
    cin>>D;
    
    cout<<"Digita la diagonal menor"<<endl;
    cin>>d;

    area=(D*d)/2; /*la operación no cambia si le quitas los parentesis, la mayoria de los programadores lo hacen por presentación a menos que cambies de posicion los parentesis.*/

    cout<<"El area del rombo es: "<<area <<endl;

    return 0;

    /*Brayan Alfonso Ojito Aguirre*/

}