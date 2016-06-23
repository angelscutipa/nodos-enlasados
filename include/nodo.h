#ifndef NODO_H
#define NODO_H
#include "sell.h"

template <class T>

class nodo
{
    public:
        T dato;
        nodo<T>* sig;
        nodo(T);
        virtual ~nodo();
    protected:
    private:
};

#endif // NODO_H
