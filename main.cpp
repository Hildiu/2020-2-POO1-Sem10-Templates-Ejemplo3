#include <iostream>
#include "CAlumno.h"
#include "CProfesor.h"

template <typename tipodeObjeto>
void mostrarDatosBasicos(tipodeObjeto &objeto)
{//-------------------------------------------
  cout<<"--------\n";
  cout<<"Nombre     : "<<objeto.getNombre()<<endl;
  cout<<"Apellidos  : "<<objeto.getApellido()<<endl;
  cout<<"Edad       : "<<objeto.getEdad()<<endl;
}


int main() {
  CAlumno a1;
  a1.setNombre("Felipe");
  a1.setApellido("Carranza Arriola");
  a1.setEdad(19);

  CProfesor p1;
  p1.setNombre("Maria");
  p1.setApellido("Avalos Sanchez");
  p1.setEdad(35);

  mostrarDatosBasicos<CAlumno>(a1);
  mostrarDatosBasicos<CProfesor>(p1);

  return 0;
}