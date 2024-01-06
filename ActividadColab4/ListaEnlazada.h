//
// Created by nesma on 06/01/2024.
//
#include "Usuarios.h"
#ifndef ACTIVIDADCOLAB4_LISTAENLAZADA_H
#define ACTIVIDADCOLAB4_LISTAENLAZADA_H
#include "iostream"
using namespace std;
class Nodo {
public:
    Contacto dato;
    Nodo* siguiente;

    Nodo(Contacto d)  {
        dato = d;
        siguiente = nullptr;
    }
};
class LinkedList {
public:
    Nodo* cabeza;

    LinkedList()  {
        cabeza = nullptr;
    }

    void insertar(Contacto dato) {
        Nodo* nuevoNodo = new Nodo(dato);
        nuevoNodo->siguiente = cabeza;
        cabeza = nuevoNodo;
    }

    void modificar(string nombre_viejo, Contacto nuevo_dato) {
        // Implementar la lógica para modificar un nodo en la lista enlazada.
    }

    Nodo* buscar(string nombre) {
        // Implementar la lógica para buscar un nodo por nombre en la lista enlazada.
        return nullptr;
    }

    void eliminar(string nombre) {
        // Implementar la lógica para eliminar un nodo por nombre en la lista enlazada.
    }

    void mostrar() {
        Nodo* actual = cabeza;
        while (actual != nullptr) {
            cout << "Nombre: " << actual->dato.nombre << ", Detalles: " << actual->dato.detalles << endl;
            actual = actual->siguiente;
        }
    }
};
#endif //ACTIVIDADCOLAB4_LISTAENLAZADA_H
