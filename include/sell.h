#ifndef SELL_H
#define SELL_H


class sell
{
    public:
        int* lista;
        int tamano;
        sell(int* a, int x);
        void print();
        void invertir();
        void buscar();
        virtual void ordenar()=0;
        virtual ~sell();
    protected:
    private:
};

#endif // SELL_H
