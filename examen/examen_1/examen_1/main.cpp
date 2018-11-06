#include <iostream>

using namespace std;

int main()
{
    float *x,*y,*z;
    float m,n;

    x = &m;
    y = &m;
    z = &n;

    *y = 75;
    *z = 100;
    *x = ((*y)*3 + (*z)*2);

    cout << "la variable m es: " << m << " la variable n es: " << n;



    return 0;
}
