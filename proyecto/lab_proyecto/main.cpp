#include <iostream>
#include <fstream>

using namespace std;

//void leer();
void llenar();
void camino(int, int, int, int);
bool izq(int posLado, int posCol);
bool der(int posLado, int posCol);
int regreso(int valor,int otro,int punto);
bool arriba(int posLado, int posCol);
bool abajo(int posLado, int posCol);
void walk(int inicioLado, int inicioColumna, int final_lado, int final_columna);
char laberinto[8][8] ;
int entrada_lado = 0,entrada_columna = 0, final_lado = 0, final_columna = 0;
int main() {
    cout<<"\t\tLaberinto\t\t\n";

    //leer();
    llenar();
    //camino(entrada_lado,entrada_columna,final_lado,final_columna);
    walk(entrada_lado,entrada_columna,final_lado,final_columna);


    return 0;
}
/*void leer(){
    ofstream archivo;
    archivo.open("laberinto.txt",ios::trunc);
    if(archivo.fail()){
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    archivo << "********\n*      *\n*   *  *\n*      *\n*      *\n*      *\n*      *\n********\n";
    archivo.close();
}*/

void camino(int inicioLado, int inicioColumna, int final_lado, int final_columna){
    int auxIlado = inicioLado,auxIcolumna = inicioColumna;
    if(auxIlado == final_lado && auxIcolumna == final_columna){
        cout << "Encontrado";
        return;
    }else {
        auxIlado++;
        if (laberinto[auxIlado][auxIcolumna] == ' ') {
            laberinto[auxIlado][auxIcolumna] = '.';
        }else{
            auxIlado -= 2;
            if (laberinto[auxIlado][auxIcolumna] == ' ') {
                laberinto[auxIlado][auxIcolumna] = '.';
            }else{
                auxIlado ++;
                auxIcolumna++;
                if (laberinto[auxIlado][auxIcolumna] == ' ') {
                    laberinto[auxIlado][auxIcolumna] = '.';
                }else{
                    auxIcolumna -= 2;
                    if (laberinto[auxIlado][auxIcolumna] == ' ') {
                        laberinto[auxIlado][auxIcolumna] = '.';
                }else if(laberinto[auxIlado][auxIcolumna] == 'F'){
                        cout << "Encontrado" << endl;
                        return;
                    }else{
                        return;
                    }
                }
            }
        }

        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                cout << laberinto[i][j];
            }
            cout<<"\n";
        }
        cout << "posiciones" << auxIlado << " y " << auxIcolumna << endl;
    }
    camino(auxIlado,auxIcolumna,final_lado,final_columna);
}
int contadorL = 0, contadorC = 0;
void walk(int inicioLado, int inicioColumna, int final_lado, int final_columna){
    int auxIlado = inicioLado,auxIcolumna = inicioColumna;

    int checkLado, checkCol;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j){
            if(laberinto[i][j] == 'x'){
                cout << " ";
            }else{
                cout << laberinto[i][j];
            }

        }
        cout<<"\n";
    }
    cout << "posiciones" << auxIlado << " y " << auxIcolumna << endl;

    if(auxIlado == final_lado && auxIcolumna == final_columna){
        cout << "Encontrado" << endl;
        return;
    }else{
        if(laberinto[auxIlado+1][auxIcolumna] == 'F' || laberinto[auxIlado-1][auxIcolumna] == 'F'
           || laberinto[auxIlado][auxIcolumna+1] == 'F' || laberinto[auxIlado][auxIcolumna-1] == 'F'){
            cout << "Encontrado" << endl;
            return;
        }

        if(izq(auxIlado,auxIcolumna)){
            auxIcolumna -= 1;
            laberinto[auxIlado][auxIcolumna] = '.';
            if(izq(auxIlado,auxIcolumna) || arriba(auxIlado,auxIcolumna) || abajo(auxIlado,auxIcolumna)){
                walk(auxIlado,auxIcolumna,final_lado,final_columna);
            }else{
                laberinto[auxIlado][auxIcolumna] = 'x';
                auxIcolumna += 1;
                if(arriba(auxIlado,auxIcolumna) || abajo(auxIlado,auxIcolumna) || der(auxIlado,auxIcolumna)){
                    walk(auxIlado,auxIcolumna,final_lado,final_columna);
                }else{
                    cout << "sin salida" << endl;
                    return;
                }
            }
        }else if(der(auxIlado,auxIcolumna)){
            auxIcolumna += 1;
            laberinto[auxIlado][auxIcolumna] = '.';
            if(arriba(auxIlado,auxIcolumna) || abajo(auxIlado,auxIcolumna) || der(auxIlado,auxIcolumna)){
                walk(auxIlado,auxIcolumna,final_lado,final_columna);
            }else{
                laberinto[auxIlado][auxIcolumna] = 'x';
                auxIcolumna -= 1;
               if( arriba(auxIlado,auxIcolumna) || abajo(auxIlado,auxIcolumna) || izq(auxIlado,auxIcolumna)){
                   walk(auxIlado,auxIcolumna,final_lado,final_columna);
               }else{
                   cout << "sin salida" << endl;
                   return;
               }
            }
        }else if(arriba(auxIlado,auxIcolumna)){
            auxIlado -= 1;
            laberinto[auxIlado][auxIcolumna] = '.';
            if(arriba(auxIlado,auxIcolumna) || izq(auxIlado,auxIcolumna) || der(auxIlado,auxIcolumna)){
                walk(auxIlado,auxIcolumna,final_lado,final_columna);
            }else{
                laberinto[auxIlado][auxIcolumna] = 'x';
                auxIlado += 1;
                if(izq(auxIlado,auxIcolumna) || der(auxIlado,auxIcolumna) || abajo(auxIlado,auxIcolumna)){
                    walk(auxIlado,auxIcolumna,final_lado,final_columna);
                }else{
                    cout << "sin salida" << endl;
                    return;
                }
            }
        }else if(abajo(auxIlado,auxIcolumna)){
            auxIlado += 1;
            laberinto[auxIlado][auxIcolumna] = '.';
            if(abajo(auxIlado,auxIcolumna) || izq(auxIlado,auxIcolumna) || der(auxIlado,auxIcolumna)){
                walk(auxIlado,auxIcolumna,final_lado,final_columna);
            }else{
                laberinto[auxIlado][auxIcolumna] = 'x';
                auxIlado -= 1;
                if(izq(auxIlado,auxIcolumna) || der(auxIlado,auxIcolumna) || arriba(auxIlado,auxIcolumna)){
                    walk(auxIlado,auxIcolumna,final_lado,final_columna);
                }else{
                    cout << "sin salida" << endl;
                    return;
                }
            }
        }else{
            cout << "sin salida" << endl;
            return;
        }

    }

}

