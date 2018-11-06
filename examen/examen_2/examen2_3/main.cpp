#include <iostream>
using namespace std;
struct s_jugador{
    int numero;
    float puntaje;
    char nombre[25];
    s_jugador *siguiente;
};
bool ayuda();
s_jugador *Pop();
void push(s_jugador *q);
s_jugador *hacer_caja();
void imprimir();
s_jugador *p,*q;

/**
 * importancia del NULL = si no utilizamos el null en nuestras listas ligadas lo que va a ocurrir es que perderemos el
 * inicio de nuestra lista, osea que jamas sabremos a donde esta apuntando nuestra primer lista, por eso es la importancia de
 * tener simpre un inicio que en este caso es null
 *
 * delete = el delete es la parte mas importante despues de el new, porque simpre que utilizamos estructuras de datos
 * en C o C++ la memoria que pedimos, la tenemos que eliminar porque si no de lo contrario se queda como basura en la
 * memoria ram
 *
 */
int main(){
    p = NULL;
    cout << "Bienvenido" << endl;
    while(ayuda()){
    push(hacer_caja());
    }
    imprimir();
    while (NULL != (q = Pop())){
        delete q;
    }
    return 0;
}
bool ayuda(){
    char c;
    cout << "deseas un jugador mas?s/n";
    cin >> c;
    return c == 's' || c == 'S';
}
s_jugador *hacer_caja(){
    s_jugador *q;
    q = new s_jugador;
    if(q == NULL)
        return NULL;

    cout << "dame nombre de jugador: ";
    cin >>q->nombre;
    cout << "dame numero de jugador: ";
    cin >> q->numero;
    cout << "dame puntaje de jugador: ";
    cin >> q->puntaje;

    return q;
}
void push(s_jugador *q){
    if(q == NULL)
        return;

    q->siguiente = p;
    p = q;
}
s_jugador *Pop(){ //dejar un solo aupuntador en este caso q para poder eliminar q
    s_jugador *q;
    q = p;
    if(p != NULL){
        p = p->siguiente;
    }
    return q;
}
void imprimir(){
q = p;
while(q != NULL){
cout << "el nombre del jugador es: " << q->nombre << endl;
cout << "el numero del jugador es: " << q->numero << endl;
cout << "el puntaje del jugador es: " << q->puntaje << endl;
q = q->siguiente;
}
}