#include "burbuja.h"

burbuja::burbuja(int* a, int x)
    :sell(a,x)
{
    lista=a;
    tamano=x;
    //ctor
}

void burbuja::ordenar(){
    int temp;
    for (int i=0; i<tamano-1;i++){
        for (int j=0; j<tamano-1;j++){
            if (lista[j]>lista[j+1]){
                temp=lista[j];
                lista[j]=lista[j+1];
                lista[j+1]=temp;
            }
        }
    }
}

burbuja::~burbuja()
{
    //dtor
}
