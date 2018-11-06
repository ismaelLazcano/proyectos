/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package catorce_febrero;

/**
 *
 * @author ismal
 */
public class cuentabancaria {
    long numero;
    cliente titular;
    long saldo;
    cuentabancaria(long num,cliente person,long cash){
        numero = num; titular = person; saldo = cash;
    }
    
    
    public void ingresar(long cantidad){       //ingresar dinero
        saldo += cantidad;
    }
    public void retirar(long cantidad){        //sacar dinero
        if(cantidad > saldo)
            System.out.println("error! saldo insufiente");
        else
            saldo-=cantidad;
    }
    public void transferencia(long numero,cuentabancaria cuentadestino){
        if(saldo < numero){
            System.out.println("error no hay fondo suficiente ");
        }else{
           cuentadestino.ingresar(numero);
            saldo -= numero;
        }
    }
}