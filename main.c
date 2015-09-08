#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif

#ifndef stdlib_h
#include <stdlib.h>
#define stdlib_h
#endif

#ifndef alumnos_h
#include "alumnos.h"
#define alumnos_h
#endif

void introducción (){
	printf("\nBienvenido a mi programa 'Proyecto 1 EDD'\n");
	printf("Mi programa mostrará la interacción entre compañeros de un mismo curso respecto a los diferentes grupos hechos dentro de la clase\n");
	printf("blablablablablabla.... veamos\n");
}

main(){
	int op,flag=1;
	introducción();
	Curso curso=inicializar_curso();
	while (flag==1){
		printf("Ingrese la forma para recorrer el Grafo (G):\n");
		printf("BFS (1)\tDFS(2)");
		scanf("%i",&op);getchar();
		while (op!=1 && op!=2){
		 	printf("Error, ingrese opción valida: ");
			scanf("%i\n",&op);getchar();
		}
		if (op==1){
			recorrer_grafoBFS(AlumnoS[3]);	
		}
		else if (op==2){
			recorrer_grafoDFS(AlumnoS[3]);	
		}
		op=0;
		Printf("Desea seguir usando el programa?\n");
		printf("Si (1)\tNo(2)\t: ");
		scanf("%i\n",&op);getchar();
		while (op!=1 && op!=2){
		 	printf("Error, ingrese opción valida: ");
			scanf("%i\n",&op);getchar();
		}
		if (op==2){
			flag=0;
			printf("Gracias por usar este programa\n Adiós.\n");
		}
	}
}