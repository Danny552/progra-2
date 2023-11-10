#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Votante
{
    char código[12]; //Documento identidad
    char nombre[60]; //Nombre
    char contraseña[100]; //Contraseña establecida por el programa
    bool voto; //Si ya votó o no
    int tipo; //Tipo de votante (Estudiante, Egresado, Docentes, Administrativos)
};

struct Admin
{
    char código[12]; //Documento identidad
    char nombre[60]; //Nombre
    char contraseña[100]; //Contraseña establecida
};

struct Votos
{
    int votosEstudiantes; //Cantidad de votos por parte de estudiantes
    int votosDocentes; //Cantidad de votos por parte de docentes
    int votosEgresados; //Cantidad de votos por parte de egresados
    int votosAdministrativos; //Cantidad de votos por parte de administrativos
    int totales;
};

struct Candidato
{
    char nombre[60]; //Nombre
    char código[12]; //Documento identidad
    char nTarjetón; //Número en el tarjetón
    struct Votos votos; //Cantidad de votos a favor
};

void CrearArchivo()
{
    //Se crea un archivo donde se almacenarán los códigos
}

void AñadirVotante()
{
    //Opción para el administrativo para registrar un votante
}

void ElimiarVotante()
{
    //Opción del Admin para eliminar un votante
}

void EditarVotante()
{
    //Opción del Admin para editar un votante
}

void ConsultarVotantes()
{
    //Opción del administrador para consultar los datos de los votantes
}

void AñadirCandidato()
{
    //Opción del administrador para registrar un candidato
}

void EliminarCandidato()
{
    //Opción del administrador para eiminar un candidato
}

void ConsultarCandidatos()
{
    //Opción del administrador para consultar los datos de los candidatos
}

void ConsultarVotosESpecificos()
{
    //Opción del administrador para consultar cuantos votos lleva un candidato especifico
}

void ConsultarVotos()
{
    //Opción del administrador para consultar como van las votaciones
}

void FinalizarVotación()
{
    //Opción del administrador para finalizar la consulta
}