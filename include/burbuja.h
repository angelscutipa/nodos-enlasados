#ifndef BURBUJA_H
#define BURBUJA_H

#include <sell.h>


class burbuja : public sell
{
    public:
        burbuja(int* a, int x);
        void ordenar();
        virtual ~burbuja();
    protected:
    private:
};

#endif // BURBUJA_H
