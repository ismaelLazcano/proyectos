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
public class cliente {
    String nombre;
    String direccion;
    long ID;
    cliente(String str,long num,String address){
        nombre = str; ID = num; direccion = address;
    }
}
