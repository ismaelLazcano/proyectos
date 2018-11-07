//
// Created by ismal on 10/04/2018.
//
#include <iostream>
#include <conio.h>
#include <fstream>

struct partidos{                    //arbol para la simulacion de los partidos
    int numeroEquipo = -1;
    int goles = 0;
    partidos *hijo_izquierdo;
    partidos *hijo_derecho;
    partidos *padre;
};
struct jugadores{
    int jug;
    jugadores *enlace;
};
struct equipos{
    int nume_equipo = -1;
    int goles = 0;
    equipos *link;
};


int numEquip,numEquipo2,gana,fin = 0,goles1,goles2;
char posicion[9][25] = {"potero","defensa","centro campista","delantero"};
char nombre[16][25] = {"Real madrid","Barcelona","Juventus","Paris",
                       "Atletico","Liverpool","Baryen Munich","manchester city","Sevilla","Roma",
                       "Totteham","Chelsea","Porto","Manchester United","Dormund","Basel"};
char barce[16][30] = {"Ter steagen-potero","Sergi Roberto-defensa","Samuel umtiti-defensa",
                      "G. Piqué-defensa","Jordi Alba-centro campista","Rakitic-centro campista",
                      "Iniesta-centro campista","Busquets-centro campista",
                      "Dembele-delantero","Luis Suárez-delantero","Leo Messi-delantero","Couthinho-centro campista"
                        ,"Semedo-centro campista","Paco Alcacer-defensa","Vermalen-defensa","Yerri Mina-defensa"};
char juven[16][30] = {"Buffon-potero", "Alex Sandro-defensa","Chellini-defensa","Barzagli-defensa",
                      "Lienchester-defensa","Dybala-centro campista","Higuaín-centro campista","Douglas costa-centro campista",
                      "Cuadrado-delantero","Asamhoa-delantero", "Pjaca","Pjianic-delantero","Rugani"};
char real[16][30] =  {"K. Navas","Carvajal","Ramos","Varane","Marcelo","Casemiro","Kroos",
                      "Modric","Bale","CR7","Benzema","Vallejo","Borja Mayoral","Ascencio","Lucas Vázquez"};
char roma[16][30] = {"Alisson-potero","silvio-defensa","devid eugene-defensa","bruno peres-defensa","daniele-centro campista",
                    "alessandro-centro campista","Gerson-centro campista","maxime ganols-centro campista",
                    "mirko Antonucci-delantero","rezan corlu-delantero","gregoire defrel-delantero"};

int gol(int j){
    int num;

    num = rand()%j;

    return num;
}
