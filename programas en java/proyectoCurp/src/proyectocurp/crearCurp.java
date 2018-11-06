            /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package proyectocurp;
import java.util.Random;
import java.util.Scanner;
import javax.swing.JOptionPane;
/**
 *
 * @author ismal
 */
public class crearCurp {  
     int a = 1,b = 2;
    String letra;
    char nom,ap_p,ap_m; //declaracion de variables que guardaran homoclave
    crearCurp(){}
     public String homoclave(String nombre,String apellido_paterno,String apellido_materno){    
        ap_p = apellido_paterno.charAt(b-1); //calcula la homoclave 
        ap_m = apellido_materno.charAt(b-1);
         nom = nombre.charAt(b-1);
         while(checa(ap_p)== 0){ //checamos apellido paterno
            ap_p = apellido_paterno.charAt(b-1);
        }
         letra = apellido_paterno.substring(a,b);
        a  = 1; //checamos apellido materno
        b = 2;
        while(checa(ap_m)== 0){
            ap_m = apellido_materno.charAt(b-1);
        }
         letra = apellido_materno.substring(a,b); 
        a  = 1; //checamos nombre
        b = 2;
          while(checa(nom )== 0){
            nom = nombre.charAt(b-1);
        }
         letra = nombre.substring(a,b);     
        String ape_pa = Character.toString(ap_p);
        String ape_ma = Character.toString(ap_m);
        String nombr = Character.toString(nom);
        letra = ape_pa + ape_ma + nombr;
        return letra;
    } 
    public int checa(char caracter){ // apoyo para metodo homoclave
        if(caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U' || caracter == ' '){
            a++;
            b++;
        }else{
            return 1;
        }
        return 0;
    }
   public boolean letraMayus(String cadena){
       /*
       *valida si las letras de nombre y apellido sean mayusculas 
       */
       boolean resp = false;
       int cont = 0;
       String mayus = "ABCDEFGHIJKLMNOPQRSTUVWXYZ' '",palabra = cadena;
       char letras= ' ';
       for(int i = 0;i < cadena.length();i++){
           for(int j = 0;j < mayus.length();j++){
             letras = palabra.charAt(i);
             if(letras == mayus.charAt(j)){   
              cont++;
             }
         }
       }
       if(cont == cadena.length()){
           resp = true;
       }
       return resp;
   } 
   public String fecha ( String a, String m, String d){ //junta los datos de la fecha y regresa como String 
	String fecha;
        fecha = a.substring(2,4)+m+d;
	return fecha;
}
   public int mes(int mes,int dias,int anio){ //valida que mes ingreso el usuario y si los dias son correctos 
        switch (mes) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:           mes = 1;                break;
            case 4:
            case 6:
            case 9:
            case 11:           mes = 2;                break;
            case 2:
                if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) 
                    dias = 2;
                    else 
                    dias = 28;
                mes = 3;
                break;
            default:
                System.out.println("El mes que introdujiste es incorrecto");
                break;      
        }
        if(mes == 1){
            if(dias > 0 && dias <= 31)
                    return 1;
            else 
                return 2;
        }else if(mes == 2){
            if(dias > 0 && dias <= 30)
                return 1;
            else 
                return 2;
        }else if(mes == 3){
            if(dias > 0 && dias <= 28 || dias > 0 && dias <= 29)
                return 1;
            else 
                return 0;
        }
    return 0;
   }
   public String primerLetra(String nombre,String apellido_mate,String apellido_pate){ 
       String letras,mate,pate,pate_tres,fin = null; 
       /**
        * este metodo sirve para conseguir las primeras letras del apellido paterno, primer letra del materno
        * y nombre, al final regresa todo 
        */
       char pate_dos = 0;
       int d = 2;
       letras = nombre.substring(0,1);
      mate = apellido_mate.substring(0,1);
      
      pate = apellido_pate.substring(0,1);
      pate_tres = primeraVocal(apellido_pate);
      fin = pate+pate_tres + mate + letras;
      return fin;
   }
   public String primeraVocal(String s){    //extraemos primer vocal 
       char []vocales = {'A','E','I','O','U'};
       char palabra;
       String letra;
       int i;
         for(i = 0;i < s.length();i++){
             for(int j = 0;j < vocales.length;j++){
                 palabra = s.charAt(i+1);
                 if(palabra == vocales[j]){
                    letra =  Character.toString(palabra); 
                     return letra;
                 }
             }
         }
        
return null;
   }
   public String genera(){ //metodo que genera numero verificador al azar 
       int n;
       String num;
       n = (int)(Math.random()*9);
       num = Integer.toString(n);
       return num; 
   }
   public String getMalaPalabra(String letras) { //validar que resultado final no sea ofensivo
       String resultado = null;
       int l= letras.length();
       int cont = 0;
        String groserias[] = {"NACO", "PUTO", "PUTA", "PITO","PENE", "CACA","PEDO","COÑO","CULO"};
        char letr;
        for (int n = 0; n < groserias.length; n++) {
            if (letras.equals(groserias[n])) {
                n = groserias.length; 
                cont++;
            }
        }
        if(cont >= 1){
            resultado = letras.substring(0,l-1);
            resultado += "X";
        }else{
            return letras;
        }
       return resultado;
    }
   
   public String Enti (){    // menu para ingresar entidad
      Scanner sc = new Scanner(System.in);
      String entidad2, Ent = null;  
      int opcion;      
      System.out.print("******* REGISTRO DE ENTIDAD *********\n"); //entidad federativa
      System.out.print("  1.- Aguascalientes          12. Guerrero            23. Quintana Roo \n ");
      System.out.print("  2.- Baja California         13. Hidalgo             24. San Luis Potosí \n ");
      System.out.print("  3.- Baja California Sur     14. Jalisco             25. Sinaloa \n ");
      System.out.print("  4.- Campeche                15. Estado de México    26. Sonora \n ");
      System.out.print("  5.- Coahuila                16. Michoacán           27. Tabasco \n ");
      System.out.print("  6.- Colima                  17. Morelos             28. Tamaulipas \n ");
      System.out.print("  7.- Chiapas                 18. Nayarit             29. Tlaxcala \n ");
      System.out.print("  8.- Chihuahua               19. Nuevo León          30. Veracrúz \n ");
      System.out.print("  9.- Ciudad de México        20. Oaxaca              31. Yucatán \n ");
      System.out.print(" 10.- Durango                 21. Puebla              32. Zacatecas \n ");
      System.out.print(" 11.- Guanajuato              22. Querétaro           33. Extranjero \n ");
      System.out.println("ELIJA ESTADO DE NACIMIENTO :  ");
       entidad2 = sc.nextLine();
       if(entidad2.matches("\\d*")){
           opcion = Integer.parseInt(entidad2);
           if(opcion < 34 && opcion > 0){
       switch (opcion) {
          case 1:               Ent = "AS";                break;
          case 2:               Ent = "BC";                break;
          case 3:               Ent = "BS";                break;
          case 4:               Ent = "CC";                break;
          case 5:               Ent = "CL";                break;
          case 6:               Ent = "CM";                break;
          case 7:               Ent = "CS";                break;
          case 8:               Ent = "CH";                break;
          case 9:               Ent = "DF";                break;
          case 10:              Ent = "DG";                break;
          case 11:              Ent = "GT";                break;
          case 12:              Ent = "GR";                break;
          case 13:              Ent = "HG";                break;
          case 14:              Ent = "JC";                break;
          case 15:              Ent = "MC";                break;
          case 16:              Ent = "MN";                break;
          case 17:              Ent = "MS";                break;
          case 18:              Ent = "NT";                break;
          case 19:              Ent = "NL";                break;
          case 20:              Ent = "OC";                break;
          case 21:              Ent = "PL";                break;
          case 22:              Ent = "QT";                break;
          case 23:              Ent = "QR";                break;
          case 24:              Ent = "SP";                break;
          case 25:              Ent = "SL";                break;
          case 26:              Ent = "SR";                break;
          case 27:              Ent = "TC";                break;
          case 28:              Ent = "TS";                break;
          case 29:              Ent = "TL";                break;
          case 30:              Ent = "VZ";                break;
          case 31:              Ent = "YN";                break;
          case 32:              Ent = "ZS";                break;
          case 33:              Ent = "NE";                break;
           default: System.out.println("ESA OPCION NO ESTA EN EL MENU");
        }      
        }else 
              System.out.println("FAVOR DE SOLO INTRODUCIR VALORES NUMERICOS EN ESTA PARTE DEL MENU!"
                    + "\nY OPCIONES QUE ESTEN DENTRO DEL MENU!");
       }else 
              System.out.println("FAVOR DE SOLO INTRODUCIR VALORES NUMERICOS EN ESTA PARTE DEL MENU!"
                    + "\nY OPCIONES QUE ESTEN DENTRO DEL MENU!");
       return Ent;
   }
   public String nPila(String hola){ 
        //validar si el nombre es jose o maria 
        //y validar si tiene un segundo nombre
       String nueva = null,separa,aux = null;
       int tam = hola.length(),a = 0;
        separa = hola.substring(0,4);
        if(separa.equals("JOSE") && tam > 6){
            aux = hola.substring(5,7);
            if(aux.equals("DE")){
                aux = hola.substring(5,10);
                if(aux.equals("DE LA"))
                    nueva = hola.substring(11, tam);
               else
                nueva = hola.substring(8, tam); 
            }else 
                nueva = hola.substring(5, tam);
        }else if(separa.equals("JOSE") && tam == 4){
            return hola;
        }else{
            separa = hola.substring(0,5);
        if(separa.equals("MARIA") && tam > 7){
            aux = hola.substring(6,8);
            if(aux.equals("DE")){
                aux = hola.substring(6,11);
            if(aux.equals("DE LA"))
                nueva = hola.substring(12, tam);
            else
                nueva = hola.substring(9, tam);
            }else 
                nueva = hola.substring(6, tam);
        }else if(hola.equals("MARIA") && tam == 5){
            return hola;
        }  
        }
   
        if(nueva != null)
        return nueva;
        else 
            return hola;
   }
    private static String []usuari = {"A206760-3","A206833-2","A206749-8","A203269-6","A206702-5","A206688-9","A206824-4","A206762-8","M206114-2","A206799-5"};
    private static String []contrasena = {"IDLG","JMVC","LMHT","ASOV","RACI","BGCM","ARTS","SLP","VL","NPL"};
    static String vali_us,vali_con;
    public static boolean ingresa(){
        int con = 0;
        vali_us = JOptionPane.showInputDialog("Ingrese usuario: ");
        vali_con = JOptionPane.showInputDialog("Ingrese contraseña: ");
        for(int i = 0;i < usuari.length;i++){
            if(vali_us.equals(usuari[i])){
                con++;
            } 
            if(vali_con.equals(contrasena[i])){
                    con++;
                }
        }
        return con == 2;
    }
    public String revisar(String us){
        String nom = null;
        if(us.equals("A206760-3"))
            nom = "ISMAEL";
        else if(us.equals("A206833-2"))
            nom = "MAURICIO";
        else if(us.equals("A206749-8"))
            nom = "LUIS";
        else if(us.equals("A203269-6"))
            nom = "AYDE";
        else if(us.equals("A206702-5"))
            nom = "RAUL";
        else if(us.equals("A206824-4"))
            nom = "AMADA";
        else if(us.equals("A206762-8"))
            nom = "SAUL";
        else if(us.equals("M206114-2"))
            nom = "PROFESOR VLADIMIR";
        else if(us.equals("A206688-9"))
            nom = "Brayan";
        else if(us.equals("206799-5"))
                nom = "NORMA";
        return nom;
    }
    
    public String validaenie(String apellido){
        int numero;
        char letra = 0;
        String fina = Character.toString(letra);
       for(int i = 0;i < apellido.length();i++){
                     numero = apellido.charAt(i);
                     letra = apellido.charAt(i);             
                     if(numero == 65533){
                       letra = 'X';  
                     }
                     fina +=Character.toString(letra);
                 }
       return fina;
    }
}
