#include <iostream>

using namespace std;

int main()
{
    double *a;
    int c;
    double *b;

   cout << "dame tamaño de arreglo: ";
   cin >> c;


   a = new double [c];
   b = new double [c];

    for(int i = 0;i < c;i++){
        cout << "\ndame valor de arreglo: ";
        cin >> a[i];
        b[i] = a[i]*2;
    }

    for(int i = 0;i < c;i++){
        cout << "\nvalor de A: " << a[i];
    }
    cout <<"\n";
    for(int i = 0;i < c;i++){
        cout << "\nvalor de B: " << b[i];
    }

    if(a != NULL){
        delete [] a;
        }
    if(b != NULL){
        delete [] b;
    }

    return 0;
}
