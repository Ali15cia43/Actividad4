//
// Created by alicia de la g on 07/11/2023
//

#include "Reloj.h"
#include <string>

using namespace std;

void Reloj::setHora(int _hora) {

    if(_hora >= 25 ){
        hora = 0;
    }else{
        hora = _hora;
    }

}

void Reloj::setMinutos(int _minutos) {

    minutos = _minutos;
}

string Reloj::str(){

    if (minutos > 9){
        if (hora == 0){
            return to_string(hora) + "0:" +  to_string(minutos);
        }
        else{
            return to_string(hora) + ":" + to_string(minutos);
        }
    }
    else if (minutos <= 9){
        if (hora == 0){
            return to_string(hora) + "0:0" +  to_string(minutos);
        }
        else{
            return to_string(hora) + ":0" + to_string(minutos);
        }
    }
    else{
        if (hora == 0){
            return to_string(hora) + "0:0" +  to_string(minutos);
        }
        else{

            return to_string(hora) + ":0" +  to_string(minutos);
        }
    }
}


void Reloj::incrementaMinutos() {
    minutos++;
    if (minutos >= 60) {
        minutos = 0;
        hora++;
        if (hora >= 24) {
            hora = 0;
        }
    }
}
