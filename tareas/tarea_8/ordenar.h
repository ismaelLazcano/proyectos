//
// Created by ismal on 20/03/2018.
//
#include <iostream>
using namespace std;

void inicializaLista(int *p,int tam1){
    for(int i = 0;i < tam1;i++){
        cout << "Dame valor de matriz posicion [" << i <<"]: ";
        cin >> p[i];
    }
}
void metodoIntercambio(int *p,int tam1){
    int temp;
    for (int i = 0; i < tam1-1; ++i) {
        for (int j = i+1; j < tam1; ++j) {
            if( p[i] > p[j]){
                temp= p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}
void metodoInterseccion(int *p,int tam1){
    int menor, temp, indice, n=6;
    for( int i= 0; i < tam1-1; i++){
        menor = p[i];
        indice= i;
        for(int j = i+1; j < tam1; j++){
            if(menor > p[j]){
                menor = p[j];
                indice= j;
            };
        };
        temp= p[i];
        p[i] = menor;
        p[indice] = temp;};
}
void metodoInsercion(int *p,int tam1){
    int j, temp;
    for( int i= 1; i < tam1; i++){
        temp= p[i];
        for( j = i-1; j>=0 && temp< p[j]; j--)
            p[j+1] = p[j];

        p[j+1] = temp;
    }
}
void metodoBurbuja(int *p,int tam1){
    int temp;
    for (int i = 0; i < tam1; ++i) {
        for (int j = 0; j < tam1 - 1; ++j) {
            if(p[j] > p[j+1]){
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}