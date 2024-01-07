//
// Created by hcorr on 07/01/2024.
//

#ifndef AC4_AÑADIRCONTACTO_H
#define AC4_AÑADIRCONTACTO_H
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
class AñadirContacto {
public:
    AñadirContacto(std::string id, std::string nombre, std::string apellido, std::string telefono, std::string email);

    //Getters
    std::string getID() const;
    std::string getNombre() const;
    std::string getApellido() const;
    std::string getTelefono() const;
    std::string getEmail() const;

private:
    std::string id;
    std::string nombre;
    std::string apellido;
    std::string telefono;
    std::string email;
};

//Implementación de los métodos de la clase

AñadirContacto::AñadirContacto(std::string id, std::string nombre, std::string apellido, std::string telefono, std::string email) {
    this->id = id;
    this->nombre = nombre;
    this->apellido = apellido;
    this->telefono = telefono;
    this->email = email;
}

std::string AñadirContacto::getID() const {
    return id;
}

std::string AñadirContacto::getNombre() const {
    return nombre;
}

std::string AñadirContacto::getApellido() const {
    return apellido;
}

std::string AñadirContacto::getTelefono() const {
    return telefono;
}

std::string AñadirContacto::getEmail() const {
    return email;
};
#endif //AC4_AÑADIRCONTACTO_H
