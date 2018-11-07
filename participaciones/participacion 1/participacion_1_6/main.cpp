#include <iostream>
using namespace std;
float promedio(float calificaciones[]);
int main() {
    float calificacione[7];
    for (int i = 0; i < 7; ++i) {
        cout << "dame promedio";
        cin >> calificacione[i];
    }
    cout << "tu promedio es de: " << promedio(calificacione);
    return 0;
}
float promedio(float calificaciones[]){
    float prom;
    for (int i = 0; i < 7; ++i) {
        prom += calificaciones[i];
    }
    return prom/7;
}