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
void imprime_arbol(arbol *p);
void buscar(arbol *p,int clave);
arbol *p,*q;
int main() {
    int clave;
    cout << "hola buenvenido al arbol binario"<< endl;
    p = NULL;
    q =  constryeArbol();
    imprime_arbol(q);
    cout << "que numero te gustaria buscar?";
    cin >> clave;
    buscar(q,clave);
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
void imprime_arbol(arbol *p){
    if(p == NULL)
        return;
    imprime_arbol(p->hijo_izquierdo);
    imprime_arbol(p->hijo_derecho);
    cout << "el elemento es: " << p->dato << endl;
}
void buscar(arbol *p,int clave){
    int numero;
    if(p == NULL)
        return;
    numero = p->dato;
    if(numero == clave) {
        cout << "dato encontrado";
        return;
    }else {
        buscar(p->hijo_izquierdo, clave);
        buscar(p->hijo_derecho,clave);
    }

}