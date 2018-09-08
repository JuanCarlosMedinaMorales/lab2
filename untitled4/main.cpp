#include <iostream>

using namespace std;

int main()//This function indicates how many possible paths a mesh of size nxn has.
{
    int tamanoM,caminosposibles;

    cout << "ingrese el tamaño de la matriz(porfavor ingrese solo un numero entero): " << endl;
    cin>>tamanoM;
    if(tamanoM>0){//The conditional applies an equation to know the possible paths.
        /*first multiply the size of the matrix nxn, then the result is multiplied by the number n of a smaller matrix (n-1)
         *and that result is added the constant of the problem that would be 2*/
        caminosposibles=tamanoM*tamanoM;
        caminosposibles*=tamanoM-1;
        caminosposibles+=2;
        cout<<"para una malla de "<<tamanoM<<" x "<<tamanoM<<" puntos, hay "<<caminosposibles<<" caminos posibles"<<endl;
    }
    else{
        cout<<"para una malla de "<<tamanoM<<" x "<<tamanoM<<" puntos, hay 0 caminos posibles"<<endl<<"porfavor revise la variable ingresada"<<endl;
    }


    return 0;
}
