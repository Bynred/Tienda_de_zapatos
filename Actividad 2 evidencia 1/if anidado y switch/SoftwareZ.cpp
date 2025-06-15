#include <iostream>
#include <string>
using namespace std;

int main(){
    double vc, vv, pct;
    int tl, zcan, op1;
    char dis;
    string des, ref;
    char tp;

    cout<<"ADMINISTRAR VENTA DE ZAPATO"<< endl; //titulo del negocio

    cout<<"Desea con iniciar el proceso de administracion?  "<<endl;
    cout<<"Digita"<< endl << "Número 1 = Si "<<endl <<"Número 2 = No "<<endl;
    cin>>op1;

    switch (op1)
    {
    case 1:
        //Se le pide al usuario digitar la referencia del producto y guardar en la variable "ref".
        cin.ignore();  // Limpiar buffer antes de getline 
        cout<<"digite la referencia del zapato"<< endl;
        getline(cin, ref);

        cout << "Digite la letra si está disponible o no para la venta (s/n): ";
        cin >> dis;
        dis = tolower(dis);

        if (dis == 's')
        {
        //se le pide al usuario digitar un descripcion del producto y guardarla a la variable "des"
        cin.ignore();  // Limpiar buffer antes de getline 
        cout<<"digite una descripción del zapato"<< endl;
        getline(cin, des);

        //Se le pide al usuario digitar la talla del zapato y guardarla en la variable "tl"
        cout<<"Digita la talla..."<< endl;
        cin>>tl;

        //digitar la cantidad de zapato que desea el cliente.
        cout<<"Digita la cantidad de zapatos."<< endl;
        cin>>zcan;

        //se digita el costo del zapato, y guardar en la variable vc.
        cout<<"Digita el costo del zapato."<< endl;
        cin>>vc;

        if (vc <= 30000){
        vv = (((vc*50)/100)+vc);
        pct = 50;
        tp = 'A';
        }else if (vc > 30000 && vc <= 60000){
        vv = (((vc*40)/100)+vc);
        pct = 40;
        tp = 'B';

        }else if (vc > 60000){
        vv = (((vc*30)/100)+vc);
        pct = 30;
        tp = 'C';

        }

        //hasta aqui termina el proceso de entradas. abajo reorganize los datos de salida para se viera mas entendible.

    


        cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES:" <<endl;
    
        cout<<"Referencia: "<<ref <<endl; //la referencia
        cout<<"Tipo: "<< tp <<endl;
        cout<<"Descripcion: "<<des <<endl;//La descripcion
        cout<<"Talla: "<< tl << endl ;//La talla
        cout<<"disponibilidad: "<< dis <<endl; //la disponibilidad
        cout<<"cantidad de Zapatos: "<<zcan<<endl; //cantidad de zapatos
        cout<<"Costo: "<< vc <<endl; //el valor de compra
        cout<<"costo total: "<< vc*zcan <<endl; //costo total del producto
        cout<<"Precio: "<< vv << endl; //el valor de venta
        cout<<"Precio total: "<< vv*zcan <<endl; //costo total de la venta
        cout<<"Utilidad por unidad: "<< vv-vc << endl;
        cout<<"Utilidad total de la(s): "<<zcan<<" "<< (vv-vc)*zcan <<endl;
        cout<<"Porcentaje de utilidad: "<< pct <<"%" <<endl;

    
        cout<<"GRACIAS POR DIGITAR LA INFORMACIÓN"<<endl;


        }else if (dis =='n')
        {
            cout<<"No hay existencia! Gracias por usar el programa"<<endl;
        }else{
            cout<<"Digitó una opcion que no es correcta, por favor intente nuevamente"<<endl;
        }
        
        

        
        break;
    
    default:
        if (op1==2)
        {
           cout<<"Gracias por usar el programa"<<endl;
        }else{
            cout<<"El numero que ingresastes no es el correcto."<<endl;
        }
        
        break;
    }

    return 0;

    //Relizado por: Brayan Alfonso Ojito Aguirre.

}