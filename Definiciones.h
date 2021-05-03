/* Programa con las declaraciones usadas en el resto del sistema */ 

# ifndef DECS
# define DECS
# include <ncurses.h>
# include <stdio.h>
# include <stdlib.h>
/* Declaracion de las vars principales */
WINDOW *juego; 
int posX, posY; // Variables para controlar al humano

/* Declaracion de las funciones principales*/
void pintarFondo(); // Función que se va encargar de generar el fondo
void mover(float x, float y);
void dibujarBloque(float x, float y);
void moverBloques();
int comprobarCoindicencia(float x, float y);
void tiempo();
int menu();
void salir();
void dibujarHumano(float x, float y);
void escucharTeclas();

# endif
