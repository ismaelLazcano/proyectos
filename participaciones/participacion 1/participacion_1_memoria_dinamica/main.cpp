#include <iostream>

using namespace std;

int main()
{

    /*
    *el alojamiento dinamico de memoria es como su nombre lo dice alojar memoria o apartar memoria denttro de un programa
    *para que podamos utilizarlo segun sean nuestras necesidades, dicha memoria o espacios se piden al usuario
    *y despues se elimina dicha memoria
    */

    int *p,a;

    cout << "dame numeros para memoria: ";
    cin >> a;

    p = new int[a];

    for(int i=0;i<a;i++){
        cout << "dame valor: ";
        cin >> p[i];
    }
    for(int i=0;i<a;i++){
        cout << p[i];
    }
    if(p != NULL){
    delete [] p;
    }
    return 0;
}
