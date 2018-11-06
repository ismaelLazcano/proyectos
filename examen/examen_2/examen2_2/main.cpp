#include <iostream>
using namespace std;
void bBinaria(int a[],int inicio,int final,int clave);
void bbin(int *a,int tam,int clave);
int main() {
    int arreglo[10],b,c;
    cout << "Bienvenido a la Busqueda binaria recursiva" << endl;
    for (int i = 0; i < 10; ++i) {
       arreglo[i] = i;
    }
    cout << "que valor te gustaria buscar";
    cin >> b;
    bBinaria(arreglo,0,10,b);
    bbin(arreglo,10,b);
    return 0;
}

void bbin(int *a,int tam,int clave){
    int  lmedio,linf = 0,lsup = tam;
    do {
        lmedio = (linf + lsup) / 2;
        if (a[lmedio] < clave)
            linf = lmedio + 1;
        else
            lsup = lmedio - 1;
    } while (a[lmedio] != clave && linf <= lsup);
    if (a[lmedio] == clave)
        cout << "el numero esta en la posicon " << lmedio;
    else
        cout << "el numero no fue encontrado";
}
void bBinaria(int a[],int inicio,int final,int clave){
    int lmedio,linf = inicio,lsup = final;
        if(a[lmedio] == clave || linf >= lsup)
            return;
    lmedio = (linf + lsup)/2;
    if(a[lmedio] < clave)
        linf = lmedio + 1;
    else
        lsup = lmedio - 1;
        bBinaria(a,linf,lsup,clave);

    if(a[lmedio] == clave)
        cout << "numero esta en la posicion " << lmedio << endl;
    else
        cout << "numero no encontrado";
}

















