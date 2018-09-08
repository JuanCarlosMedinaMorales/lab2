#include <iostream>

using namespace std;

int main()
{
   int n,sumatoria=0,recordatorio=0,confirmacion=0;
   cout<<"ingrese el tamaño de ma la triz cuadrada deseada(porfavor solo ingresar un numero): "<<endl;
   cin>>n;
   int matriz[n][n];
   for(int i=0;i<n;i++){
       for(int c=0;c<n;c++){
           cout<<"ingresse la posicion ["<< i <<"] ["<< c <<"]: ";
           cin>>matriz[i][c];
       }
   }
   for(int filas=0;filas<n;filas++){
       cout<<endl;
       for(int columnas=0;columnas<n;columnas++){
           cout<<" "<<matriz[filas][columnas]<<" ";
       }
   }
   cout<<endl;
   cout<<endl;
   for(int f=0;f<n;f++){
       for(int co=0;co<n;co++){
           sumatoria+=matriz[f][co];
       }
       if (f==0){
           recordatorio=sumatoria;
       }
       else if (recordatorio!=sumatoria){
           confirmacion=1;
           cout<<"la matriz ingrzada no es un cuadrado magico "<<endl;
           break;
       }
       sumatoria=0;
   }
   if(confirmacion!=1){
       for(int co=0;co<n;co++){
           for(int f=0;f<n;f++){
               sumatoria+=matriz[f][co];
           }
           if (recordatorio!=sumatoria){
               confirmacion=1;
               cout<<"la matriz ingrzada no es un cuadrado magico "<<endl;
               break;
           }
           sumatoria=0;
       }

   }
   if(confirmacion!=1){
       for(int d=0;d<n;d++){
           sumatoria+=matriz[d][d];
       }
       if (recordatorio!=sumatoria){
           confirmacion=1;
           cout<<"la matriz ingrzada no es un cuadrado magico "<<endl;

       }
       else{
           cout<<"la matriz si corresponde a la descripccion de cuadrado magico"<<endl;
       }

   }
    return 0;
}
