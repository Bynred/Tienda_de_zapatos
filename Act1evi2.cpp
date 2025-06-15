#include <iostream>
#include <string>
using namespace std;

int main(){
    double ref, tl, vc,vv ,zcan;     //declaro las variables para numeros enteros.
    char dis;  //declaro las variables para alfanumericos.
    string des;

    cout<<"ADMINISTRAR VENTA DE ZAPATO"<< endl; //titulo del negocio

    //Se le pide al usuario digitar la referencia del producto y guardar en la variable "ref".
    cout<<"digite la referencia del zapato"<< endl;
    cin>>ref;

    //se le pide al usuario digitar un descripcion del producto y guardarla a la variable "des"
    cin.ignore();  // Limpiar buffer antes de getline 
    cout<<"digite una descripción del zapato"<< endl;
    getline(cin, des);

    //Se le pide al usuario digitar la talla del zapato y guardarla en la variable "tl"
    cout<<"Digita la talla..."<< endl;
    cin>>tl;

    //se usa la condicion do while para obligar al usuario a digitar solo las letra s y n. y asi continuar el programa
    do {
        cout << "Digite la letra si está disponible o no para la venta (s/n): ";
        cin >> dis;
        dis = tolower(dis);  // tolower convierte de mayuscula a minusscula esta definicion fue buscada en internet.
    } while (dis != 's' && dis != 'n');  // aqui se vuelve a pedir en caso de que no se la letra que digito

    //digitar la cantidad de zapato que desea el cliente.
    cout<<"Digita la cantidad de zapatos."<< endl;
    cin>>zcan;

    //se digita el costo del zapato, y guardar en la variable vc.
    cout<<"Digita el costo del zapato."<< endl;
    cin>>vc;

    //Se digita el precio de venta del producto y se guardarla en la variable "vv".
    cout<<"Digitam el precio de venta del zapato."<< endl;
    cin>>vv;


    //hasta aqui termina el proceso de entradas. abajo reorganize los datos de salida para se viera mas entendible.

    cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES:" <<endl;
    
    cout<<"Referencia: "<<ref <<endl; //la referencia
    cout<<"Descripcion: "<<des <<endl;//La descripcion
    cout<<"Talla: "<< tl << endl ;//La talla
    cout<<"disponibilidad: "<< dis <<endl; //la disponibilidad
    cout<<"cantidad de Zapatos: "<<zcan<<endl; //cantidad de zapatos
    cout<<"Costo: "<< vc <<endl; //el valor de compra
    cout<<"costo total: "<< vc*zcan <<endl; //costo total del producto
    cout<<"Precio: "<< vv << endl; //el valor de venta
    cout<<"Precio total: "<< vv*zcan <<endl; //costo total de la venta
    cout<<"Utilidad por unidad: "<< vv-vc << endl;
    cout<<"Utilidad total: "<< (vv-vc)*zcan <<endl;
    cout<<"Porcentaje de utilidad: "<< (((vv-vc)/vc)*100)<<endl;

    
    cout<<"GRACIAS POR DIGITAR LA INFORMACIÓN"<<endl;


    return 0;

    //Relizado por: Brayan Alfonso Ojito Aguirre.

}