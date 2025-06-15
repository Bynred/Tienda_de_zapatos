#include <iostream>
using namespace std;

int main(){
 int edad; //Declaro las variable que se requiere para ejecutar el programa.
    cout<<"Ingrese la edad de su hijo:"<<endl; //se le pide al usuario ingresar la edad del niño.
    cin>>edad; //variable donde se va a guardar la edad del niño.

    if(edad<0){ //la condicio se ejecuta si el número es negativo. Por si un gracioso lo digita.
        cout<<"Por favor digite una edad valida."<<endl;
    }else{
        if(edad<=6){ //La condición se ejecuta si el usuario es menor o igual a 6.
            cout<<"El niño pertenece al grupo de la primera infacia.";
        }else{
            if(edad<=12){ //La condición se ejecuta si el usuario e menor o igual a 12.
                cout<<"el niño pertenece al grupo de la segunda infancia.";
            }else{
                if(edad<18){ //la condicion se ejecuta si el usuario es menor de 18.
                    cout<<"la persona pertenece al grupo de adolescentes.";
                }else{
                    cout<<"Es una persona adulta."; //La condicion se ejecuta si el usuario es mayor o igual a 18.
                }
            }
        }
    }
    //Condiciones anidadas. Creado por Brayan Alfonso Ojito Aguirre.
 return 0;
}