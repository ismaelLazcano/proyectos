#include <iostream>

using namespace std;
struct s_materias{
    char nombre[30];
    float calif;
}*p;
int main()
{
    int m;
    p = new s_materias[m];

    cout << "cuantos alumnos quieres: ";
    cin >> m;
    for(int i = 0; i < m; i++){
    cin.ignore();
    cout << "dame nombre: ";
    cin.getline(p[i].nombre,30);
    cout <<  "dame calificacion: ";
    cin >> p[i].calif;

    }
    for(int i = 0; i < m; i++){
    cout << "\nnombre: " << p[i].nombre;
    cout << "\ncalificacion: " << p[i].calif;
    }


    if(p != NULL){
       delete [] p;
    }
    return 0;
}
