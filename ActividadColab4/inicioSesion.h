//
// Created by jgome on 04/01/2024.
//
#include "iostream"
using namespace std;
#ifndef ACTIVIDADCOLAB4_INICIOSESION_H
#define ACTIVIDADCOLAB4_INICIOSESION_H

class Usuario {
private:
    string usuario;
    string password;

public:
    Usuario(){
        usuario = "";
        password = "";

    }
    Usuario(string usu, string psw){
        usuario = usu;
        password = psw;
    }

    string getUsuario(){
        return usuario;
    };

    string getPassword(){
        return password;
    }

    void inicioSesion(){
        string us;
        string pss;

        cout << "Inicio de sesion" << endl;
        cout << "Introducca el usuario" << endl;
        cin >> us;
        cout << "Introducca la contraseña" << endl;
        cin >>pss;

        if (usuario != us || password != pss){
            cout << "El usuario o la contraseña son incorrectos, por favor intentelo de nuevo"<<endl;
        }
        else{
            cout << "BIENVENIDO"<<endl;
        }

    }
};


#endif //ACTIVIDADCOLAB4_INICIOSESION_H
