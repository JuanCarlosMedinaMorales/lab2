#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;
// This function prints 200 random letters, and quantifies them according to the alphabet.
int main()
{
    int num, c;
    char letra;
    char arreglo []={};
    char abc;
    int contador=0;

    srand(time(NULL));

    for(c = 0; c <200; c++)
    {
        num = 65 + rand() % (89 - 65);//You get a random letter.
        letra= num;
        arreglo[c]=letra;
        cout<<letra<<" ";

    }
    abc=65;
    c=0;
    contador=0;
    for(int contador3= 0; contador3 <=50; contador3++)
    {
        for(int i=0; i<=200; i ++)//In this cycle the arrangement of random letters is traversed, comparing each letter of the alphabet to be counted.
        {
            if (arreglo[i]==abc)
            {
                char a=0;
                a=arreglo[i];
                contador++;
            }
        }
     cout<<endl<<abc<<"="<<contador<<endl;
        abc ++;
        contador3++;
        contador=0;
    }
    return 0;
}
