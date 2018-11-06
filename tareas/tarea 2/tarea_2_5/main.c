#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = {65,4,3,4,5,6,7,23,9,12};
    int i=0;
    int *p;

    p = &a;

    for( i = 0;i < 10; i++){

        printf("\nlos valores son: %d",p[i]);
        printf("\nla direccion es: %p",&p[i]);
    }


    return 0;
}
