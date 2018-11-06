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
public class Bicicleta {
    
    public int numVelocidades;
    public int velocidad;
    public String marca;
    
    public Bicicleta(int numVelocidades,int velocidad,String marca){
        this.numVelocidades = numVelocidades;
        this.velocidad = velocidad;
        this.marca = marca;
    }
    
    public String informacion(){
        return("\nmarca: "+marca+"\nvelocidad: "+velocidad+"\nnumero de velocidades: "+numVelocidades);
    }
}
