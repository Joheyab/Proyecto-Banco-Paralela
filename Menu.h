
#ifndef PROYECTO_DATOS_MENU_H
#define PROYECTO_DATOS_MENU_H

#include "ArbolBinario.h"
#include "HeapColaPrioridad.h"
#include "fstream"
#include <thread>
#include <mutex>

using namespace std;

class Menu {
private:
    ArbolBinario arbol;
    HeapColaPrioridad pq;
    mutex pq_mutex; // Declaración del mutex

    // Declaración de la función procesarClientes
    static void procesarClientes(HeapColaPrioridad &pq, mutex &pq_mutex, int &i);

public:
    Menu(const ArbolBinario &arbol, const HeapColaPrioridad &pq);
    virtual ~Menu();
    void menuPrincipal();
    void cargaDatos();
    void opcion1();
    void opcion2();
    void opcion3();
    void opcion4();
    void opcion5();
    void opcion6();
    void opcion7();
    void opcionSalir();
};

#endif //PROYECTO_DATOS_MENU_H

