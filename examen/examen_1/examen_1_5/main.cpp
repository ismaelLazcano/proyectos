#include <iostream>

bool ayuda();

using namespace std;

struct jugadores{
    char nombre_jugador[30];
    char equip;
    int numero;
    float promedio_jugador;
    jugadores *link;

};

int main()
{
   jugadores *inicio,*auxiliar;
    auxiliar = NULL;

   while(ayuda()){ //creamos listas
        inicio = new jugadores;
        cout << "dame nombre de jugador: ";
        cin >> inicio->nombre_jugador;
        cout << "dame equipo de jugador: ";
        cin >> inicio->equip;
        cout << "dame numero: ";
        cin >> inicio->numero;
        cout << "dame el promedio: ";
        cin >> inicio->promedio_jugador;
        inicio ->link = auxiliar;
        auxiliar = inicio;
   }
    inicio = auxiliar;
    float val = 0;
    while(inicio != NULL){ //imprimimos elementos
        cout << "\nel nombre del jugador es: " << inicio->nombre_jugador;
        cout << "\nel equipo del jugador es: " << inicio->equip;
        cout << "\nel numero del jugador es: " << inicio->numero;
        cout << "\nel promedio del jugador es: " << inicio->promedio_jugador;

        if(inicio->promedio_jugador > val)
            val = inicio->promedio_jugador;

            inicio = inicio->link;
            cout << "\n";
    }
    cout << "\n";
    inicio = auxiliar;
    while(inicio != NULL){ //buscamos jugador con mayor promedio
        if(val == inicio->promedio_jugador){
            cout << "\nel jugador con mayor promedio se llama: " << inicio->nombre_jugador;
            cout << "\nesta en el equipo: " << inicio->equip;
        }
        inicio = inicio->link;
    }
     while(auxiliar != NULL){ //eliminamos memoria
        inicio = auxiliar->link;
        delete auxiliar;
        auxiliar = inicio;
    }



    return 0;
}


bool ayuda(){
    char l;
    cout << "\ndesea agregar otra lista?: ";
    cin >> l;
    return l == 's' || l == 'S';
}
