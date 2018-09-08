#include <iostream>

using namespace std;

double promedio=0;
double suma=0;
double a=0;
void fun_c(double *a, int n, double *promedio, double *suma);
int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fun_c(&a, 10,&promedio,&suma);
}
void fun_c(double *a, int n, double *promedio, double *suma){
    int i;
    *suma = 0.0;
    for (i = 0; i < n; i++){

        *suma += (*a + i);
        *promedio = *suma / n;
    }
    cout<<"el promedio del arreglo es"<<*promedio<<endl;

}

