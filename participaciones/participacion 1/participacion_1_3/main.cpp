#include <iostream>
using namespace std;
int main() {
    int matriz[10][10];
    int **arra,tam,tamd,op;
    cout << "que opcion deseas\n1.-memoria estatica\n2.-memoria dinamica\ningresa opcion: ";
    cin >> op;
    switch (op) {
        case 1: for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                matriz[i][j] = i + j;
            }
        }
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cout << "\nlos datos son: " << matriz[i][j];
            }
        }
            break;
        case 2:
            cout << "de que tamanio quieres la matriz dinamica: ";
        cin >> tam;
        cout << "de que tamanio quieres las columnas de la matriz: ";
        cin >> tamd;
        arra = new int *[tam];
        for (int i = 0; i < tam; i++) {
            arra[i] = new int[tamd];
        }

        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tamd; ++j) {
                arra[i][j] = i + j;
            }
        }
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tamd; ++j) {
                cout << "\nvalores: " << arra[i][j];
            }
        }

        if (arra != NULL) {
            for (int i = 0; i < tam; ++i) {
                if (arra[i] != NULL) {
                    delete[] arra[i];
                }
            }
            delete[] arra;
        }
            break;
        default: cout << "esa opcion no esta en el menu";
    }
    return 0;
}