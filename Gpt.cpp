#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"digite la edad de la persona"<< endl;
    cin>>n;

    if (n<13){
        cout<<"Niño"<< endl;
    }
    if (n>=13 && n<=17){
        cout<<"Adolescente"<< endl;
    }
    if (n>=18 && n<=59){
        cout<<"Adulto"<< endl;
    }
    if (n>=60){
        cout<<"Adulto mayor"<< endl;
    }
    
    return 0;
        
    }

    
    