#include <iostream>

void copiaArreglo(int arreglo[10],int arreglo_2[10]);
using namespace std;

int main()
{
    int arreglo_1[10];
    int arreglo_2[10];
    int i=0;

    while(i < 10){
        cout << "dame numero para arreglo 1 : " << endl;
        cin >> arreglo_1[i];
        i++;
    }
    i=0;
     while(i < 10){
        cout << "dame numero para arreglo 2 : " << endl;
        cin >> arreglo_2[i];
        i++;
    }

    copiaArreglo(arreglo_1, arreglo_2);

    return 0;
}

void copiaArreglo(int arreglo[10],int arreglo_2[10]){

    for(int i=0;i<10;i++){
        cout << "| " << arreglo[i] << " |";
    }
    cout << "\n";
    for(int i=0;i<10;i++){
        cout << "| " << arreglo_2[i] << " |";
    }
    cout << "\n";
    cout << "la copia del arreglo es: "<<endl;
    for(int i=0;i<10;i++){
        arreglo_2[i] = arreglo[i];
    }
    for(int i=0;i<10;i++){
        cout << "| " << arreglo_2[i] << " |";
    }
}
