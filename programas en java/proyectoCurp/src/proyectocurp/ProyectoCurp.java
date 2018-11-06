/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package proyectocurp;

import java.util.Scanner;
import javax.swing.JOptionPane;
import static proyectocurp.crearCurp.vali_us;

/**
 *
 * @author ismal
 */
public class ProyectoCurp {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String entidad, genero, fecha = null, an, m, d, veri = "0", veri_dos = "0", nuenom;
        String nombre, apellido_patrno, apellido_materno, homoclave, curpfin;
        crearCurp curp = new crearCurp();
        //if (curp.ingresa()) {
           // nuenom = curp.revisar(curp.vali_us);
           // System.out.println("Bienvenido " + nuenom);
            while (apoyo()) {
                int opcion, a = 0, aa = 0, mm = 0, dd = 0;
                String Ent = null, Gen = null;
               nombre = JOptionPane.showInputDialog("Ingrese nombre: "); //nombre ..........
                if (nombre.length() >= 3) {
                    nombre = curp.nPila(nombre);
                apellido_patrno = JOptionPane.showInputDialog("escribe apellido paterno en mayusculas, EN CASO DE NO TENER FAVOR DE COLOCAR UNA X: ");
                    if (apellido_patrno.equals("X") || apellido_patrno.equals(" X")) {
                        apellido_patrno = "XX";
                    }
                    System.out.println("escribe apellido materno en mayusculas, EN CASO DE NO TENER FAVOR DE COLOCAR UNA X: ");
                    apellido_materno = sc.nextLine();
                    if (apellido_materno.equals("X") || apellido_materno.equals(" X")) {
                        apellido_materno = "XX";
                    }
                    if (curp.letraMayus(nombre) == true && curp.letraMayus(apellido_patrno) == true
                            && curp.letraMayus(apellido_materno) == true) {
                        homoclave = curp.homoclave(nombre, apellido_patrno, apellido_materno);
                        curpfin = curp.primerLetra(nombre, apellido_materno, apellido_patrno);
                        System.out.print("******* REGISTRO DE SEXO *********\n"); //registro de sexo
                        System.out.print("  1.- Hombre          2. Mujer             \n ");
                        System.out.println("ELIJA EL SEXO :  ");
                        genero = sc.nextLine();
                        if (genero.matches("[1-2]*")) {
                            opcion = Integer.parseInt(genero);
                            switch (opcion) {
                                case 1:  Gen = "H";   break;
                                case 2:  Gen = "M";   break;
                            }
                            do {                       
                                a = 0;
                                System.out.println("Indica el mes de nacimiento, dos digitos ");
                                m = sc.nextLine();
                                if (m.matches("\\d*")) {
                                    mm = Integer.parseInt(m);
                                }
                                System.out.println("Indica el día de nacimiento, dos digitos");
                                d = sc.nextLine();
                                if (d.matches("\\d*")) {
                                    dd = Integer.parseInt(d);
                                }
                                System.out.println("Indica año de nacimiento, cuatro digitos ");
                                an = sc.nextLine();
                                if (an.matches("\\d*")) {
                                    aa = Integer.parseInt(an);
                                }
                                if (aa < 1700 || aa > 2018) {
                                    a++;
                                    System.out.println("FECHA INVALIDA FAVOR DE INGRESAR NUEVAMENTE");
                                }
                            } while (a >= 1);
                            if (curp.mes(mm, dd, aa) == 1) {
                                /**
                                 * se almacenan varibales finales
                                 */
                                fecha = curp.fecha(an, m, d);
                                Ent = curp.Enti();
                                veri_dos = curp.genera();
                                curpfin = curp.getMalaPalabra(curpfin);
                                System.out.println("curp: " + curpfin + fecha + Gen + Ent + homoclave + veri + veri_dos);//imprimimos curp    
                                /**
                                 * mensajes de error
                                 */
                            } else {
                                System.out.println("DIA INCORRECTO");
                            }
                        } else {
                            System.out.println("FAVOR DE SOLO INTRODUCIR VALORES NUMERICOS EN ESTA PARTE DEL MENU!"
                                    + "\nY OPCIONES QUE ESTEN DENTRO DEL MENU!");
                        }
                    } else {
                        System.out.println("FAVOR DE ESCRIBIR NOMBRE Y APELLIDOS EN MAYUSCULAS!");
                    }
                } else {
                    System.out.println("NOMBRE INVALIDO, ESCRIBA NOMBRE COMPLETO");
                }
            }
       // } else {
         //   System.out.println("USUARIO O CONTRASENA INCORRECTOS");
        // }
    }

    public static boolean apoyo() {
        Scanner sc = new Scanner(System.in);
        String l;
        System.out.println("deseas generar curp? s/n");
        l = sc.nextLine();
        return "S".equals(l) || "s".equals(l);
    }
}
