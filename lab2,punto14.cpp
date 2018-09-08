#include <iostream>

using namespace std;

int main()
{
    int matriz[5][5];//Original matrix.
    int grados[5][5];//Rotated matrix.
    int recuerdo=0, G=90,g=0,contador=0,a=5,lugar=01;
    for(int i=0;i<5;i++){//In these two for the rows and columns of the matrix are covered filling the spaces with the numbers from 1-25.
        for(int c=0;c<5;c++){
            matriz[i][c]=lugar;
            lugar++;
        }
    }

    for(int filas=0;filas<5;filas++){//These for print the original matrix.
        cout<<endl;
        for(int columnas=0;columnas<5;columnas++){
            cout<<" "<<matriz[filas][columnas]<<" ";
        }
    }
    cout<<endl;
    cout<<endl;
    recuerdo=a;
    a=4;
    while(contador<3){//The cycle is executed three times that it needs to be rotated.
        cout<<"matriz dada girada a "<<G<<" grados"<<endl;
        for(int f=0;f<5;f++){
            for(int l=0;l<5;l++){//The rotated matrix is created, taking into account the position of the numbers in the original matrix.

                grados[f][l]=matriz[a][g];
                if(G==180){
                    g--;
                }
                else if(G==270){
                    a++;
                }
                else {
                    a--;
                }

            }
            if(G==180){
                g=recuerdo-1;
                a--;
            }
            else if(G==270){
                g--;
                a=0;
            }
            else{
                a=recuerdo-1;
                g++;
            }


        }
        for(int filas=0;filas<5;filas++){
            cout<<endl;
            for(int columnas=0;columnas<5;columnas++){
                cout<<" "<<grados[filas][columnas]<<" ";
            }
        }
        cout<<endl;
        cout<<endl;
        contador++;
        G+=90;
        if(G==180){
            a=4;
            g=4;
        }

        else{
            a=0;
            g=4;
        }
    }


    return 0;
}
