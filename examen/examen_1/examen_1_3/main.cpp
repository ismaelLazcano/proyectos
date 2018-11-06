#include <iostream>

using namespace std;

int main()
{
    char **matriz;
    int n,m;

    cout << "dame tamanio de la matriz, filas: ";
    cin >> n;
    cout << "\ncolumnas: ";
    cin >> m;

    matriz = new char *[n];
    for(int i = 0;i < n;i++){
        matriz[i] = new char[m];
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout << "dame letra de matriz: ";
            cin >> matriz[i][j];
        }
    }
    cout << "matriz normal\n";
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout << " " << matriz[i][j];
        }
        cout << "\n";
    }
    cout << "\nmatriz transpuesta\n";
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout << " " << matriz[j][i];
        }
        cout << "\n";
    }


    if(matriz != NULL){
        for(int i = 0;i < n;i++){
            if(matriz[i] != NULL)
            delete [] matriz[i];
        }
        delete [] matriz;
    }

    return 0;
}
