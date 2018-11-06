#include <iostream>
using namespace std;
struct pila{
    double num;
    pila *enlace;
};
int main() {
    pila *p,*q;
    p = NULL;
    for (int i = 0; i < 6; ++i) {
        q = new pila;
        q->num = 0;
        q->enlace = p;
        p = q;
    }
    q = p;
    while(q != NULL){
        cout << "el elemento es: " << q->num << endl;
        q = q->enlace;
    }
    while(p != NULL){
        q = p->enlace;
        delete p;
        p = q;
        }
    return 0;
}