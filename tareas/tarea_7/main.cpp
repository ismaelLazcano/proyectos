#include <iostream>
#include "funciones.h"
using namespace std;
int main() {

        int *arr, tam, opcion, clave;
    do{
    cout << "\nDame tamanio de arreglo: ";
        cin >> tam;
        arr = new int[tam];
        inicializaLista(arr, tam);
        cout << "Que te gustaria hacer?\n1.-Busqueda binaria\n2.-Busqueda secuencial";
        cout << "\n3.-Impresion de lista\n4.-Salir\nIngresa opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                if (validaLista(arr, tam)) {
                    cout << "que valor quieres buscar?: ";
                    cin >> clave;
                    busquedaBinaria(arr, tam, clave);
                } else {
                    cout << "\nLista desordenada!";
                    if (ayuda()) {
                        cout << "que valor quieres buscar?: ";
                        cin >> clave;
                        busquedaSecuencial(arr, tam, clave);
                    }
                }
                break;
            case 2:
                cout << "Que valor quieres buscar?: ";
                cin >> clave;
                busquedaSecuencial(arr, tam, clave);
                break;
            case 3:
                imprimeLista(arr, tam);
                break;
            case 4:
                break;
            default:
                cout << "La opcion elegida no esta en el menu!";
        }

        if (arr != NULL) {
            delete [] arr;
        }
    }while (opcion != 4);
    return 0;
}