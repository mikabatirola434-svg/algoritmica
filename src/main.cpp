/*
   ====================================================================
   Materia: Laboratorio de Programacion (LPR) - 5to Año
   Institución: "Escuela de Educación Técnica N.° 1 "Eduardo Ader"" - Vicente López
   Archivo: src/main.cpp
   Actividad 9: Práctica en papel "pensar antes de programar"
   ====================================================================
*/

#include <iostream>
#include <string>

using namespace std;

struct Jugador {
    string nickname;
    int nivel;
    bool esVIP;
};

int main() {

    cout << "============================================================" << endl;
    cout << "LPR 2026 - ACTIVIDAD 9: PRACTICA EN PAPEL: PENSAR ANTES DE PROGRAMAR" << endl;
    cout << "Estudiante / Grupo: Mikaela Batirola" << endl; // <-- Pon tu nombre aquí
    cout << "============================================================" << endl;

    // EJERCICIO 1: El Sensor de Aprobacion
    cout << "------------------------------------------------------------" << endl;
    cout << "EJERCICIO 1: EL SENSOR DE APROBACION" << endl;
    cout << "------------------------------------------------------------" << endl;

    const int NOTA_MINIMA = 6;
    float nota1, nota2, promedio;

    cout << "Ingrese nota 1er cuatrimestre: ";
    cin >> nota1;
    cout << "Ingrese nota 2do cuatrimestre: ";
    cin >> nota2;

    promedio = (nota1 + nota2) / 2;
    cout << "Promedio: " << promedio << endl;

    if (promedio >= NOTA_MINIMA) {
        cout << "Resultado: APROBADO" << endl;
    } else {
        cout << "Resultado: A INTENSIFICACION" << endl;
    }

    // EJERCICIO 2: Contador de Vidas
    cout << "------------------------------------------------------------" << endl;
    cout << "EJERCICIO 2: EL BUCLE DEL CONTADOR DE VIDAS" << endl;
    cout << "------------------------------------------------------------" << endl;

    int vidas = 3;

    while (vidas > 0) {
        cout << "Jugador activo. Vidas restantes: " << vidas << endl;
        vidas = vidas - 1;
    }
    cout << "GAME OVER" << endl;

    // EJERCICIO 3: Registro de Jugador
    cout << "------------------------------------------------------------" << endl;
    cout << "EJERCICIO 3: REGISTRO DE JUGADOR EN MEMORIA" << endl;
    cout << "------------------------------------------------------------" << endl;

    Jugador jugador;

    cout << "Nickname: ";
    cin >> jugador.nickname;
    cout << "Nivel: ";
    cin >> jugador.nivel;
    cout << "Es VIP? (1 = si, 0 = no): ";
    cin >> jugador.esVIP;

    if (jugador.esVIP == true) {
        cout << "Bienvenido al Servidor VIP, " << jugador.nickname << endl;
    } else {
        cout << "Bienvenido al Servidor Estandar, " << jugador.nickname << endl;
    }

    // EJERCICIO 4: Control de Inventario
    cout << "------------------------------------------------------------" << endl;
    cout << "EJERCICIO 4: CONTROL DE INVENTARIO CON VECTORES" << endl;
    cout << "------------------------------------------------------------" << endl;

    int stock[5] = {12, 0, 5, 30, 0};
    int i = 0;

    while (i < 5) {
        if (stock[i] == 0) {
            cout << "ALERTA: Sin stock en la posicion " << i << endl;
        }
        i = i + 1;
    }

    cout << "============================================================" << endl;
    cout << "FIN DEL PROGRAMA" << endl;
    cout << "============================================================" << endl;

    return 0;
}
