//
// Created by jgome on 04/01/2024.
//
#include "iostream"
#include "Usuarios.h"
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
            Perfil usuarioActual(us);
            Contacto c1 ("Janna", "Prefiere Star Trek");
            Contacto c2 ("Elisa", "La vecina");
            Contacto c3 ("Alejandro", "Monitor de gimnasio");
            Contacto c4 ("Carlos", "Amigo de sus amigos");
            Contacto c5 ("Celia", "Estudiante de fisica");
            Contacto c6 ("Marcelo", "Guia turistico");
            Contacto c7 ("Lidia", "Actriz de teatro");
            Contacto c8 ("Julia", "Presidenta del club de ajedrez");
            Contacto c9 ("Juan", "Viva er Betih");
            Contacto c10 ("Manuel", "Busca ayuda para dejar el LOL");
            Contacto c11 ("Claudio", "El que siempre comenta como Viggo Mortensen se rompio el dedo en el senior de los anillos");
            Contacto c12 ("Pablo", "Le gustan los deportes de riesgo");
            Contacto c13 ("Paula", "Companiera de clase");
            Contacto c14 ("Laura", "El teatro musical es su pasion");
            Contacto c15 ("Alvaro", "O un 10, o nada");
            Contacto c16 ("Geronimo", "Baila flamenco");
            Contacto c17 ("Glados", "Absolutamente no un robot");
            Contacto c18 ("Gale", "Mr Dekarios para ti");
            Contacto c19 ("Olga", "Cinturon negro de Taekwondo");


            Perfil perfil_destino("Ines");
            perfil_destino.agregar_contacto(c1);
            perfil_destino.agregar_contacto(c2);
            perfil_destino.agregar_contacto(c3);
            perfil_destino.agregar_contacto(c4);
            perfil_destino.agregar_contacto(c5);
            perfil_destino.agregar_contacto(c16);




            // Realizar operaciones con la instancia de Usuario
            perfil_destino.exportar_contactos(usuarioActual);


            usuarioActual.buscar_contacto("Hugo");
            Perfil perfil2 ("Hugo");
            perfil2.agregar_contacto(c6);
            perfil2.agregar_contacto(c7);
            perfil2.agregar_contacto(c8);
            perfil2.agregar_contacto(c9);
            perfil2.agregar_contacto(c10);
            perfil2.agregar_contacto(c17);
            perfil2.agregar_contacto(c18);
            perfil2.agregar_contacto(c19);





            usuarioActual.agregar_contacto(c11);
            usuarioActual.agregar_contacto(c12);
            usuarioActual.agregar_contacto(c13);
            usuarioActual.agregar_contacto(c14);
            usuarioActual.agregar_contacto(c15);

            usuarioActual.mostrar_contactos();
            perfil_destino.mostrar_contactos();
            perfil2.mostrar_contactos();
            perfil_destino.eliminar_contacto("Alejandro");
            perfil_destino.modificar_contacto("Elisa", c4);

        }

    }
};


#endif //ACTIVIDADCOLAB4_INICIOSESION_H
