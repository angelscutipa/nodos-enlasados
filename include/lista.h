#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include "sell.h"
template<class T>

class lista
{
    public:
        nodo<T>* primero;
        nodo<T>* ultimo;
        lista();
        void add(T);
        void invertir();
        //void sumar();
        //void insertar(int pos, int val);
        void eliminar(int pos);
        //void ordenar();
        void unir(lista a);
        void print();
        virtual ~lista();
    protected:
    private:
};

#endif // LISTA_H
