//
// Created by hcorr on 07/01/2024.
//

#ifndef AC4_MODIFICARDATOS_H
#define AC4_MODIFICARDATOS_H
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

class ModificarDatos {
public:
    ModificarDatos(std::string id, std::string nombre, std::string apellido, std::string telefono, std::string email);

    //Getters
    std::string getID() const;
    std::string getNombre() const;
    std::string getApellido() const;
    std::string getTelefono() const;
    std::string getEmail() const;

    //Setters
    void setNombre(std::string nombre);
    void setApellido(std::string apellido);
    void setTelefono(std::string telefono);
    void setEmail(std::string email);

private:
    std::string id;
    std::string nombre;
    std::string apellido;
    std::string telefono;
    std::string email;
};

//Implementación de los métodos de la clase

ModificarDatos::ModificarDatos(std::string id, std::string nombre, std::string apellido, std::string telefono, std::string email) {
    this->id = id;
    this->nombre = nombre;
    this->apellido = apellido;
    this->telefono = telefono;
    this->email = email;
}

std::string ModificarDatos::getID() const {
    return id;
}

std::string ModificarDatos::getNombre() const {
    return nombre;
}

std::string ModificarDatos::getApellido() const {
    return apellido;
}

std::string ModificarDatos::getTelefono() const {
    return telefono;
}

std::string ModificarDatos::getEmail() const {
    return email;
}

void ModificarDatos::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void ModificarDatos::setApellido(std::string apellido) {
    this->apellido = apellido;
}

void ModificarDatos::setTelefono(std::string telefono) {
    this->telefono = telefono;
}

void ModificarDatos::setEmail(std::string email) {
    this->email = email;
};
#endif //AC4_MODIFICARDATOS_H
