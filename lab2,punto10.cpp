#include <iostream>
#include<conio.h>//Library to know the size of an array.
#include<string.h>//Library to handle the string.
using namespace std;
void convertir( int &numero);
int main()
{
    int resultado=0;
    char numero[100]={};
    int longitud=0;
    char x=0;
    int contador=1002;
    cout<<"ingrese el numero que quiere comvertir a sistema arabico, porfavor ingresar mayusculas"<<endl;
    cin>>numero;
     longitud=strlen(numero);//It shows the length of the array.
    for(int i=0; i<longitud;i++)//In this for the array is traversed and with a switch it indicates the value of each letter and adds or subtracts it to a variable
    {
        x=numero[i];


        switch (x) {
        case 'I':{
            if (contador>=1){
                resultado++;
            }
            else{
                resultado--;

            }
            contador=1;
            break;
        }
        case 'V':{
            if (contador>=5){
                resultado+=5;
            }
            else{
                resultado-=5;
            }
            contador=5;
            break;
        }
        case 'X':{
            if (contador>=10){
                resultado+=10;
            }
            else{
                resultado-=10;
            }
            contador=10;
            break;
        }
        case 'L':{
            if (contador>=50){
                resultado+=50;
            }
            else{
                resultado-=50;
            }
            contador=50;
            break;
        }
        case 'C':{
            if (contador>=100){
                resultado+=100;
            }
            else{
                resultado-=100;
            }
            contador=100;
            break;
        }
        case 'D':{
            if (contador>=500){
                resultado+=500;
            }
            else{
                resultado-=500;
            }
            contador=500;
            break;
        }
        case 'M':{
            if (contador>=1000){
                resultado+=1000;
            }
            else{
                resultado-=1000;
            }
            contador=1000;
            break;
        }
        }

    }
    cout<<resultado<<endl;
    return 0;
}

