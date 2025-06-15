#include <iostream>
using namespace std;

int main() {
    int tabla=0, opc1, resultado;

    cout<<"Tablas de multiplicar: "<<endl;
    
    while (tabla<9)
    {
        tabla++;
        cout<<"Tabla del "<< tabla << endl;
    }

    cout<<"Seleccione una tabla de multiplicar: "<<endl;
    cin>>opc1;

    for (int i = 1 ; i <= 10 ; i++)
    {
        resultado=opc1*i;
        cout<< opc1 << "x" << i << "=" << resultado << endl;
    }
    

    return 0;
    
    //Brayan alfonso ojito aguirre
}