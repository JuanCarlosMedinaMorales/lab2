#include <iostream>

using namespace std;

int main()
{
    int cincuenta,veinte,diez,valor,b;
    cout<<"ingrese un valor entero:"<<endl;
    cin>>valor;
    cincuenta=50000;
    veinte=20000;
    diez=10000;
    b=0;
    while (valor>=50){
        if (valor>=cincuenta and cincuenta>=50){
            b=valor/cincuenta;
            valor=valor%cincuenta;
            cout<<cincuenta<<"="<<b<<endl;
            cincuenta=cincuenta/10;
        }
        if (b==0){
                cout<<cincuenta<<"= 0"<<endl;
                cincuenta=cincuenta/10;
            }
        b=0;
        if (valor>=veinte and veinte>20){
            b=valor/veinte;
            valor=valor%veinte;
            cout<<veinte<<"="<<b<<endl;
            veinte=veinte/10;
        }
        if (b==0){
                cout<<veinte<<"= 0"<<endl;
                veinte=veinte/10;
            }
        b=0;
        if (valor>=diez and diez>10){
            b=valor/diez;
            valor=valor%diez;
            cout<<diez<<"="<<b<<endl;
            diez=diez/10;
        }
        if (b==0){
                cout<<diez<<"= 0"<<endl;
                diez=diez/10;
            }
    }
    if (valor>0){
        cout<<"no se puede dar vueltas con el valor del billete vigente a el valor de:  "<<valor<<endl;
    }
    else{
        cout<<"no se reconoce el valor ingresado"<<endl;
    }
    return 0;
}
