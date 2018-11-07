#include <iostream>

using namespace std;

#define NUM 500
int main()
{
    //¿Que le falta a este programa
    // 1
    int *arr = new int [NUM];
    if( arr == NULL ){
        return -1;
    };
        if(arr != NULL){
    delete [] arr;
        }

    //2.
//    int *arr = new int[ NUM ];
    if( arr == NULL ){
        return -1;
    };
        if(arr != NULL){
    delete [] arr;
        }
    //3.
    for( int i=0; i<NUM; i++ ){
        arr[i] = 0;
    }
    if( arr != NULL){
    delete [] arr;
    }
}
