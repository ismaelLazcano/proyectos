#include <iostream>

using namespace std;

int main()
{
    int a,b,res;
    int *p;
    int *x;

    //pido datos
    cout << "dame numero para sumarlo: " << endl;
    cin >> a;
    cout << "dame otro numero: " << endl;
    cin >> b;

    //asignacion de memoria
    p = &a;
    x = &b;

    //suma con apuntadores
    res = *p + *x;

    //impresion de suma
    cout << "la suma es: " << res << endl;



    return 0;
}
