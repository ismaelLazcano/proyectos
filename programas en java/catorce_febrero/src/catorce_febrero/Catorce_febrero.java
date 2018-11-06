/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package catorce_febrero;

import java.util.Scanner;

/**
 *
 * @author ismal
 */
public class Catorce_febrero {

    /**
     * args the command line arguments
     */
    public static void main(String[] args) {
         Scanner teclado = new Scanner(System.in);
        String nombre;
        String direccion;
        long id;
        long cuenta;
        long cash;
        
        //declarar objetos
        System.out.println("dame nombre de cliente: ");
        nombre = teclado.nextLine();
        System.out.println("dame id de cliente: ");
        id = teclado.nextLong();
        System.out.println("dame direccion: ");
        teclado.nextLine();
        direccion = teclado.nextLine();
        System.out.println("dame numero de cuenta: ");
        cuenta = teclado.nextLong();
        System.out.println("ingresa saldo: ");
        cash = teclado.nextLong();
       cliente cliente1 = new cliente(nombre,id,direccion);
       cuentabancaria cuenta1 = new cuentabancaria(cuenta,cliente1,cash);
       
       
       cliente cliente2 = new cliente("pedro",5678,"hermenejildo");
       cuentabancaria cuenta2 = new cuentabancaria(56483,cliente2,12000);
       
       
       
    }
    
}

/*
cuentabancaria cuenta1 = new cuentabancaria();//constructor
       cuentabancaria cuenta2 = new cuentabancaria();
       cliente cliente1,cliente2;
       long valor;
       cliente1 = new cliente();
       cliente2 = new cliente();
       
       cuenta1.numero = 123456;
       cuenta2.numero = 789213;
       cuenta1.titular = cliente1;
       cuenta2.titular = cliente2;
       cuenta1.saldo = 50000;
       cuenta2.saldo = 32000;
       cliente1.nombre = "jose perez";
       cliente2.nombre = "martina juarez";
       cliente1.direccion = "Av. central #45";
       cliente2.direccion = "Av. de los venados #54";
       cliente1.ID = 80801;
       cliente2.ID = 12345;
       
        System.out.println("cliente se llama: "+cliente1.nombre);
        System.out.println("saldo de cuenta: "+cuenta1.saldo);
       
        
        System.out.println("cuanto dinero quieres transferir: ");
        valor = teclado.nextLong();
        
      
        System.out.println("el valor de cuenta 1 es: "+cuenta1.saldo);
        System.out.println("el valor de cuenta 2 es: "+cuenta2.saldo);
        cuenta1.transferencia(valor, cuenta2);
        System.out.println("el valor de cuenta 1 es: "+cuenta1.saldo);
        System.out.println("el valor de cuenta 2 es: "+cuenta2.saldo);
*/