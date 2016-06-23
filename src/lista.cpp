#include "lista.h"
#include "nodo.h"
#include "sell.h"
#include <iostream>
using namespace std;

template <class T>

lista<T>::lista()
{
    primero=ultimo=NULL;
    //ctor
}
template <class T>
void lista<T>::add(T el){
    if (!primero){
        primero=new nodo<T>(el);
        ultimo=primero;
    }
    else{

        ultimo->sig=new nodo<T>(el);
        ultimo=ultimo->sig;

    }
}
template <class T>
void lista<T>::invertir()
{
    nodo<T>* temp;
    nodo<T>* temp3;
    temp3=primero;
    temp=primero;
    while (temp) {
        nodo<T>* temp2;
        temp2=temp;
        temp=temp->sig;
        if (temp==primero){
            temp2->sig=NULL;
        }
        else{
            temp2->sig=primero;
            primero=temp2;

        }
    }
    ultimo=temp3;
}

/*void lista::sumar()
{
    int x;
    int suma=0;
    nodo* temp;
    temp=primero;
    while(temp!=ultimo->sig){
        x=temp->dato;
        suma=suma+x;
        temp=temp->sig;
    }
    cout<<suma<<endl;
}

void lista::ordenar()
{
    int cont=0;
    nodo* temp=primero;
    nodo* temp2;
    int numero;
    int numero2;
    while(temp!=ultimo->sig){
        cont++;
        temp=temp->sig;
    }
    temp=primero;
    for(int i=0;i<cont-1;i++){
        for(int j=0;j<cont-1;j++){
            numero=temp->dato;
            temp2=temp->sig;
            numero2=temp2->dato;
            if (numero2<numero){
                temp->dato=numero2;
                temp2->dato=numero;
            }
            temp=temp->sig;
        }
        temp=primero;
    }

}
*/
template <class T>
void lista<T>::unir(lista h)
{
    ultimo->sig=h.primero;
    ultimo=ultimo->sig;
}
template <class T>
void lista<T>::eliminar(int pos)
{
    nodo<T>* temp=primero;
    nodo<T>* temp2;
    int posi=1;
    if (pos>1){
        while(posi<=pos+1)
        {
            if (posi==pos-1){
                temp2=temp;
                posi++;
            }
            else if (temp==ultimo){
                temp2->sig=NULL;
                ultimo=temp2;
                posi=posi+2;
            }
            else if (posi==pos+1){
                temp2->sig=temp;
                posi++;
            }
            else{
                posi++;
            }
            temp=temp->sig;

        }
    }
    if (pos==1){
        temp=primero;
        temp2=temp->sig;
        primero=temp2;
    }
}
/*
void lista::insertar(int pos, int val)
{
    nodo* temp;
    int posi=0;
    int tempo;
    int tempo2;
    ultimo->sig=new nodo(val);
    ultimo=ultimo->sig;
    temp=primero;
    while(temp!=ultimo->sig)
    {
        if (posi==pos-1){
            tempo=temp->dato;
            temp->dato=val;
            posi++;
        }
        if (posi>pos){
            tempo2=temp->dato;
            temp->dato=tempo;
            tempo=tempo2;
            posi++;
        }
        else
            posi++;
        temp=temp->sig;
    }

}
*/
template <class T>
void lista<T>:: print()
{
    nodo<T>* temp;
    temp=primero;
    while(temp!=NULL){
        cout <<temp->dato<<endl;
        temp=temp->sig;
    }

}
template <class T>
lista<T>::~lista()
{
}
template class lista<sell*>;
template class lista<int>;
template class lista<double>;
