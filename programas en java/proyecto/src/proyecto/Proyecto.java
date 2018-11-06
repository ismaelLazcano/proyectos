/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package proyecto;

import java.text.DecimalFormat;
import java.util.Scanner;
/**
 *
 * @author ismal
 */
public class Proyecto {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Scanner teclado = new Scanner(System.in);      
       productos ingresa = new productos();
       DecimalFormat formato = new DecimalFormat("#.##");
        int op,asi;
        long resul;
        double impuestos = 0;
        do{
        System.out.println("Bienvenido al inventario !\n");
        System.out.println("Que opcion deseas? \n1.-Ingresar producto\n2.-Revisar inventario por categoria"
                + "\n3.-Calcular total de ganancias\n4.-calcular total de productos\n5.-salir\n");
        System.out.println("Ingresa opcion: ");//aqui todo bien
        op = teclado.nextInt();
        
       // productos [] inventar = new productos [n];
        switch(op){
            case 1: 
                    System.out.println("De que categoria es?\n1.-Lacteos\n2.-Enlatados\n3.-Carnes\n4.-Cereales\nIngrese opcion: ");
                    asi = teclado.nextInt();
                    ingresa.insertarPro(asi);
                break;
            case 2:
        //revisar inventario por categoria
                    System.out.println("¿Que categoria \"te\" x gustaria ver?\n1.-Lacteos\n2.-Enlatados\n3.-Carnes\n4.-Cereales\nIngrese opcion: ");
                   asi = teclado.nextInt();
                   ingresa.imprime(asi);
               break;
            case 3://total de ganancias 
                System.out.println("las perdidas de los lacteos son: "+formato.format(ingresa.total(ingresa.precioComlac, ingresa.precioVenlac))
                        +"\t las ganancias de esta categoria son: "+formato.format(ingresa.aux) 
                        +"\t los impuestos son: "+ formato.format(ingresa.aux * .1825));
                impuestos +=ingresa.aux * .1825;
                System.out.println("las perdidas de los enlatados son: "+formato.format(ingresa.total(ingresa.preciocomenla, ingresa.precioventenla))
                +"\t las ganancias de esta categoria son: "+formato.format(ingresa.aux)+
                        "\t los impuestos son: "+ formato.format(ingresa.aux * .1825));
                impuestos +=ingresa.aux * .1825;
                System.out.println("las perdidas de las carnes son: "+formato.format(ingresa.total(ingresa.precioComcar, ingresa.precioVencar))
                +"\t las ganancias de esta categoria son: "+formato.format(ingresa.aux)+
                        "\t los impuestos son: "+ formato.format(ingresa.aux * .1825));
                impuestos +=ingresa.aux * .1825;
                System.out.println("las perdidas de los cereales son: "+formato.format(ingresa.total(ingresa.precioComcer,ingresa.precioVencer))
                +"\t las ganancias de esta categoria son: "+formato.format(ingresa.aux)+
                        "\t los impuestos son: "+ formato.format(ingresa.aux * .1825));
                impuestos +=ingresa.aux * .1825;
                if(ingresa.ganancias >= 0){
                System.out.println("\t\t\t las ganancias totales son de: "+formato.format(ingresa.ganancias));
                    System.out.println("\t\t\t los impuestos totales son de: "+formato.format(impuestos));
                    System.out.println("\t\t\t las ganancias menos el 7.3% de impuestos es: "
                            +formato.format(ingresa.ganancias - impuestos));
                }
                else 
                    System.out.println("\t\t\t no hubo ganancias y se perdieron: "+formato.format(ingresa.ganancias));
                break;
            case 4://total de productos
                System.out.println("\t\t\ten total hay: "+ingresa.tot +" productos");
                break;
            case 5: break;
            default: System.out.println("esa opcion no esta en el menu");
        }
        }while(op != 5);
    }
}
