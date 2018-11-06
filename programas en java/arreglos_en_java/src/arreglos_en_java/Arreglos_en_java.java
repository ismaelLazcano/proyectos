/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arreglos_en_java;

/**
 *
 * @author ismal
 */
public class Arreglos_en_java {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int[] mi_arreglo = {12,570,930,295,427,570,12,1000};
        if(contiene(mi_arreglo, 295)){
            System.out.println("si existe el numero");
        }else{
            System.out.println("no existe");
        }
        System.out.println("el promedio es: "+promedio(mi_arreglo));
        //promedio
        for(int n = 0;n < mi_arreglo.length;n++){
            for(int m = n+1; m <mi_arreglo.length;m++){
                if(mi_arreglo[n] == mi_arreglo[m]){
                    System.out.println("el numero duplicado es: "+mi_arreglo[n]);
                }
            }
        }
        mayor(mi_arreglo);
        burbuja(mi_arreglo);
    }
    public static boolean contiene(int[] arr,int item){
        for(int n : arr){
            if(item == n){
                return true;
            }
        }
        return false;
    }
    
    public static int promedio(int[] arr){
    int promedio = 0;
        for(int n : arr){
            promedio += n;
        }    
        return promedio/arr.length;
    }
    
    public static void mayor(int[] arr){
        int i = 0,j = 0;
        for(int n = 0;n < arr.length;n++){
           //for(int m = n+1; m < arr.length;m++){
                if(i > arr[n]){
                    i = arr[n];
                }
                j = arr[n];
                if(j < arr[n]){
                    j = arr[n];
                }
                
            //}
        }
        System.out.println("el mayor es: "+i+" el menor es: "+j);
        
    }
    
    public static void burbuja(int [] A){
         int i, j, aux;
         for(i=0;i<A.length-1;i++){
              for(j=0;j<A.length-i-1;j++){
                   if(A[j+1]<A[j]){
                      aux=A[j+1];
                      A[j+1]=A[j];
                      A[j]=aux;
                   }
              }
         }
        for(i=0;i<A.length;i++){
            System.out.println(A[i]);
        }
    }
    
    
}
