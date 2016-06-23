#include "selection.h"

#include <iostream>
using namespace std;
selection::selection(int* a, int x)
    :sell(a,x)
{
    lista=a;
    tamano=x;
    //ctor
}
void selection::ordenar()
{
    int temp=0, j;
    for (int i=0; i<tamano-1; i++){
        temp=i;
        for(j=i; j<tamano-1; j++){
            if (lista[temp]>lista[j]){
                temp=j;
            }
        }
        if (temp!=i){
            temp=lista[temp];
            lista[j]=lista[i];
            lista[i]=temp;
        }

    }
}
selection::~selection()
{
    //dtor
}
