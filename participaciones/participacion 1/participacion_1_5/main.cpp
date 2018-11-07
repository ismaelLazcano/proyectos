#include <iostream>
using namespace std;
double F_a_cent(double fare);
int main() {
    double fare;
    cout << "\t\tprograma para combertir grados farenheit a centigrados";
    cout << "\ncual es la temperatura en grados farenheit: ";
    cin >> fare;
    cout << "\nla temperatura equivale a: " << F_a_cent(fare) << " centigrados";
    return 0;
}
double F_a_cent(double fare){
    double aux=0;
    aux = fare -32;
    aux /= 1.8;
    return aux;
}