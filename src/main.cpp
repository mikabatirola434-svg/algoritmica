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

    cout << "=====================================================" << endl;
    cout << " LPR 2026 - ACTIVIDAD 9: PRÁCTICA EN PAPEL PENSAR ANTES DE PROGRAMAR " << endl;
    cout << " Estudiante / Grupo: Mikaela Batirola" << endl;
    cout << "=====================================================" << endl;



    // Ejercicio 1
    const int NOTA_MINIMA = 6;
    double nota1, nota2;
    cout << "Ingrese nota 1er cuatrimestre: "; cin >> nota1;
    cout << "Ingrese nota 2do cuatrimestre: "; cin >> nota2;
    double promedio = (nota1 + nota2) / 2;
    if (promedio >= NOTA_MINIMA) cout << "APROBADO" << endl;
    else cout << "A INTENSIFICACION" << endl;

    // Ejercicio 2
    int vidas = 3;
    while (vidas > 0) {
        cout << "Jugador activo. Vidas restantes: " << vidas << endl;
        vidas = vidas - 1;
    }
    cout << "GAME OVER" << endl;

    // Ejercicio 3
    Jugador j;
    int vip;
    cout << "Nickname: "; cin >> j.nickname;
    cout << "Nivel: "; cin >> j.nivel;
    cout << "Es VIP? (1 = si, 0 = no): "; cin >> vip;
    j.esVIP = (vip == 1);
    if (j.esVIP) cout << "Bienvenido al Servidor VIP, " << j.nickname << endl;
    else cout << "Bienvenido al Servidor Estandar, " << j.nickname << endl;

    // Ejercicio 4
    int stock[5] = {12, 0, 5, 30, 0};
    int i = 0;
    while (i < 5) {
        if (stock[i] == 0)
            cout << "ALERTA: Sin stock en la posicion " << i << endl;
        i = i + 1;
    }
    return 0;
}