#include <iostream>
using namespace std;

struct alumno{
    char nombre[20];
    float calificacion;
    float promedio;
    alumno *link;
};
bool ayuda();
alumno *hacer_caja();
void push(alumno *q);
alumno *Pop();
void formar(alumno *q);
alumno *despachar();

alumno *p,*q,*u;
int main() {
   p = NULL;
    int op;
    cout << "hola bienvenido al programa para hacer pilas y colas:"
             << "\nque te gustaria hacer\n1.-pila\n2.-cola\n3.-salir\ningresa opcion: " << endl;
    cin >> op;
    switch(op){
        case 1:
            while(ayuda()){
            push(hacer_caja());
            }
            q = p;
            while(q != NULL){
                cout << "\nel nombre del alumno es: " << q->nombre;
                cout << "\nsu calificacion es: " << q->calificacion;
                cout << "\nsu promedio es de: " << q->promedio;
                q = q->link;
            }
            while(NULL != (q = Pop())){
                delete q;
            }
            break;
        case 2:
            while(ayuda()){
                formar(hacer_caja());
            }
            q = p;
            while(q != NULL){
                cout << "\nel nombre del alumno es: " << q->nombre;
                cout << "\nsu calificacion es: " << q->calificacion;
                cout << "\nsu promedio es de: " << q->promedio;
                q = q->link;
            }
            while(NULL != (q = despachar())){
                delete q;
            }
            break;
        case 3:
            break;
    }
    return 0;
}

bool ayuda(){ //funcion para saber si quiere una nueva lista
    char c;
    cout << "Te gustaria agregar un alumno? s/n: ";
    cin >> c;
    return c == 's' || c == 'S';
}

alumno *hacer_caja(){ //creamos una lista nueva
    alumno *q;
    q = new alumno;
    if( q == NULL)
        return NULL;

    cout << "dame nombre de alumno: ";
    cin >> q->nombre;
    cout << "dame calificacion de alumno: ";
    cin >> q->calificacion;
    cout << "dame promedio de alumno: ";
    cin >> q->promedio;
    return q;
}

void push(alumno *q){ //para empujar una caja (mandar al link siguiente)
    if(q == NULL)
        return;

    q->link = p;
    p = q;
}
alumno *Pop(){ //dejar un solo aupuntador en este caso q para poder eliminar q
    alumno *q;
    q = p;
    if(p != NULL){
        p = p->link;
    }
    return q;
}
void formar(alumno *q){ //es un push
    if(q == NULL)
        return;
    q->link = NULL;
    if (u == NULL)
        p = q;
    else
        u->link = q;
    u = q;
}
alumno *despachar(){ // es como un pop
    if(p == NULL)
        return NULL;
    alumno *q;
    q = p;
    p = p->link;
    q->link = NULL;

    if(p == NULL)
        u = NULL;

    return q;
}