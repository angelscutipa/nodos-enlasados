#include "nodo.h"
#include <iostream>
#include "sell.h"
template <class T>
nodo<T>::nodo(T a)
{
    dato=a;
    sig=NULL;
    //ctor
}
template <class T>
nodo<T>::~nodo()
{
    //dtor
}
template class nodo<sell*>;
template class nodo<int>;
template class nodo<double>;
