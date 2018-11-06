#include <stdio.h>
#include <stdlib.h>

int copiaArreglo(int *p[10], int *arreglo[10]);

int main()
{
    int arreglo_1[10];
    int arreglo_2[10];
    int i;

    for(i = 0; i<10; i++)
    {
        printf("dame numero para arreglo 1: ");
        scanf("%d",&arreglo_1[i]);
    }
    for(i = 0; i<10; i++)
    {
        printf("dame numero para arreglo 2: ");
        scanf("%d",&arreglo_2[i]);
    }

   copiaArreglo(&arreglo_2,&arreglo_1);

    for(i=0;i<10;i++){
       printf("\n%d",arreglo_2[i]);
    }
    return 0;
}

int copiaArreglo(int *p[10],int *arreglo[10]){
    int i;
    for(i=0;i<10;i++){
        p[i] = arreglo[i];
    }
}
