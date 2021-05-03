/* Funciones usadas por el programa principal y otras funciones */

# include "Definiciones.h"

/* c�digo implementaci�n de todas las funciones */
void pintarFondo(){
    juego = initscr();
    printw("Hhola mundo");
    refresh();
    getch();
    endwin();
}