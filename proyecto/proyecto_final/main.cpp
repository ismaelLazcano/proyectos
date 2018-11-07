#include <iostream>
#include <fstream>
#include <string.h>
#include "champios.h"

using namespace std;

partidos *constryeArbol();
bool hay_hijo(int n);//preguta si hay hijo izqu o derecho
bool ayuda();
void postOrden(partidos *p);//imprime desde el ultimo nodo (izquierda, derecha, raiz)
void talar(partidos *p);//borra el arbol
void asignaPadre(partidos *p);//asigna quien es el padre de cada nodo
void ganador(partidos *p);//hace la simulacion de los partidos
void archivo(int numeroEquipo,int numeroEquipo2,int gana,int goles1,int goles2);//genera archivo
void revisa(partidos *u);
equipos *Pop();
jugadores *pup();
void leer(partidos *u);
void imprimelista2 (equipos *p);
void mira(jugadores *q,char nom[16][30]);
partidos *p,*q;//arboles
equipos *a,*b;
jugadores *x,*y;
int winner;
int main() {
    int equi;
    //inicio de programa para Chapions
    cout << "hola buenvenido al arbol binario"<< endl;
    p = NULL;
    a = NULL;
    x = NULL;

    //m = NULL;
    do {
        cout << "dame un numero menor a 10 y mayor a 2" << endl;
        cin >> winner;
    }while(winner < 2 || winner >= 10);
        //cout << "para crear la simulacion de los partidos pulsa s hasta que el programa automaticamente asigne el equipo en el arbol" << endl;

    for (int i = 0; i < 16; ++i) {
        b = new equipos;
        b->nume_equipo = i;
        b->goles = gol(winner);
        b->link = a;
        a = b;
    }
    for(int i = 0;i < 16;i++){
        y = new jugadores;
        y->jug = i;
        y->enlace = x;
        x = y;
    }
    int m = 0;
    // imprimelista2(a);
    q =  constryeArbol(); //contruimos arbol para simular los partidos
   // cout << "equipos en postOrden" << endl;
    asignaPadre(q);
    ganador(q);
    //postOrden(q);
    leer(q);
    equi = q->numeroEquipo;
    cout << "\tabre el archivo de texto que se genero para ver los partidos" << endl;
    talar(q);
    if(equi == 0) {
        mira(y, real);
    }else if(equi == 1){
        mira(y,barce);
    }else if(equi == 2){
        mira(y,juven);
    }else if(equi == 9){
        mira(y,roma);
    }
    while (NULL != (a = Pop())) {
        delete a;
    }
    while(NULL != (x = pup())){
        delete x;
    }
    return 0;
}

