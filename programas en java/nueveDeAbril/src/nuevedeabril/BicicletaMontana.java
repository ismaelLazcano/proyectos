/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nuevedeabril;

/**
 *
 * @author ismal
 */
public class BicicletaMontana extends Bicicleta{ //ojo con extends
    
    public int alturaAsiento;
    public String color,fren,amortiguador;
    public int frenos;
    //setter es una asignacion 
    public BicicletaMontana(int numVelocidades, int velocidad, String marca,int alturaInicial,
            String color,int frenos,String amortiguador) {
        super(numVelocidades, velocidad, marca);//constructor de Bicicleta
        alturaAsiento = alturaInicial;
        this.color = color;
        this.amortiguador = amortiguador;
        this.fren = valida(frenos);
    }
    public String valida(int frenos){
        if(frenos == 1)
            this.fren = "Disco";
        else if(frenos == 2)
            this.fren = "Goma";
        else
            this.fren = "Frenos no validos";
        
        return fren;
    }
    @Override //para poder sobreescribir una clase 
    public String informacion(){
        return(super.informacion()+"\nla altura del asiento es: "+alturaAsiento+
                "\nel color de la bici es: "+color + "\nlos frenos son: "+fren+"\namortiguador: "+amortiguador);
    }
}
