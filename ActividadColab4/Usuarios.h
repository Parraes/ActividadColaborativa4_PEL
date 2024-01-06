//
// Created by jgome on 04/01/2024.
//
#include "iostream"
#include "ListaEnlazada.h"
using namespace std;

#ifndef ACTIVIDADCOLAB4_USUARIOS_H
#define ACTIVIDADCOLAB4_USUARIOS_H

class Contacto {
public:
    string nombre;
    string detalles;

    Contacto(){
        nombre = "";
        detalles = "";
    }

    Contacto(string n, string d)  {
        nombre = n;
        detalles = d;
    }
};





class Perfil {
public:
    string nombre;
    LinkedList contactos;

    Perfil(string n)  {
        nombre = n;
        contactos = 0;
    }

    void agregar_contacto(Contacto contacto) {
        contactos.insertar(contacto);
    }

    void modificar_contacto(string nombre_viejo, Contacto nuevo_contacto) {
        contactos.modificar(nombre_viejo, nuevo_contacto);
    }

    Nodo* buscar_contacto(string nombre) {
        return contactos.buscar(nombre);
    }

    void eliminar_contacto(string nombre) {
        contactos.eliminar(nombre);
    }

    void importar_contactos(Perfil& perfil_destino) {
        // Implementar la lógica para importar contactos y eliminar duplicados
        // entre el perfil actual y el perfil de destino.
    }

    void mostrar_contactos() {
        contactos.mostrar();
    }
};
#endif //ACTIVIDADCOLAB4_USUARIOS_H
