#include <iostream>

using namespace std;

int main()
{
    int a;
    int *ptr;

    ptr = &a;

    *ptr = 24;

    cout<<a;

    return 0;
}