partidos *constryeArbol() {
    char izq = 0,der = 0;
    partidos *raiz;
    raiz = new partidos;
    cout << "este es la nodo numero: " << fin << endl;
    if(fin == 4 || fin == 5 || fin == 7 || fin == 8 || fin == 11 || fin == 12 || fin == 14 || fin == 15 || fin == 19 || fin == 20 || fin == 22 || fin == 23 || fin == 26 || fin == 27 || fin == 29 || fin == 30){
        raiz->numeroEquipo = b->nume_equipo;
        raiz->goles = b->goles;
        b = b->link;
        cout << "\t\t\tEquipo asignado! " << endl;
        izq = 'n';
        der = 'n';
    }else{
        izq = 's';
        der = 's';
    }
    raiz->hijo_derecho = NULL;
    raiz->hijo_izquierdo = NULL;
    raiz->padre = NULL;
    fin++;
    if (izq == 's') {
        raiz->hijo_izquierdo = constryeArbol();
    }
    if (der == 's') {
        raiz->hijo_derecho = constryeArbol();
    }
    return raiz;
}
bool ayuda(){
    char c;
    cout << "te gustaria asignar equipo aqui? "<<endl;
    cin >> c;
    return c == 's' || c == 'S';
}
bool hay_hijo(int n){ //valida si hay hijo derecho o izquierdo
    char c;
    if(n == 0){
        cout << "hay hijo izquierdo? ";
    }else if(n == 1){
        cout << "hay hijo derecho? ";
    }
    cin >> c;
    return c == 's' || c == 'S';
}
void talar(partidos *p){ //eliminamos arbol binario
    if(p == NULL)
        return;
    talar(p->hijo_izquierdo);
    talar(p->hijo_derecho);
    delete p;
}
void postOrden(partidos *p){
    if(p == NULL)
        return;
    postOrden(p->hijo_izquierdo);
    postOrden(p->hijo_derecho);
    cout << "numero de equipo: " << p->numeroEquipo << endl;
    cout << "el equipo es: " << nombre[p->numeroEquipo] << endl;
    cout << "los goles que anoto son: " << p->goles << endl;
    cout << "su padre es: " << p->padre << endl;
}
void asignaPadre(partidos *p){
    partidos *u = NULL;
    if(p == NULL)
        return;
    if(p->hijo_izquierdo != NULL && p->hijo_derecho != NULL) {
        u = p->hijo_izquierdo;
        u->padre = p;
        u = p->hijo_derecho;
        u->padre = p;
    }
    asignaPadre(p->hijo_izquierdo);
    asignaPadre(p->hijo_derecho);
}
void ganador(partidos *p){ //simulacion de los partidos
    partidos *u = NULL;
    if(p == NULL)
        return;
    ganador(p->hijo_izquierdo);
    ganador(p->hijo_derecho);
    if(p->padre != NULL) {
        u = p->padre;
        if(u->goles == 0 ){
            u->goles = p->goles;
            u->numeroEquipo = p->numeroEquipo;
            // numEquip = u->numeroEquipo;
        }else {
            if (u->goles < p->goles) {
                u->goles = p->goles;
                u->numeroEquipo = p->numeroEquipo;
            }
            revisa(u);
        }

    }
}
void revisa(partidos *u){
    partidos *t = NULL;
    t = u->hijo_izquierdo;
    numEquip = t->numeroEquipo;
    goles1 = t->goles;
    t = u->hijo_derecho;
    numEquipo2 = t->numeroEquipo;
    goles2 = t->goles;
    gana = u->numeroEquipo;
    u->goles = gol(winner+1);
    archivo(numEquip,numEquipo2,gana,goles1,goles2);
}
void archivo(int numeroEquipo,int numeroEquipo2,int gana,int goles1,int goles2){ //escribimos en el archivo ya creado
    ofstream archivo;

    archivo.open("champions.txt",ios::app);
    if(archivo.fail()){
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    archivo <<nombre[numeroEquipo] << " vs " << nombre[numeroEquipo2] << " el ganador es: " << nombre[gana] << "\n\n";
    archivo << goles1 << "\t\t" << goles2 << endl;

    archivo.close();
}
void leer(partidos *u){
    ofstream archivo;
    archivo.open("champions.txt",ios::app);
    if(archivo.fail()){
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    archivo << "\t\t\t\t\tEL CAMPEON ES: " << nombre[u->numeroEquipo] << "!!!!!!!!!!!" << endl;
    archivo.close();
}
int con = 0;
void mira(jugadores *q,char nomb[16][30]){
    ofstream archivo;

    archivo.open("ganadores.txt",ios::app);
    if(archivo.fail()){
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    if(con == 0)
        archivo << "Los jugadores son:" << endl;
    con++;
    if(q == NULL)
        return;
     mira(q->enlace,nomb);
        archivo << nomb[q->jug] << endl;


    archivo.close();
}
//***************************************************************************************************************
//***************************************************************************************************************
//Funciones para lista ligada
void imprimelista2 (equipos *p){
    if (p==NULL)
        return;
    imprimelista2 (p->link);
    cout << "el equipo es: " << nombre[p->nume_equipo] << endl;
    cout << "El numero de este equipo es: "<<p->nume_equipo << endl;
    cout << "el numero de goles anotados es: " << p->goles << endl;
}
equipos *Pop(){ //dejar un solo aupuntador en este caso q para poder eliminar q
    equipos *q;
    q = b;
    if(b != NULL){
        b = b->link;
    }
    return q;
}
jugadores *pup(){
    jugadores *q;
    q = y;
    if(y != NULL){
        y = y->enlace;
    }
    return q;
}
