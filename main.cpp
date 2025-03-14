//
//  main.cpp
//  AppReloj
//
//  Created by Ma. Guadalupe Roque Díaz de León on 10/11/21.
//

#include <iostream>
#include "Reloj.cpp"
#include "Reloj.h"

using namespace std;

int menu(){
    int opcion;

    cout << "Menú de opciones" <<
    "\n1. setHora(int)" <<
    "\n2. setMinutos(int)" <<
    "\n3. incremetar Minutos" <<
    "\n4. Salir" <<
    "\nTeclea la opcion:";
    // leer la opcion
    cin >> opcion;
    
    return opcion;
}

int main() {
    // Declaración del objeto de la clase Reloj
    Reloj hrIniFiesta;
    int opcion, hr, min;
    
    hrIniFiesta.setHora(0);
    hrIniFiesta.setMinutos(0);
    // 1º Inicializar la vccc - la función menu( ) retorna la opcion elegida por el usuario
    opcion = menu( );
    
    while (opcion != 4){ // 2º Incluir la condición la vccc
        
        if (opcion == 1){
            // leer hora
            cout << "Ingresa la nueva hora:";
            cin >> hr;
            hrIniFiesta.setHora(hr);
        }
        else if (opcion == 2){
            // leer minutos
            cout << "Ingresa los nuevos minutos:";
            cin >> min;
            hrIniFiesta.setMinutos(min);
        }
        else if (opcion == 3){
            hrIniFiesta.incrementaMinutos();
        }
        else cout << "Opcion incorrecta\n";
        
        cout << hrIniFiesta.str( ) << endl;
        opcion = menu(); // 3º Actualizar la vccc dentro del ciclo
    }
    
    return 0;
}