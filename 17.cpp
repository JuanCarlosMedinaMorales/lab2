#include <iostream>

using namespace std;

int main()
{
    int numero,numerotrangular,divisores,contador,n,numerod;
    n=1;
    contador=1;
    divisores=0;
    numero=1;
    cout<<"Ingrese el numero de divisores:"<<endl;
    cin>>numerod;
    while(contador!=0){
        numerotrangular=n*(n+1)/2;
        if(numerotrangular%numero==0){
            divisores++;
            if(divisores==numerod+1){
                cout<<"El numero es: "<<numerotrangular<<"  que tiene  "<<divisores<<" divisores"<<endl;
                contador = 0;
            }
            numero++;
        }
        else if(numero>numerotrangular){
            n++;
            divisores=0;
            numero=1;
        }
        else{
            numero++;
        }
    }
    return 0;
}
