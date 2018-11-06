/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nuevedeabril;

import java.util.Scanner;

/**
 *
 * @author ismal
 */
public class NueveDeAbril {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
                    // Herencia
     /**
      * reutilizacion de codigo
      * extends palabra reservada para heredar 
      * super palabra reservada, hacer referencia a los metodos y constructor de clase padre
      * no se puede heredar al hijo del hijo 
      */   
     /**
      * futbol
      */
     almacena();
        
    }

    public static void almacena(){
        int numeroVelocidades,velocidad,altura, frenos,valor;
     String marca,color,amortiguador;
     Scanner teclado = new Scanner(System.in);   
     System.out.println("cual es el color de tu bici?: ");
     color = teclado.nextLine();
        System.out.println("numero de velocidades?: ");
        numeroVelocidades = teclado.nextInt();
        System.out.println("velocidad total de la bici: ");
        velocidad = teclado.nextInt();
        System.out.println("Que marca es: ");
        teclado.nextLine();
        marca = teclado.nextLine();
        System.out.println("cual es la altura del asiento?: ");
        altura = teclado.nextInt();
        System.out.println("los frenos son de 1.-disco 2.-Goma");
        frenos = teclado.nextInt();
        System.out.println("amortiguador:\n1.-aire 2.-muelle 3.-Botella 4.-electronico");
        valor = teclado.nextInt();
        if(valor == 1)
            amortiguador = "Aire";
        else if(valor == 2)
            amortiguador = "Muelle";
        else if(valor == 3)
            amortiguador = "Botella";
        else if(valor == 4)
            amortiguador = "Electronico";
        else 
            amortiguador = "opcion no valida";
     BicicletaMontana miBici = new BicicletaMontana(numeroVelocidades,velocidad,marca,altura,color,frenos,amortiguador);
        System.out.println(miBici.informacion()); 
    }
}
