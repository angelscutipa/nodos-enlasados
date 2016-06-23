#include "sell.h"

#include <iostream>
using namespace std;


sell::sell(int* a, int x)
{
    lista=a;
    tamano=x;
    //ctor
}
void sell::print()
{
    for (int i=0; i<tamano; i++){
        cout<<lista[i]<<" ";
    }
}
sell::~sell()
{
    //dtor
}
