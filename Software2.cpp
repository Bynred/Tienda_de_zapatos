#include <iostream>
#include <string>
using namespace std;

int main() {
    double vc, vv, pct;
    int tl, zcan;
    char dis;
    string des, ref;
    char tp;

    cout<<"ADMINISTRAR VENTA DE ZAPATO"<< endl;
    cout<<"Digite la referencia del zapato: "<<endl;
    getline(cin, ref);

    cout<<"Digite una descripción del zapato: "<<endl;
    getline(cin, des);

    cout<<"Digita la talla del zapato: "<<endl;
    cin>>tl;

    do{
        cout<<"¿Está disponible para la venta? (s/n): "<<endl;
        cin>>dis;
        dis=tolower(dis);
    } while(dis != 's' && dis != 'n');

    cout<<"Digita la cantidad de zapatos: "<<endl;
    cin>>zcan;

    cout<<"Digita el costo del zapato: "<<endl;
    cin>>vc;

    if (vc <= 30000) {
        pct = 50;
        tp = 'A';
    } else if (vc <= 60000) {
        pct = 40;
        tp = 'B';
    } else {
        pct = 30;
        tp = 'C';
    }

    vv = vc + (vc * pct / 100);

    cout << "\nLOS DATOS REGISTRADOS SON LOS SIGUIENTES:\n";
    cout << "Referencia: " << ref << endl;
    cout << "Tipo: " << tp << endl;
    cout << "Descripción: " << des << endl;
    cout << "Talla: " << tl << endl;
    cout << "Disponibilidad: " << dis << endl;
    cout << "Cantidad de Zapatos: " << zcan << endl;
    cout << "Costo unitario: " << vc << endl;
    cout << "Costo total: " << vc * zcan << endl;
    cout << "Precio de venta unitario: " << vv << endl;
    cout << "Precio total: " << vv * zcan << endl;
    cout << "Utilidad por unidad: " << vv - vc << endl;
    cout << "Utilidad total: " << (vv - vc) * zcan << endl;
    cout << "Porcentaje de utilidad: " << pct << "%" << endl;
    cout << "\nGRACIAS POR DIGITAR LA INFORMACIÓN" << endl;

    return 0;
}