#include <iostream>
#include "sell.h"
#include "insertion.h"
#include "burbuja.h"
#include "selection.h"
#include "lista.h"
using namespace std;
int main()
{
    int tam;
    cout<<"ingrese la cantidad de datos: "<<endl;
    cin>>tam;
    int * a=new int[tam];
    cout<<"ingrese los datos: "<<endl;
    for (int i=0; i<tam;i++){
        cin>>a[i];
    }
    int tam2;
    cout<<"ingrese la cantidad de datos: "<<endl;
    cin>>tam2;
    int * c=new int[tam2];
    cout<<"ingrese los datos: "<<endl;
    for (int i=0; i<tam2;i++){
        cin>>c[i];
    }
    int tam3;
    cout<<"ingrese la cantidad de datos: "<<endl;
    cin>>tam3;
    int * b=new int[tam3];
    cout<<"ingrese los datos: "<<endl;
    for (int i=0; i<tam3;i++){
        cin>>b[i];
    }
   // sell azul;
    //sell ab(a,tam);
    sell* ab=new insertion(a,tam);
    sell* ac=new burbuja(c,tam2);
    sell* ad=new selection(b,tam3);
    cout<<"insertar: "<<endl;
    ab->ordenar();
    ab->print();
    cout<<"burbuja: "<<endl;
    ac->ordenar();
    ac->print();
    cout<<"seleccion: "<<endl;
    ad->ordenar();
    ad->print();
    cout <<"vamos con las listas enlasadas: "<< endl;
    lista<sell*> test;
    test.add(ab);
    test.add(ac);
    test.add(ad);
    test.print();
    return 0;
}
