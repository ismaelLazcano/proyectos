#include <iostream>
using namespace std;
struct arbol{
    int dato;
    arbol *hijo_izquierdo;
    arbol *hijo_derecho;
};
bool hay_hijo(int n);
arbol *constryeArbol();
void talar(arbol *p);
void preorden(arbol *p);
void entreOrden(arbol *p);
void postOrden(arbol *p);
arbol *p,*q;
int main() {

    cout << "hola buenvenido al arbol binario"<< endl;
    p = NULL;
    q =  constryeArbol();
    cout << "arbol en pre-orden" << endl;
    preorden(q);
    cout << "arbol en entre-Orden" << endl;
    entreOrden(q);
    cout << "arbol en post-Orden" << endl;
    postOrden(q);
    talar(q);
    return 0;
}
arbol *constryeArbol() {
    arbol *raiz;
    raiz = new arbol;
    cout << "dato?: ";
    cin >> raiz->dato;
    raiz->hijo_derecho = NULL;
    raiz->hijo_izquierdo = NULL;

    if (hay_hijo(0))
        raiz->hijo_izquierdo = constryeArbol();
    if (hay_hijo(1))
        raiz->hijo_derecho = constryeArbol();
    return raiz;
}

/**
 * datos del arbol mostrado en la hoja del examen
 *
 * pre-orden = 19,13,9,16,145,30,25,29,35
 *
 * post-Orden = 9,145,29,25,35,30,16,13,19
 *
 * entre-Orden = 9,13,145,16,25,29,30,35,19
 */
bool hay_hijo(int n){
    char c;
    if(n == 0){
        cout << "hay hijo izquierdo? ";
    }else if(n == 1){
        cout << "hay hijo derecho? ";
    }
    cin >> c;
    return c == 's' || c == 'S';
}
void talar(arbol *p){
    if(p == NULL)
        return;
    talar(p->hijo_izquierdo);
    talar(p->hijo_derecho);
    delete p;
}
void preorden(arbol *p){
    if(p == NULL)
        return;
    cout << "el elemento es: " << p->dato << endl;
    preorden(p->hijo_izquierdo);
    preorden(p->hijo_derecho);
}
void entreOrden(arbol *p){
    if(p == NULL)
        return;
    entreOrden(p->hijo_izquierdo);
    cout << "el elemento es: " << p->dato << endl;
    entreOrden(p->hijo_derecho);
}
void postOrden(arbol *p){
    if(p == NULL)
        return;
    postOrden(p->hijo_izquierdo);
    postOrden(p->hijo_derecho);
    cout << "el elemento es: " << p->dato << endl;
}