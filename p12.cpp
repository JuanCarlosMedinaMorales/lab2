#include <iostream>

using namespace std;

int main()
{
    int numero,variable,contador,Mprimo,x,y;
    cout<<"ingrese el numero del cual desea saber el maximo primo: "<<endl;
    cin>>numero;
    variable=1;
    Mprimo=0;
    contador =1;
    x=0;
    y=0;
    while (variable<=numero){
        variable++;
        while (variable>=contador){
           x=variable%contador;
           if (x==0){
            y++;
           }
           contador++;
        }
        if (y==2){
            if (numero%variable==0){
                if (Mprimo<variable){
                    Mprimo=variable;
                }
            }
        }
        contador=1;
        y=0;

    }
    cout<<"el maximo factor primo del numero "<<numero<<" es:  "<< Mprimo<<endl;
    return 0;
}
