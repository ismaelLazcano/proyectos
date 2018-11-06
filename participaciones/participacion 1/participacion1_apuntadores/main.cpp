#include <iostream>

using namespace std;

int main()
{
    double a = 100,b = 200;
    double *p1;
    double *p2;
    double **p3;

    p1 = &a;
    p2 = &b;

    p3 = &p2;

    a = *p1 + (b)*2;

    *p2 = (a + **p3)*3;

    *p3 = &b;
    p3 = &p2;
    *p3 = &a;
    **p3 = (*p1 * b) - *p2;

    cout << "los valores son: " << a << " y: " << b << endl;

    return 0;
}
