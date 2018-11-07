#include <iostream>
#include "busquedas.h"
using namespace std;

int main() {
    int arreglo[10];
    int b;
    cout << "Bienvenido a la busqueda por mergeSort y Quicksort" << endl;
    cout << "el arreglo es de tamanio 10" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "dame valor " << i << " : " << endl;
        cin >> arreglo[i];
    }
    for (int j = 0; j < 10; ++j) {
        cout << "el valor es: " << arreglo[j] << endl;
    }

    cout << "Que tipo de busqueda te gustaria aplicar\n1.-MergeShort\n2.-QuickSort\nElige opcion: ";
    cin >> b;
    switch(b){
        case 1:quick_sort(arreglo,0,10);
            cout << "el arreglo acomodado es: " << endl;
            for (int i = 0; i < 10; ++i) {
                cout << "valor: " << arreglo[i] << endl;
            }
            break;
        case 2:
                merge_sort(arreglo,0,10);
            for (int i = 0; i < 10; ++i) {
                cout << "valor: " << arreglo[i] << endl;
            }
            break;
        default: cout << "\nEsa opcion no esta en el menu";
    }
    return 0;
}
