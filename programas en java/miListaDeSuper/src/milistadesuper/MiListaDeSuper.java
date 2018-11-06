/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package milistadesuper;

import java.util.Scanner;
/**
 *
 * @author ismal
 */
public class MiListaDeSuper {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int op,pos = 0;
        float sum;
        listasuper Lista =  new listasuper();//llamo a metodos
        Scanner tecla = new Scanner(System.in);
        do{
            System.out.flush();
        System.out.println("\t\tbienevenido a la lista de super ");
        System.out.println("este es el menu: \n1.-agregar producto\n2.-ver producto\n3.-calcular total\n4.-salir\nelige opcion: ");
        op = tecla.nextInt();
        switch(op){
            case 1: 
               // System.out.println(Lista.agregarProducto(pos));
                Lista.agregarProducto(pos);
                pos += 1;
                System.out.println("valor de pos "+pos);
                break;
            case 2:
                System.out.println(Lista.verProducto());
                break;
            case 3:sum = Lista.sumarTotal();
                System.out.println("el total es: "+sum);
                break;
            case 4:
                break;
            default: System.out.println("La opcion no esta en el menu");
        }  
        }while(op != 4);
    }
    
}
