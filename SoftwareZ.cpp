#include <iostream>
#include <string>
using namespace std;

int main(){
    double vc;
    int tl;
    char op2;
    string des, ref;

    cout<<"ADMINISTRAR VENTA DE ZAPATO"<< endl; //titulo del negocio


    do
    {
        cout<<"Desea Registrar un zapato? (s/n): ";
        cin>>op2;
        op2 = tolower(op2);

        if (op2 == 's')
        {
            while (op2 == 's')
            {
                //Se le pide al usuario digitar la referencia del producto y guardar en la variable "ref".
                cin.ignore();  // Limpiar buffer antes de getline 
                cout<<"digite la referencia: ";
                getline(cin, ref);

                //se le pide al usuario digitar un descripcion del producto y guardarla a la variable "des"
                cout<<"digite una descripción del zapato: ";
                getline(cin, des);

                //Se le pide al usuario digitar la talla del zapato y guardarla en la variable "tl"
                cout<<"Digita la talla: ";
                cin>>tl;

                //se digita el costo del zapato, y guardar en la variable vc.
                cout<<"Digita el costo del zapato: ";
                cin>>vc;


                do
                {
                    cout<< endl <<"Desea registrar otro Zapato?(s/n): "; 
                    cin>>op2;
                    op2 = tolower(op2);

                    if (op2 == 's')
                    {
                        //Se le pide al usuario digitar la referencia del producto y guardar en la variable "ref".
                    cin.ignore();  // Limpiar buffer antes de getline 
                    cout<<"digite la referencia: ";
                    getline(cin, ref);

                    //se le pide al usuario digitar un descripcion del producto y guardarla a la variable "des" 
                    cout<<"digite una descripción del zapato: ";
                    getline(cin, des);

                    //Se le pide al usuario digitar la talla del zapato y guardarla en la variable "tl"
                    cout<<"Digita la talla: ";
                    cin>>tl;

                    //se digita el costo del zapato, y guardar en la variable vc.
                    cout<<"Digita el costo del zapato: ";
                    cin>>vc;

                    }else if (op2 == 'n')
                    {
                        //fin de la aplicacion//
                    }else{
                        cout<<"Digite una opcion valida"<<endl;
                    }
                    
                    
                    
                } while (op2 == 's');
                
                

            }  
        }else if (op2 == 'n')
        {
            /* Fin del programa */
        }else
        {
            cout<<"Digite una opcion valida"<<endl;
        }
        
        
        
    } while (op2 != 'n');


    cout<<"Fin de la aplicacion"<<endl;
    


    return 0;

    //Relizado por: Brayan Alfonso Ojito Aguirre.

}/*fin main*/