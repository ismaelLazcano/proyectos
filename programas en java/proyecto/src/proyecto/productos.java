
package proyecto;
import java.util.Scanner;
/**
 *
 * @author ismal
 */
public class productos {
    int a=0,b=0,c=0,d=0,tot=0, tamanio= 10;
    double ganancias = 0;
    double aux = 0,impues = 0; //cambiar todos los long por double
    String []lacteos = new String[tamanio];int []cantidadlac = new int[10];double []precioComlac = new double[10];//lacteos
    double []precioVenlac = new double [10];
    String []enlatados = new String[10];int []cantienla = new int[10];double []preciocomenla = new double[10]; //enlatados
    double []precioventenla = new double[10];
    String []carnes = new String[10];int []cantidadcar = new int[10];double []precioComcar = new double[10];//carnes
    double []precioVencar = new double[10];
    String []cereales = new String[10];int []cantidadcer = new int[10];double []precioComcer = new double[10];//cereales
    double []precioVencer = new double[10];
    
    // ListArray
   
    public productos(){} //contructor
    public void insertarPro(int asi){                           //insertamos todos los productos dependiendo
        Scanner teclado = new Scanner(System.in);                     // de categoria     
        switch (asi) {
            case 1:
                if(a <= 10){ 
                System.out.println("¿cual es el nombre de producto?: ");
                lacteos[a] = teclado.nextLine();
                datos(asi);
                a++;
                }else{
                    System.out.println("inventaria lleno en esta categoria!!");
                }
                break;
            case 2:
                if(b <= 10){
                    
                    System.out.println("¿cual es el nombre de producto?: ");
                enlatados[b] = teclado.nextLine();
                datos(asi);
                b++;
                }else{
                    System.out.println("inventario lleno en esta categoria!!");
                }
                break;
            case 3:
                if(c <= 10){
                System.out.println("¿cual es el nombre de producto?: ");
                carnes[c] = teclado.nextLine();
                datos(asi);
                c++;
                }else{
                    System.out.println("inventario lleno en esta categoria!");
                }
                break;
            case 4: 
                if(d <= 10){
                System.out.println("¿cual es el nombre de producto?: ");
                cereales[d] = teclado.nextLine();
                datos(asi);
                d++;
                }else{
                    System.out.println("inventario lleno en esta categoria!");
                }
                break;
            default:   
        }        
      }   
    public void datos(int asi){ //ingresamos datos por categoria
        Scanner teclado = new Scanner(System.in);
        productos ingresa = new productos();
        switch(asi){
            case 1:
                //insertamos productos de lacteos
                System.out.println("¿cuantos productos hay?: ");
                cantidadlac[a] = teclado.nextInt();
                // condicion 
                tot += cantidadlac[a];
                System.out.println("¿cual fue el precio compra?: ");
                precioComlac[a] = teclado.nextDouble();
                System.out.println("¿cual sera el precio de venta  al publico?: ");
                precioVenlac[a] = teclado.nextDouble();
                break;
            case 2:
                //insertamos productos de enlatados 
                System.out.println("¿cuantos productos hay?: ");
                cantienla[b] = teclado.nextInt();
                tot += cantienla[b];
                System.out.println("¿cual fue el precio compra?: ");
                preciocomenla[b] = teclado.nextDouble();
                System.out.println("¿cual sera el precio de venta  al publico?: ");
                precioventenla[b] = teclado.nextDouble();
                break;
            case 3:
                //inseertamos productos de carnes 
                System.out.println("¿cuantos productos hay?: ");
                cantidadcar[c] = teclado.nextInt();
                tot += cantidadcar[c];
                System.out.println("¿cual fue el precio compra?: ");
                precioComcar[c] = teclado.nextDouble();
                System.out.println("¿cual sera el precio de venta  al publico?: ");
                precioVencar[c] = teclado.nextDouble();
                break;
            case 4:
                 System.out.println("¿cuantos productos hay?: ");
                cantidadcer[d] = teclado.nextInt();
                tot += cantidadcer[d];
                System.out.println("¿cual fue el precio compra?: ");
               precioComcer[d] = teclado.nextDouble();
                System.out.println("¿cual sera el precio de venta  al publico?: ");
               precioVencer[d] = teclado.nextDouble();
                break;
            default: System.out.println("esa opcion no esta en las categorias!");
        }
    }
    public void imprime(int asi){//impresion por categoria
        switch(asi){
            case 1:
                for (int i =0;i < lacteos.length;i++) {
            System.out.println("\t\t\t"+i +" nombre: "+lacteos[i]+" hay: "+cantidadlac[i]+" productos");
            System.out.println("\t\t\tprecio compra: "+precioComlac[i]+" su precio venta: "+precioVenlac[i]);         
        }
                break;
            case 2:
                for (int i =0;i < enlatados.length;i++) {
            System.out.println("\t\t\t"+i +" nombre: "+enlatados[i] +" hay: "+cantienla[i]+"productos");
            System.out.println("\t\t\tprecio compra: "+preciocomenla[i]+" su precio venta: "+precioventenla[i]);           
        }
                break;
            case 3:
                for (int i =0;i < carnes.length;i++) {
            System.out.println("\t\t\t"+i +" nombre: "+carnes[i]+" hay: "+cantidadcar[i]+" productos");
            System.out.println("\t\t\tprecio compra: "+precioComcar[i]+" su precio venta: "+precioVencar[i]);
        }
                break;
            case 4:
                for (int i =0;i < cereales.length;i++) {
            System.out.println("\t\t\t"+i +" nombre: "+cereales[i]+" hay: "+cantidadcer[i]+" productos");
            System.out.println("\t\t\tprecio compra: "+precioComcer[i]+" su precio venta: "+precioVencer[i]);
        }
                break;        
            default: System.out.println("esa opcion no esta en el menu!");
        }
    }
    public double total(double preciocom[],double preciove[]){ //calculo de todas las cantidades
        aux = 0;
        
        double perdidas = 0;
        for(int i = 0;i < preciocom.length;i++){
        if(preciocom[i] < preciove[i]){
            ganancias += preciove[i] - preciocom[i];
            aux = preciove[i] - preciocom[i];
        }else if(preciocom[i] > preciove[i]){
            perdidas = preciocom[i] - preciove[i];
        }
       }
        ganancias -= perdidas;
        return perdidas;
    }
    
    
}
