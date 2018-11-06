#include <iostream>

using namespace std;

int pedirValores(int **m,int n,int q);

int matrizPorMatriz(int **A,int **B,int **C,int p,int q);
int main()
{
    int **A,**B,**prodmat;
    int n1,m1,n2,m2;

    cout << "\ndame tamaño de filas de A: ";
    cin >> n1;
    cout << "\ndame tamaño de columnas de A: ";
    cin >> m1;
    //alojamos matriz
    A = new int *[n1];
    for(int i = 0; i < n1; i++)
        A[i] = new int [m1];
    /*
    * pedimos tamaño de matriz B
    */
    cout << "\ndame tamaño de filas de B: ";
    cin >> n2;
    cout << "\ndame tamaño de columnas de B: ";
    cin >> m2;
    if(m1 != n2)
    {
        cout << "Error! el numero de columnas de A tiene que ser igual al numero de filas de B";
        return -1;
    }
    /*
    *alojamos matriz de B
    */
    B = new int *[n2];
    for(int i = 0; i < n2; i++)
    {
        B[i] = new int [m2];
    }
    prodmat = new int *[n1];
    for(int i = 0; i < n1; i++)
    {
        prodmat[i] = new int [m2];
    }
    cout << "dame valores de A" << endl; //pedimos valores de A por medio de funcion
    **A = pedirValores(A, n1,m1);
    cout << "dame valores de B" << endl; //pedimos valores de B por una funcion
    **B = pedirValores(B,n2,m2);
    cout << "valores de A: " << endl;
    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < m1; j++)
        {
            cout << A[i][j] << endl;
        }
    }
    cout << "valores de B: " << endl;

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < m1; j++)
        {
            cout << B[i][j] << endl;
        }
    }

    cout << "valores de producto de A por B: " << endl;
    **prodmat = matrizPorMatriz(A,B,prodmat,n1,m2);
    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < m2; j++)
        {
            cout << " " << prodmat[i][j] ;
        }
    }
    /*
    *liberamos memoria
    */
    if(A != NULL)
    {
        for(int i= 0; i < n1; i++)
        {
            if(A[i] != NULL)
            {
                delete [] A[i];
            }
        }
        delete [] A;
    }
    if(B != NULL)
    {
        for(int i= 0; i < n2; i++)
        {
            if(B[i] != NULL)
            {
                delete [] B[i];
            }
        }
        delete [] B;
    }

    if(prodmat != NULL)
    {
        for(int i= 0; i < n1; i++)
        {
            if(prodmat[i] != NULL)
            {
                delete [] prodmat[i];
            }
        }
        delete [] prodmat;
    }

    return 0;
}

int pedirValores(int **m,int n,int q)
{
    for(int i = 0;i < n;i++){
        for(int j = 0;j < q;j++){
            cout << "posicion [" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
    return **m;
}


int matrizPorMatriz(int **A,int **B,int **C,int p,int q){

    for(int i = 0;i < p;i++){
        for(int j = 0;j < q;j++){
            C[i][j] = A[i][j] * B[i][j];
        }
    }

    return **C;
}
