#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int valores[50],x;

    cout<<"Digite la cantidad de elementos deseados para el arreglo: ";
    cin>>x;

    for(int i=0;i<x;i++)
    {
        cout<<"Digite el elemento numero "<< i+1<<" del arreglo: ";
        cin>>valores[i];
    }

    system("cls");

    cout<<"Los elementos contenidos en el arreglo son: "<<endl;

    for(int i=0;i<x;i++)
    {
        cout<<valores[i]<<endl;
    }
    getch();
}