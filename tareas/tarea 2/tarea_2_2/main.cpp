#include <iostream>

using namespace std;

int main()
{
    int *a;
    int *b;
    int *c;
    int i=0;
    int j=0;

    a = &i;
    b = &i;
    c = &j;

    *b = 4;
    *c = 3;

    *a = (i+j)*2;

    cout << "la variable i vale: " << i << " la letra j vale: " << endl;

    return 0;
}
