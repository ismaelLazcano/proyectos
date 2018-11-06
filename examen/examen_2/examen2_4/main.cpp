#include <iostream>
using namespace std;
struct s_jugadores{
    int numero;
    float puntaje;
    char nombre[25];
    s_jugadores *siguiente;
};
bool ayuda();
s_jugadores *hacer_caja();
void push(s_jugadores *q);
s_jugadores *Pop();
void formar(s_jugadores *q);
s_jugadores *despachar();
void imprimir();
void imprimelista1 (s_jugadores *p);
void imprimelista2 (s_jugadores *p);
float promedio(s_jugadores *p);
s_jugadores *p,*q,*u;
int contador;
int main() {
    int opcion;
    float prom;
    int cont;
    cout << "Bienvenido que te gustaria hacer?\n1.-pila\n2.-cola\nIngresa opcion: ";
    cin >> opcion;
    switch(opcion){
        case 1:
            while(ayuda()){
                push(hacer_caja());
                cont++;
            }

            break;
        case 2:
            while(ayuda()){
                formar(hacer_caja());
                cont++;
            }
            q = p;
            imprimir();
            while(NULL != (q = despachar())){
                delete q;
            }
            break;
        default: cout << "esa opcion no esta en el menu";
    }
    if(opcion == 1){
        do {
            cout
                    << "menu de pila \n1.-imprimir pila normal\n2-.imprimir pila inversamente\n3.-promedio"
                            "\n4.-borrar memoria\ningresa opcion: ";
            cin >> opcion;
            switch (opcion) {
                case 1:
                    imprimelista1(p);
                    break;
                case 2:
                    imprimelista2(p);
                    break;
                case 3:
                    prom = promedio(p);
                    cout << "el promedio es: " << prom/contador << endl;
                    break;
                case 4:
                    while (NULL != (q = Pop())) {
                        delete q;
                    }
                    break;

                default:
                    while (NULL != (q = Pop())) {
                        delete q;
                    }
                    cout << "esa opcion no esta en el menu!\nmemoria borrada";
            }
        }while(opcion < 4 || opcion > 4);

    }else if(opcion == 2){
        do {
            cout << "Menu de colas\n1.-imprimir cola\n2.-borrar memoria\ningresa opcion: ";
            cin >> opcion;
            switch (opcion) {
                case 1:
                    imprimir();
                    break;
                case 2:
                    while (NULL != (q = despachar())) {
                        delete q;
                    }
                    break;
                default:
                    while (NULL != (q = despachar())) {
                        delete q;
                    }
                    cout << "esa opcion no esta en el menu!memoria borrada";
            }
        }while(opcion < 3 || opcion > 3);
    }

    return 0;
}
bool ayuda(){ //funcion para saber si quiere una nueva lista
    char c;
    cout << "Te gustaria agregar un jugador? s/n: ";
    cin >> c;
    return c == 's' || c == 'S';
}

s_jugadores *hacer_caja(){ //creamos una lista nueva
    s_jugadores *q;
    q = new s_jugadores;
    if( q == NULL)
        return NULL;

   cout << "cual es el nombre del jugador: " << endl;
    cin >> q->nombre;
    cout << "cual es el numero del jugador: " << endl;
    cin >> q->numero;
    cout << "cual es el puntaje del jugador: " << endl;
    cin >> q->puntaje;

    return q;
}

void push(s_jugadores *q){ //para empujar una caja (mandar al link siguiente)
    if(q == NULL)
        return;

    q->siguiente = p;
    p = q;
}
s_jugadores *Pop(){ //dejar un solo aupuntador en este caso q para poder eliminar q
    s_jugadores *q;
    q = p;
    if(p != NULL){
        p = p->siguiente;
    }
    return q;
}
void formar(s_jugadores *q){ //es un push
    if(q == NULL)
        return;
    q->siguiente = NULL;
    if (u == NULL)
        p = q;
    else
        u->siguiente = q;
    u = q;
}
s_jugadores *despachar(){ // es como un pop
    if(p == NULL)
        return NULL;
    s_jugadores *q;
    q = p;
    p = p->siguiente;
    q->siguiente = NULL;

    if(p == NULL)
        u = NULL;

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
 void imprimelista1 (s_jugadores *p){
   if (p==NULL)
       return;
     cout << "el nombre del jugador es: " << p->nombre << endl;
     cout << "el numero del jugador es: " << p->numero << endl;
     cout << "el puntaje del jugador es: " << p->puntaje << endl;
   imprimelista1 (p->siguiente);
}

void imprimelista2 (s_jugadores *p){
   if (p==NULL)
       return;
   imprimelista2 (p->siguiente);
    cout << "el nombre del jugador es: " << p->nombre << endl;
    cout << "el numero del jugador es: " << p->numero << endl;
    cout << "el puntaje del jugador es: " << p->puntaje << endl;

}
float promedio(s_jugadores *p){
    float promedio;
    while (p != NULL){
        promedio += p->puntaje;
        p = p->siguiente;
        contador++;
    }
    return promedio;

}