int regreso(int valor,int otro,int punto){
    if(punto == 0){
        return valor;
    }else{
        laberinto[otro][valor] = ' ';
        valor -= 1;
        punto--;
        regreso(valor,otro,punto);
    }
}

bool izq(int posLado, int posCol){
    int auxl = posLado, auxC = posCol;
    if(laberinto[auxl][auxC] == '.' || laberinto[auxl][auxC] == 'E'){
        auxC--;
        if (laberinto[auxl][auxC] == ' ') {
            return true;
        } else {
            return false;
        }
    }
}
bool der(int posLado, int posCol){
    int auxl = posLado, auxC = posCol;
    if(laberinto[auxl][auxC] == '.' || laberinto[auxl][auxC] == 'E'){
        auxC++;
        if (laberinto[auxl][auxC] == ' ') {
            return true;
        } else {
            return false;
        }
    }
}
bool arriba(int posLado, int posCol){
    int auxl = posLado, auxC = posCol;
    if(laberinto[auxl][auxC] == '.' || laberinto[auxl][auxC] == 'E'){
        auxl--;
        if (laberinto[auxl][auxC] == ' ') {
            return true;
        } else {
            return false;
        }
    }
}
bool abajo(int posLado, int posCol){
    int auxl = posLado, auxC = posCol;
    if(laberinto[auxl][auxC] == '.' || laberinto[auxl][auxC] == 'E'){
        auxl++;
        if (laberinto[auxl][auxC] == ' ') {
            return true;
        } else {
            return false;
        }
    }
}

void llenar(){
    string nfichero = "laberinto.txt";
    char letra;
    ifstream fichero;
    int i = 0, j = 0;
    fichero.open(nfichero.c_str());
    if(!fichero.fail()){
        fichero.get(letra);
        while(!fichero.eof()) {
            if(letra == 'E' || letra == 'e'){
                entrada_lado = i;
                entrada_columna = j;
            }
            if(letra == 'F' || letra == 'f'){
                final_lado = i;
                final_columna = j;
            }
            if(i < 8){
                if(j < 8) {
                    laberinto[i][j] = letra;
                    j++;
                }else{
                    i++;
                    j=0;
                }
            }
            fichero.get(letra);
        }
    }
    fichero.close();
}