/*
 * clase = conjunto de propidades   
 * propiedad = tipo de dato primitivo (TDP) o un objeto, por ejemplo, una variable x,NombreDePersona
 * objeto = es una instancia (caso particular) de una clase 
 *una clase es con mayuscula y un objeto con minuscula 
 *metodo = proceso abstracto, conjunto finito de instrucciones 
 [tipodedatoSalida] [nombre de metodo] ([tipo de entrada] [nombre entrada]){
    codigo
    return dato;
    }
    funcion
 * 
 *public class automovil {
    propiedades 
     string color
     
}
 *
 */
package objetos;

import java.util.Scanner;
/**
 *
 * @author ismal
 */
public class Objetos {

    /**
     * @param args the command line arguments
     */
    
    
    public static void main(String[] args) {
        Scanner valor = new Scanner(System.in);
     
        double cuen,prop;
        int mes,opcion;
        String nom;
        
        
         //declarar constructor 
        Restaurante laGuaridaDeJose = new Restaurante();
        do{  
        System.out.println("que opcion deseas: \n1.- calcular valor de cuenta\n2.-asignar mesa"
                + "\n3.-buscar mesas disponibles"+ "\n4.-salir"+"\ningresa opcion: ");
        opcion = valor.nextInt();
        switch(opcion){
            case 1:
                
                System.out.println("dame valor de cuenta: ");
                    cuen = valor.nextDouble();
                    System.out.println("dame porcentaje de propina: ");
                     prop = valor.nextDouble();
                     System.out.println("el resultado es: " + laGuaridaDeJose.cobrarCuenta(cuen,prop));
            break;
            case 2: System.out.println("ingrese nombre de comensal: ");
                    valor.nextLine();
                    nom = valor.nextLine();
                    System.out.println("ingrese numero de mesa: ");
                    mes = valor.nextInt();
                    if(mes > 10 || mes < 1){
                        System.out.println("el valor es invalido");
                    }else{
                    System.out.println(laGuaridaDeJose.asignaMesa(nom, mes));
                    }
                    break;
            case 3:
                System.out.println("ingrese numero de mesa: ");
                mes = valor.nextInt();
                System.out.println(laGuaridaDeJose.consultaMesa(mes));
            break; 
            case 4: break;
            default : System.out.println("esa opcion no esta en el menu ");
       }
        }while(opcion != 4);
       //acceso a los metodos
       
       
        
        
      
        
        
        
     }
    
}
