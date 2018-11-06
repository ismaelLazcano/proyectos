/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package milistadesuper;

import java.util.Scanner;

/**
 * for (int i = 0; i < array.length; i++) 
 * @author ismal
 */
public class listasuper {
    String []product = new String [10];
    float []preci = new float [10];
    Scanner teclado = new Scanner(System.in);
    
    public listasuper(){} //constructor 
   
    public void agregarProducto(int pos){

       teclado.nextLine();
       
        System.out.print("cual es el nombre del producto: ");
        product[pos] = teclado.nextLine();
        System.out.print("\ncual es el precio: ");
        preci [pos] = teclado.nextFloat();
        System.out.println("guardado !");
       
        //return 0;
    }
    
    public int verProducto(){
        System.out.println("los productos agregados son: ");
        for(int i = 0;i <product.length;i++){
            System.out.println(+i+1+" "+product[i]+" tiene precio de: "+preci[i]);
        }
        return 0;
    }
    
    public float sumarTotal(){
       float suma =0;
        for(int i = 0;i < preci.length;i++){
        suma += preci[i];
                }
        return suma;
    }
}