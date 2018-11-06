#include <iostream>
using namespace std;
struct circular{
    int valor;
    circular *enlace;
};
bool ayuda();
int main() {
    int a;
    circular *p,*q,*u;
    p = NULL;
    cout << "Bienvenido a la lista ligada circular" << endl;
    for (int i = 0; i < 4; ++i) {
        q = new circular;
        q->valor = i+1;
        q->enlace = q;
        if(p == NULL)
            p = q;
        q->enlace = p->enlace;
        p->enlace = q;
    }

    u = p->enlace;
    while(u != p){
        cout << "el valor es: " << u->valor << endl;
        u = u->enlace;
    }
    q = p->enlace;
    p->enlace = NULL;
    while(q != NULL){
        p = q->enlace;
        delete q;
        q = p;
    }
    return 0;
}
bool ayuda(){
    char c;
    cin >> c;
    return c == 's' || c == 'S';
}