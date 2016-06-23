#ifndef INSERTION_H
#define INSERTION_H

#include <sell.h>


class insertion : public sell
{
    public:
        insertion(int* a, int x);
        void ordenar();
        virtual ~insertion();
    protected:
    private:
};

#endif // INSERTION_H
