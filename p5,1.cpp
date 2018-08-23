#include <iostream>

using namespace std;

int main()
{
    float decimal,numero,x;
    int cont,cont2,cont3, ent;
    cout<<"ingrese un numero entero impar:"<<endl;
    cin>>numero;
    cont=0;
    ent=numero/2;
    x=ent+0.5;
    decimal=numero/2;
    if (x<=decimal){
        ent++;
    }
    cont3=1;
    cont2=ent-1;

    while (cont!=ent){
        while (cont<cont2){
            cout<<" ";
            cont2--;
        }
        while (cont!=cont3){
            cout<<"*";
            cont++;
        }
        cont=0;
        cont2=ent-1;
        while (cont<cont2){
            cout<<" ";
            cont2--;
        }
        cont3=cont3+2;
        ent--;
        cont2=ent-1;
        cout<<" "<<endl;
    }
    cont=0;
    ent=numero/2;
    cont3=numero-2;
    cont2=1;

    while (cont!=ent+1){
        while (cont<cont2){
            cout<<" ";
            cont++;
        }
        cont=0;
        while (cont<cont3){
            cout<<"*";
            cont++;
        }
        cont=0;
        while (cont<cont2){
            cout<<" ";
            cont++;
        }
        cont3=cont3-2;
        ent--;
        cont2++;
        cont=0;
        cout<<" "<<endl;
    }
    return 0;
}
