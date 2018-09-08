#include <iostream>
#include <cstdlib>

using namespace std;
//This function receives a string number and returns it as int with the help of the atoi library.
int main ()
{
    string numero;
    int numero2;
    int prueba;
    cout << "Ingrese un numero entero" << endl;
    cin >> numero;
     //In this part the number is converted into string to an int and prints the result.
    cout << "El numero ingresado es:   " <<  atoi(numero.c_str())<< endl;
    //in this part a number is requested to verify that the number if it was converted to an int.
    cout << "Ingrese un numero entero para operar con el anterior numero ingresado " << endl;
    cin>>prueba;
    numero2=atoi(numero.c_str())+prueba;
    cout << "El resultado de la prueba es:   " <<  numero2<<endl;

    return 0;
}
