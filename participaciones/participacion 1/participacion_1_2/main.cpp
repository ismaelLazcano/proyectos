#include <iostream>
using namespace std;
int main() {
    int *pointer_int,a,x = 7;
    float *pointer_float,b,y = 40;

    pointer_int = &x;
    cout << "\nel contenido de x es: " << x;
    cout << "\nla direccion de x es: " << &x;
    cout << "\npointer_int contiene: " << pointer_int;
    cout << "\npointer_int apunta a: " << *pointer_int;
    pointer_float = &y;
    cout << "\nel contenido de y es: " << y;
    cout << "\nla direccion de y es: " << &y;
    cout << "\npointer_float contiene: "<< pointer_float;
    cout << "\npointer_float apunta a: "<< *pointer_float;
    a = *pointer_int;
    b = *pointer_float;
    cout << "\na es: " << a << " b es: " << b;
    return 0;
}