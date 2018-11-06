/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package objetos;

import java.util.Scanner;


public class Restaurante {
    //static es para modificarse 
    String []nombre = new String[10];
    double  cuenta;
    static String RFC = "ABCD1846816";
    static int []mesas = new int [10];
    Scanner num = new Scanner(System.in);
    String comensal;
    
    //constructor 
    public Restaurante(){}
    
    //metodos
    public double cobrarCuenta(double montoCuenta, double propina){ //calcula cuenta y propina 
        double totalPago;
        totalPago = ((propina/100)* montoCuenta) + montoCuenta;
        
        return totalPago;
    }
    
   
    public int consultaMesa(int mesa){ //consulta mesa y agrega si es necesario
        
        int val;
        if(mesas[mesa-1] == 0){
        System.out.println("¡¡¡mesa disponible!!!");
        
        System.out.println("¿desea asignar esta mesa a algun comensal?\n1.-si\n2.-no "); //pregunta si quiere agregar comensal 
        val = num.nextInt();
        
        if(val < 1 || val > 2){
            System.out.println("el valor es invalido");
        }else if(val == 1){                       //ingresa si es necesario
            //llamar funcion
            
            System.out.println("ingrese nombre de comensal: ");
            num.nextLine();
            comensal = num.nextLine();
            asignaMesa(comensal,mesa);
        }else if(val == 2){
            System.out.println("estas son las mesas disponibles: ");
            for(int i=0;i<mesas.length;i++){    
            System.out.print(" "+mesas[i]);
        }
        }
        }else if(mesas[mesa-1] == 1){
            System.out.println("mesa ocupada");
            System.out.println("estas son las mesas disponibles: ");
            for(int i=0;i<10;i++){
            System.out.print(" "+mesas[i]);
        }
        }
        return 0;
    }
    
     public int asignaMesa(String comensal,int mesa){
         if(mesas[mesa-1] == 0){
             mesas[mesa-1] = 1;
          nombre[mesa-1] = comensal;
          System.out.println("la mesa "+mesa +" esta asignada a "+nombre[mesa-1]);
         }else if(mesas[mesa-1] == 1){
             System.out.println("la mesa ya esta ocupada por "+nombre[mesa-1]);
         }  
          
          
        return 0;
    }
}

