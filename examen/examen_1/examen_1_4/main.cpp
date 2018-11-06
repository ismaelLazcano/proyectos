#include <iostream>
#include <cstring>


bool resp();

using namespace std;

int respuesta();

struct lista{

    char nombre[30];
    float precio;
    double cantidad;
    lista *link;

};

int main()
{
    int a;
    lista *auxiliar,*inicio;

    auxiliar = NULL;

    cout << "desea agregar mas listas 1=si 0=no: ";
    cin >> a;
    while(a == 1){// creamos listas
        inicio = new lista;

        cout << "\ndame nombre: ";
        cin >> inicio->nombre;
        cout << "\ndame precio: ";
        cin >> inicio->precio;
        inicio->precio += inicio->precio * 0.16666;
        cout << "\ndame cantidad: ";
        cin >> inicio->cantidad;

        inicio ->link = auxiliar;
        auxiliar = inicio;
        cout << "\ndesea agregar mas listas 1=si 0=no: "; //auxiliar = p
        cin >> a;
    }
    inicio = auxiliar;

    while(inicio != NULL){//imprimimos elementos
        cout << "\nel nombre es: " <<inicio->nombre;
        cout << "\nel precio es: " << inicio->precio;
        cout << "\nhay: " << inicio->cantidad;
        inicio = inicio->link;
    }

    while(auxiliar != NULL){//eliminamos memoria
        inicio = auxiliar->link;
        delete auxiliar;
        auxiliar = inicio;
    }





}


