#include <iostream>
using namespace std;
struct pilaA{
    int valor;
    pilaA *enlace;
};
struct pilaB{
    int valor;
    pilaB * enlace;
};
int main() {
    int a;
    pilaA *p,*q,*q1;
    pilaB *m,*n,*q2;
    p = NULL;
    m = NULL;

    cout << "\t\tBienvenido a la copia de pilas"<< endl;
    cout << "de que tamanio es la pila?";
    cin >> a;
    cout << "Excelente gracias!" << endl;
    for (int i = 0; i < a; ++i) {
        q = new pilaA;
        cout << "dame valor de la pila " << i << " : " << endl;
        cin >> q->valor;
        q->enlace = p;
        p = q;
    }
    q = p;
    cout << "\t\tCopiando listas" << endl;
    for (int j = 0; j < a; ++j) {
        n = new pilaB;
        n->valor = q->valor;
        n->enlace = m;
        m = n;
        q = q->enlace;
    }
    q1 = p;
    q2 = m;
    cout << "valores copiados: " << endl;
    for (int k = 0; k < a; ++k) {
        cout << "pilaA  valor: " << q1->valor;
        cout << "\tpilaB valor: " << q2->valor << endl;
        q1 = q1->enlace;
        q2 = q2->enlace;
    }

    while(p != NULL){
        q = p->enlace;
        delete p;
        p = q;
    }
    while(m != NULL){
        n = m->enlace;
        delete m;
        m = n;
    }
    return 0;
}
/*
 * los datos de PilaA serian
 *  cell4
 *  cell3
 *  cell2
 *  cell1
 *  en la PilaB serian
 *  cell1
 *  cell2
 *  cell3
 *  cell4
 *
 */