//
// Created by ismal on 06/03/2018.
//
#include <iostream>
using namespace std;
void inicializaLista(int *arr,int tam){
    for(int i = 0;i < tam;i++) {
        cout << "dame valor de lista posicion " << i << " : ";
        cin >> arr[i];
    }
}
void imprimeLista(int *arr,int tam){
    for(int i = 0;i < tam;i++){
        cout << "[ " << arr[i] << " ]";
    }
}
void busquedaBinaria(int *arr,int tam,int clave){ //tiene que estar ordenada la lista
    int  lmedio,linf = 0,lsup = tam;
    do {
        lmedio = (linf + lsup) / 2;              // división entera
        if (arr[lmedio] < clave)
            linf = lmedio + 1;
        else
            lsup = lmedio - 1;
    } while (arr[lmedio] != clave && linf <= lsup);
    if (arr[lmedio] == clave)
        cout << "\nel numero esta en la posicon " << lmedio;
    else
        cout << "\nel numero no fue encontrado";
}
void busquedaSecuencial(int *arr,int tam,int clave){ //lista  puede estar desordenada
    char c= 'f';
    int d=0;
    for(int i = 0;i < 20;i++){
        if(clave == arr[i]){
            c = 'v';
            d = i;
        }
    }
    if(c == 'v'){ //a esto se le llama banderear
        cout << "valor encontrado en posicion " << d;
    }else{
        cout << "valor no encontrado";
    }
}
bool ayuda(){
    char resp;
    cout << "\nQuieres realizar una busqueda secuencial? s/n: ";
    cin >> resp;
    return resp == 's' || resp  == 'S';
}
bool validaLista(int *arr,int tam){
    char c = 'f';
    for (int i = 0; i < tam-1; i++) {
        if (arr[i] >= arr[i + 1]) {
            return false;
        } else {
            c = 'v';
        }
    }
    return c == 'v';
}