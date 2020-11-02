//
// Created by MARIA HILDA BERMEJO RIOS on 11/1/20.
//

#ifndef EJEMPLO3_CALUMNO_H
#define EJEMPLO3_CALUMNO_H

#include <iostream>
using namespace std;

class CAlumno
{
private:
    string nombre;
    string apellido;
    unsigned int edad;
    unsigned int ciclo;
public:
    CAlumno(){};
    CAlumno(string _nombre, string _apellido, unsigned int _edad, unsigned int _ciclo):nombre(_nombre),
           apellido(_apellido),edad(_edad),ciclo(_ciclo) {};
    virtual ~CAlumno(){};
    //--- metodos de acceso
    void setNombre(string _nombre){ nombre = _nombre;}
    string getNombre(){return nombre;}
    void setApellido(string _apellido){ apellido = _apellido;}
    string getApellido(){ return apellido;}
    void setEdad(unsigned int _edad){ edad = _edad;}
    unsigned int getEdad(){ return edad;}
    void setCiclo(unsigned int _ciclo) { ciclo=_ciclo;}
    unsigned int getCiclo(){ return ciclo;}
};

#endif //EJEMPLO3_CALUMNO_H
