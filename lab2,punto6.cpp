#include<conio.h>//Library to know the size of an array.
#include<string.h>//Library to handle the string.
#include<iostream>
using namespace std;
//This function is used to convert the letters of an array entered in upper case.
int main()
{
    int longitud;
    char letra;
    char arreglo [20]={};


    cout<<"ingrese una palabra:"<<endl;
    cin>>arreglo;
    longitud=strlen(arreglo);//It shows the length of the array.
        for(int i=0; i<longitud; i ++)
        {
            letra=arreglo[i];
            if (arreglo[i]<=122 and arreglo[i]>=97)
            {

                arreglo[i]=arreglo[i]-32;
                letra=arreglo[i];

                cout<<letra;

            }
            else
            {
                letra=arreglo[i];
                cout<<letra;
            }
        }
        cout<<endl;
        return 0;
    }

