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

void titulo(const string& texto) {
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << " " << texto << endl;
    cout << "-----------------------------------------------------" << endl;
}

struct Jugador {
    string nickname;
    int nivel;
    bool esVIP;
};

int main() {

    cout << "=====================================================" << endl;
    cout << " LPR 2026 - ACTIVIDAD 9: PRACTICA EN PAPEL PENSAR ANTES DE PROGRAMAR " << endl;
    cout << " Estudiante / Grupo: Mikaela Batirola" << endl;
    cout << "=====================================================" << endl;



// ---------------- Ejercicio 1 ----------------
    titulo("EJERCICIO 1: EL SENSOR DE APROBACION");
    const int NOTA_MINIMA = 6;
    double nota1, nota2;
    cout << "Ingrese nota 1er cuatrimestre: "; cin >> nota1;
    cout << "Ingrese nota 2do cuatrimestre: "; cin >> nota2;
    double promedio = (nota1 + nota2) / 2;
    cout << "Promedio: " << promedio << endl;
    if (promedio >= NOTA_MINIMA) cout << "Resultado: APROBADO" << endl;
    else cout << "Resultado: A INTENSIFICACION" << endl;

// ---------------- Ejercicio 2 ----------------
    titulo("EJERCICIO 2: EL BUCLE DEL CONTADOR DE VIDAS");
    int vidas = 3;
    while (vidas > 0) {
        cout << "Jugador activo. Vidas restantes: " << vidas << endl;
        vidas = vidas - 1;
    }
    cout << "GAME OVER" << endl;

// ---------------- Ejercicio 3 ----------------
    titulo("EJERCICIO 3: REGISTRO DE JUGADOR EN MEMORIA");
    Jugador j;
    int vip;
    cout << "Nickname: "; cin >> j.nickname;
    cout << "Nivel: "; cin >> j.nivel;
    cout << "Es VIP? (1 = si, 0 = no): "; cin >> vip;
    j.esVIP = (vip == 1);
    if (j.esVIP) cout << "Bienvenido al Servidor VIP, " << j.nickname << endl;
    else cout << "Bienvenido al Servidor Estandar, " << j.nickname << endl;

// ---------------- Ejercicio 4 ----------------
    titulo("EJERCICIO 4: CONTROL DE INVENTARIO CON VECTORES");
    int stock[5] = {12, 0, 5, 30, 0};
    int i = 0;
    while (i < 5) {
        if (stock[i] == 0)
            cout << "ALERTA: Sin stock en la posicion " << i << endl;
        i = i + 1;
    }

    cout << endl;
    cout << "=====================================================" << endl;
    cout << " FIN DEL PROGRAMA" << endl;
    cout << "=====================================================" << endl;
    return 0;
}