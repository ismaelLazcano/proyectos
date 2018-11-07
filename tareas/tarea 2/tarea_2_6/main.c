#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int num,i=0;
  int arreglo[15];
  int *p;

  srand(time(NULL));


  for(i=0;i<15;i++){
    num = 1 + rand() % ((10 + 1) - 1);
    arreglo[i] = num;
  }
  p = &arreglo;
  for(i=0;i<15;i++){
    printf("| %d |",p[i]);

  }
  printf("\nla memoria que ocupa la posicion 8 es: %d",&p[7]);
  printf("\nla memoria que ocupa la posicion 12 es: %d",&p[11]);

    return 0;
}
