#include<conio.h>//Library to know the size of an array.
#include<string.h>//Library to handle the string.
#include<iostream>
using namespace std;
//This function is used to separate the numbers of the letters of a string of characters entered by the user.
int main()
{
    int longitud;
    char arreglo [100]={};
    char arreglo2 [100]={};
    char arreglo3 [100]={};
    int c2=0;
    int c3=0;


    cout<<"ingrese una palabra:"<<endl;
    cin>>arreglo;
    longitud=strlen(arreglo);//It saves the length of the array.

        for(int i=0; i<longitud; i ++)
        {
            if (arreglo[i]<=57 and arreglo[i]>=48)
            {

                arreglo2[c2]=arreglo[i];
                c2++;


            }
            else if ((arreglo[i]<=90 && arreglo[i]>=65) || (arreglo[i]<=122 && arreglo[i]>=97))
            {
                arreglo3[c3]=arreglo[i];
                c3++;

            }
        }
        cout<<"Texto: "<<arreglo3<<"  "<<"Numeros: "<<arreglo2<<endl;


    return 0;
}
