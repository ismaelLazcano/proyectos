#include <iostream>

int particion(int*a, int izq, int der){
    int i = izq, j = der;
    int tmp;
    int pivote = a[(izq+ der) / 2];
    while(i <= j) {
        while(a[i] < pivote)
            i++;
        while(a[j] > pivote)
            j--;
        if(i <= j) {
            tmp= a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        } ;
    };
    return i;
}
void quick_sort(int*a, int prim, int ult) {
    int pivote= particion(a, prim, ult);
    if (prim < pivote-1)
        quick_sort(a, prim, pivote-1);
    if (pivote< ult)
        quick_sort(a, pivote, ult);
}
void mezcla( int *a, int ini, int med, int fin ) {
    int *aux;
    aux = new int[fin - ini + 1];
    int i = ini;
    int j = med + 1;
    int k = 0;

    while( i <= med && j <= fin ) {
        if( a[i] < a[j] ) {
            aux[k] = a[i];
            i++;
        }else {
            aux[k] = a[j];
            j++;
        }
        k++;
    }

    while( i <= med ) {
        aux[k] = a[i];
        i++;
        k++;
    }
    while( j <= fin ) {
        aux[k] = a[j];
        j++;
        k++;
    }

    for( int m=0; m<fin-ini+1; m++ )
        a[ini + m] = aux[m];
    delete [] aux;
}
void merge_sort( int *a, int ini, int fin ) {
    int med;
    if (ini < fin) {

        med = (ini + fin) / 2;
        merge_sort(a, ini, med);
        merge_sort(a, med + 1, fin);
        mezcla(a, ini, med, fin);
    }
}
