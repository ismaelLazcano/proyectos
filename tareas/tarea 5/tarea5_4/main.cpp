#include <iostream>

using namespace std;

struct numeros{
    int numero;
    numeros *anterior;
    numeros *siguiente;

};
int main() {
    numeros *p, *q;
    p = NULL;
    for (int i = 0; i < 3; i++) {
        q = new numeros;
        q->numero = i;
        q->siguiente = p;
        q->anterior = NULL;
        if (p != NULL)
            p->anterior = q;
        p = q;
    }
    while (q->siguiente != NULL) {
        cout << "el numero es: " << q->numero << endl;
        q = q->siguiente;
    };

    while(p->siguiente != NULL){
    q = p->siguiente;
    delete p;
}
    return 0;
}
