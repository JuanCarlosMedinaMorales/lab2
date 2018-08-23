#include <iostream>

using namespace std;
//funcion incompleta
int main()
{
    int tamano,ultimonumero,primernumero,snumero,contador,raiz,tercernumero;
    cout << "ingrese un numero entero correspondiente a el tamaño de la matriz: " << endl;
    cin>>tamano;
    contador=0;
    ultimonumero=tamano*tamano;
    primernumero=ultimonumero-(tamano-1);
    snumero=primernumero+ultimonumero;
    while(contador!=3){
          tercernumero=primernumero-(tamano-1);
          contador++;
          snumero+=tercernumero;
    }
    contador=0;
    raiz=0;
    while(ultimonumero>=1){
        tamano=tamano/2;
        primernumero=8*tamano;
        ultimonumero=ultimonumero-primernumero;
        snumero=snumero+ultimonumero;
        while(contador!=3){
            tercernumero=ultimonumero-(tamano-1);
            contador++;
            snumero+=tercernumero;
        }
        contador=0;
        while(raiz!=ultimonumero){
            raiz=contador*contador;
            contador++;
        }
        contador--;
        tamano=contador;


    }

    return 0;
}
