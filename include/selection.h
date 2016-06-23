#ifndef SELECTION_H
#define SELECTION_H

#include <sell.h>


class selection : public sell
{
    public:
        selection(int* a, int x);
        void ordenar();
        virtual ~selection();
    protected:
    private:
};

#endif // SELECTION_H
