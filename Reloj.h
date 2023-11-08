//
// Created by alicia de la g on 07/11/2023.
//

#ifndef ACTIVIDAD4_RELOJ_H
#define ACTIVIDAD4_RELOJ_H
#include <string>
using namespace std;

class Reloj {

private:
    int hora, minutos;

public:

    void incrementaMinutos();
    void setHora(int _hora);
    void setMinutos(int _minutos);
    string str();

};


#endif //ACTIVIDAD4_RELOJ_H
