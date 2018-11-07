#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;
    cout<<"cuantas veces quieres sumar: ";
    cin>>b;
    for(int i=0;i<b;i++){

    cout<<"dame numero: "<<endl;
    cin>>a;

    c += a;
    }
    cout<<"la suma es: "<<c;

    return 0;
}
