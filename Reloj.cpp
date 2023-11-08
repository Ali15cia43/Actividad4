//
// Created by alici on 07/11/2023.
//

#include "Reloj.h"
#include <string>
#include <stdio.h>
#include "Reloj.h"
using namespace std;

void Reloj::setHora(int _hora) {
    hora = _hora;
}

void Reloj::setMinutos(int _minutos) {
    minutos = _minutos;
}

string Reloj::str(){
    return "La hora es " + to_string(hora) + ":" + to_string(minutos);
}


void Reloj::incrementaMinutos() {
    minutos++;
    if (minutos == 60) {
        minutos = 0;
        hora++;
        if (hora == 24) {
            hora = 0;
        }
    }
}
