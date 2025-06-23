#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int valores[] = {2,4,6,8,1,7,9,3,6,10};
    int suma = 0;

    for (int i=0;i<10;i++)
    {
        suma += valores[i];
    }

    cout<<"La suma de los elementos contenidos en el arreglo es: "<<suma<<endl;

    getch();
    
}