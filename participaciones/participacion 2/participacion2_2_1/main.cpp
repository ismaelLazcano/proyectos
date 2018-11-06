#include <iostream>
using namespace std;
int main() {
    int arreglo[20];
    int a;
    int i = 0;
    cout << "Busqueda secuencial!" << endl;
    for (int i = 0; i < 20; ++i) {
        cout << "Dame valor de arreglo: " << endl;
        cin >> arreglo[i];
    }
    cout << "dame valor a buscar " << endl;
    cin >> a;
    while(i < 20){
        if(a == arreglo[i])
            cout << "numero encontrado en posicion: " << i;
        else if(a != arreglo[i] && i == 19)
            cout << "valor no encontrado";
        i++;
    }
    return 0;
}