#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif

#ifndef stdlib_h
#include <stdlib.h>
#define stdlib_h
#endif

# define tam 8

typedef struct tipo_curso{	int interaccion[tam][tam];  }Curso;
//Aquí sirve para la interacción, osea estatico.
typedef struct tipo_alumno{	char letra;	int pos;}Alumno;

void inicializar_alumnos (Alumno AlumnoS[tam]){
	AlumnoS[0]->letra='a'; Alumnos[0]->pos=0;
	AlumnoS[1]->letra='b'; Alumnos[1]->pos=1;
	AlumnoS[2]->letra='c'; Alumnos[2]->pos=2;
	AlumnoS[3]->letra='d'; Alumnos[3]->pos=3;
	AlumnoS[4]->letra='e'; Alumnos[4]->pos=4;
	AlumnoS[5]->letra='f'; Alumnos[5]->pos=5;
	AlumnoS[6]->letra='g'; Alumnos[6]->pos=6;
	AlumnoS[7]->letra='h'; Alumnos[7]->pos=7;
	AlumnoS[8]->letra='i'; Alumnos[8]->pos=8;
}

Curso inicializar_curso (Alumno alumnoS[tam]){
//			0.1.2.3.4.5.6.7.8
	Curso curso={	0,1,1,1,1,0,0,0,0,/*0*/
		     	1,0,1,0,0,0,0,0,0,/*1*/
		     	1,1,0,0,0,0,0,0,0,/*2*/
		     	0,0,0,0,1,1,0,0,0,/*3*/
		     	0,0,1,1,0,1,0,0,0,/*4*/
			0,0,0,1,1,0,0,0,0,/*5*/
			0,0,0,0,0,0,0,1,1,/*6*/
			0,0,0,0,0,0,1,0,1,/*7*/
			0,0,0,0,0,0,1,1,0;}/*8*/
}

void recorrer_grafo(Alumno alumno){
	//Aquí introducir todo el algoritmo de recorrido 
	//o bien, crear funciones para hacerlo por partes
	
}
