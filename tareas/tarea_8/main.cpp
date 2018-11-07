#include <iostream>
#include "ordenar.h"
using namespace std;
int main() {
    int *arr,num1,op;
    cout << "Antes de empezar a ordenar dame tamanio de matriz" << endl;
    cin >> num1;
    arr = new int [num1];
    inicializaLista(arr,num1);
    do {
        cout << "\nExcelente, ahora que tipo de busqueda te gustaria realizar\n1.-Intercambio"
             << "\n2.-Seleccion\n3.-Interseccion\n4.-Burbuja\n5.-Imprime matriz\nSi eliges imprimir matriz se repetira el menu para que puedass ordenar";
        cin >> op;
        switch (op) {
            case 1:
                metodoIntercambio(arr, num1);
                cout << "Lista ordenada!"<< endl;
                for (int i = 0; i < num1; i++) {
                    cout << "[" << arr[i] << "]";
                }
                break;
            case 2:
                metodoInterseccion(arr, num1);
                cout << "Lista ordenada!"<< endl;
                for (int i = 0; i < num1; i++) {
                    cout << "[" << arr[i] << "]";
                }
                break;
            case 3:
                metodoInterseccion(arr, num1);
                cout << "Lista ordenada!"<< endl;
                for (int i = 0; i < num1; i++) {
                    cout << "[" << arr[i] << "]";
                }
                break;
            case 4:
                metodoBurbuja(arr, num1);
                cout << "Lista ordenada!"<< endl;
                for (int i = 0; i < num1; i++) {
                    cout << "[" << arr[i] << "]";
                }
                break;
            case 5:
                cout << "Lista desordenada!" << endl;
                for (int i = 0; i < num1; i++) {
                    cout << "[" << arr[i] << "]";
                }
                break;
            default:
                cout << "Esa opcion no esta en el menu";
        }
    }while(op == 5);
    if(arr != NULL){
        delete [] arr;
    }
    return 0;
}