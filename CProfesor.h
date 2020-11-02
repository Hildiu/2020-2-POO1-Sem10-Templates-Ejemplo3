//
// Created by MARIA HILDA BERMEJO RIOS on 11/1/20.
//

#ifndef EJEMPLO3_CPROFESOR_H
#define EJEMPLO3_CPROFESOR_H

#include <iostream>
using namespace std;

class CProfesor
{
private:
    string nombre;
    string apellido;
    unsigned int edad;
    unsigned int horas_dictado;
public:
    CProfesor(){};
    CProfesor(string _nombre, string _apellido, unsigned int _edad, unsigned int _horas_dictado):nombre(_nombre),
            apellido(_apellido),edad(_edad),horas_dictado(_horas_dictado) {};
    virtual ~CProfesor(){};
    //--- metodos de acceso
    void setNombre(string _nombre){ nombre = _nombre;}
    string getNombre(){return nombre;}
    void setApellido(string _apellido){ apellido = _apellido;}
    string getApellido(){ return apellido;}
    void setEdad(unsigned int _edad){ edad = _edad;}
    unsigned int getEdad(){ return edad;}
    void setHoras_Dictado(unsigned int _horas_dictado) { horas_dictado =_horas_dictado;}
    unsigned int getHoras_Dictado(){ return horas_dictado;}
};



#endif //EJEMPLO3_CPROFESOR_H
