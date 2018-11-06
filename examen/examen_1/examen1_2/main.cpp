#include <iostream>

using namespace std;

int main()
{
    double *G;
    double *Q;
    double a;
    int n;

    cout << "dame tamanio de arreglo: ";
    cin >> n;
    G = new double[n];
    Q = new double[n*2];

    for(int i = 0;i < n;i++){
        cout << "dame valores de G: ";
        cin >> a;
        G[i] = a*3;
    }
    for(int i = 0;i < n*2;i++){
        cout << "dame valores de Q: ";
        cin >> a;
        Q[i] = a+1;
    }


    for(int i = 0;i < n;i++){
        cout << "valores de G: " << G[i] << endl;
    }
    for(int i = 0;i < n*2;i++){
        cout << "valores de Q: " << Q[i] << endl;
    }
    if(G != NULL){
        delete [] G;
    }
    if(Q != NULL){
        delete [] Q;
    }
    return 0;
}
