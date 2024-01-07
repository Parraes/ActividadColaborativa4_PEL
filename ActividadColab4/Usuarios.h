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
        
    }

    ~Perfil() {
        // Agregar código del destructor si es necesario
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
        try {
            // Intenta llamar al método eliminar de la lista de contactos
            contactos.eliminar(nombre);
        } catch (const runtime_error& e) {
            // En caso de que se lance una excepción (por ejemplo, si el contacto no se encuentra),
            // captura la excepción y muestra un mensaje de error en la consola
            cout << "Error al eliminar contacto: " << e.what() << endl;
        }
    }

    void importar_contactos(Perfil& perfil_destino) {
        // Implementar la lógica para importar contactos y eliminar duplicados
        // entre el perfil actual y el perfil de destino.
        Nodo* actual = contactos.cabeza;

        while (actual != nullptr) {
            // Verifica si el contacto ya existe en el perfil de destino
            Nodo* contactoExistente = perfil_destino.buscar_contacto(actual->dato.nombre);

            if (contactoExistente == nullptr) {
                // Si el contacto no existe en el perfil de destino, agrégalo
                perfil_destino.agregar_contacto(actual->dato);
            } else {
                // Si el contacto ya existe en el perfil de destino, podrías querer
                // realizar alguna acción específica, como fusionar la información o ignorar el duplicado
                cout << "Contacto '" << actual->dato.nombre << "' ya existe en el perfil de destino." << endl;
            }

            actual = actual->siguiente;
        }
    }
    void exportar_contactos(Perfil& perfil_destino){
        if (perfil_destino.contactos.obtenerTamanio() > 0) {
            cout << "El perfil de destino ya tiene contactos. Exportación cancelada." << endl;

        }

        // Agrega todos los contactos del perfil actual al perfil de destino
        Nodo* actual = contactos.cabeza;

        while (actual != nullptr) {
            // No necesitas verificar si el contacto ya existe en el perfil de destino,
            // ya que estás exportando todos los contactos sin importar si existen o no.
            perfil_destino.agregar_contacto(actual->dato);
            actual = actual->siguiente;
        }

        cout << "Exportación de contactos exitosa de '" << nombre << "' a '" << perfil_destino.nombre << "'." << endl;
    }

    void mostrar_contactos() {
        contactos.mostrar();
    }
};
#endif //ACTIVIDADCOLAB4_USUARIOS_H
