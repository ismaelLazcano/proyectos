#include <iostream>

using namespace std;

struct numeros{
    int num;
    numeros *siguiente;

};
int main() {
    numeros *p, *q;
    p = NULL;
    for (int i = 0; i < 4; i++ ) {
        q = new numeros;
        q->num = i;
        q->siguiente = q;
        if(p == NULL)
            p = q;
        q->siguiente = p->siguiente;
        p->siguiente = q;
    }
    do{
        cout << "el numero es: " << q->num << endl;
        q = q->siguiente;
    }while (q->num != 0);

    do{
        q = p->siguiente;
        delete p;
    }while (p->num != 0);
    return 0;
}
