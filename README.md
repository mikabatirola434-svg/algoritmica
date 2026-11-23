# Algorítmica: Pensar antes de programar

 **Institución:** Escuela de Educación Técnica N.° 1 "Eduardo Ader" - Vicente López <br>
 **Materia:** Laboratorio de Programación (LPR) <br>
 **Curso:** 5.º Año 3.ª <br>
 **Actividad:** 9 — Práctica en papel "Pensar antes de programar" <br>
 **Estudiante:** Mikaela Batirola <br>
 **Año:** 2026 <br>

## Descripción

Este proyecto consiste en resolver cuatro problemas de razonamiento lógico primero **en papel**, mediante diagramas de flujo y pruebas de escritorio, y luego comprobar los resultados con un programa de referencia en C++.

El programa se ejecuta en consola y muestra el resultado de cada ejercicio por separado, para compararlo con lo calculado a mano.

## Objetivos

* Diseñar la secuencia algorítmica mediante diagramas de flujo con simbología estándar.
* Simular la memoria RAM y el procesador en papel con la prueba de escritorio.
* Aplicar variables, constantes y condicionales (`if / else`).
* Utilizar estructuras repetitivas (`while`).
* Organizar datos con estructuras (`struct`).
* Recorrer vectores (arreglos) con un contador.
* Versionar el trabajo con Git en GitHub y GitLab.

## Ejercicios

| N.º | Ejercicio | Concepto |
|-----|-----------|----------|
| 1 | El Sensor de Aprobación | Variables, constantes y condicionales |
| 2 | El Bucle del Contador de Vidas | Estructuras repetitivas |
| 3 | Registro de Jugador en Memoria | Estructuras (`struct`) |
| 4 | Control de Inventario con Vectores | Arreglos y recorrido |

## Tecnologías utilizadas

* C++
* GCC / G++
* Visual Studio Code
* Git, GitHub y GitLab

## Compilación y ejecución

Compilar desde la carpeta principal del proyecto:

```
g++ -std=c++11 src/main.cpp -o src/algoritmica.exe
```

Ejecutar en Windows:

```
.\src\algoritmica.exe
```

## Estructura del proyecto

```
algoritmica/
├── .gitignore
├── LICENSE
├── README.md
├── docs/
│   └── InformeEEST1_LPR2026_ACT09_BatirolaMikaela_v1.0.0.pdf
├── src/
│   └── main.cpp
└── capturas/
    └── matriz_ejecucion.png
```

## Capturas

En la carpeta `capturas/` se guarda la evidencia de la ejecución del programa en consola (`matriz_ejecucion.png`). Las hojas de carpeta con los diagramas de flujo y las pruebas de escritorio están incluidas en el informe de la carpeta `docs/`.


##  Licencia

Este proyecto utiliza la licencia MIT. Para consultar sus condiciones, revisar el archivo `LICENSE`.
