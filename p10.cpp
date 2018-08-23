#include <iostream>

using namespace std;

int main()
{
    int numero,variable,contador,primo,x,y;
    cout<<"ingrese la posicion del numero primo que desea encontrar"<<endl;
    cin>>numero;
    if(numero>0){
        variable=1;
        primo=0;
        contador =1;
        x=0;
        y=0;
        while (primo!=numero){
                variable++;
                while (variable>=contador){
                   x=variable%contador;
                   if (x==0){
                        y++;

                   }
                   contador++;
                }
                if (y==2){
                        primo++;
                }
                contador=1;
                y=0;

        }
        cout<<"el primo numero "<<numero<<" es:  "<< variable<<endl;
    }
    else{
        cout<<"no hay posiciones negativas y el cero no es considerado numero primo."<<endl;
    }

    return 0;
}
