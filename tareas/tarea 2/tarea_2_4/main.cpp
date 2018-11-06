#include <iostream>

using namespace std;

int main()
{
   double x = 30;
   double y = 45;

   double *ptr1 = &x;
   double *ptr2 = &y;

   double **ptr3 = &ptr1;

   x = *ptr1 + x;

    *ptr2 = (y*3) + (**ptr3 *3);

    *ptr3 = &y;

    ptr3 = &ptr2;

    *ptr3 = &x;

    **ptr3 = (*ptr1 * x) - *ptr2;

    //falta un la diferencia de lo que apunta ptr2 menos el producto de lo que apunta ptr1 por x

    cout << "el numero es: "<< x << " el otro es: "<< y <<endl;

    return 0;
}
