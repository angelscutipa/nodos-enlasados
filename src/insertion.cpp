#include "insertion.h"

insertion::insertion(int* a, int x)
    :sell(a,x)
{
    lista=a;
    tamano=x;
    //ctor
}

void insertion::ordenar()
{
    for (int i=0;i<tamano-1;i++){
        for(int j=i;j<tamano;j++)
            if(lista[j]<lista[i]){
                int temp = lista[i];
                lista[i]=lista[j];
                lista[j]=temp;
            }
    }
/*
    int temp, j;
    for (int i=0; i<tamano-1; i++){
        j=i;
        temp=lista[i];
        for (int a=i; a>0; a--){
            if (lista[i]>=lista[a]){
                lista[a]=temp;
                a=0;
            }
            if (lista[i]<lista[a]){
                lista[a]=lista[a-1];
            }
        }

    }
*/
}
insertion::~insertion()
{
    //dtor
}

