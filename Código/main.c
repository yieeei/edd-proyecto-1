//---------------------------------------------------------------------------------------------------
#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif
//---------------------------------------------------------------------------------------------------
#ifndef stdlib_h
#include <stdlib.h>
#define stdlib_h
#endif
//---------------------------------------------------------------------------------------------------
#ifndef alumnos_h
#include "curso.h"
#define alumnos_h
#endif
//---------------------------------------------------------------------------------------------------
#ifndef alumnos_h
#include "alumno.h"
#define alumnos_h
#endif
//---------------------------------------------------------------------------------------------------
void introduccion();
//---------------------------------------------------------------------------------------------------
void introduccion (){
	printf("\nBienvenido a mi programa 'Proyecto 1 EDD'\n");
	printf("Mi programa mostrará la interacción entre compañeros de un mismo curso respecto a los diferentes grupos hechos dentro de la clase\n");
	printf("blablablablablabla.... veamos\n");
}
//---------------------------------------------------------------------------------------------------
int main(){
	int op,flag=1;
	introduccion();
	Curso curso=inicializar_curso();
	while (flag==1){
		printf("Ingrese la forma para recorrer el Grafo (G):\n");
		printf("BFS (1)\tDFS(2): ");
		scanf("%i",&op);getchar();
		while (op!=1 && op!=2){
		 	printf("Error, ingrese opción valida: ");
			scanf("%i",&op);getchar();
		}
		if (op==1){
			metodo_BFS(curso);
		}
		else if (op==2){ //int o=3;
			metodo_DFS(&curso,0,3);
			imprimir_curso(curso);getchar();	
		}
		op=0;
		printf("Desea seguir usando el programa?\n");
		printf("Si (1)\tNo(2)\t: ");
		scanf("%i",&op);getchar();
		while (op!=1 && op!=2){
		 	printf("Error, ingrese opción valida: ");
			scanf("%i",&op);getchar();
		}
		if (op==2){
			flag=0;
			printf("Gracias por usar este programa\n Adiós.\n");
		}
	}
	return 0;
}

