#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif

#ifndef stdlib_h
#include <stdlib.h>
#define stdlib_h
#endif

# define tam 8

typedef struct tipo_curso{	int interaccion[tam][tam];  Alumno alumnos[tam]}Curso;
//Aquí sirve para la interacción, osea estatico.
typedef struct tipo_alumno{	char letra;	int prof, estado/*,pos*/;}Alumno;

void inicializar_alumnos (Alumno AlumnoS[tam]){
	AlumnoS[0]->letra='a'; AlumnoS[0]=AlumnoS[0]=0;	//Alumnos[0]->pos=0;
	AlumnoS[1]->letra='b'; AlumnoS[1]=AlumnoS[1]=0;	//Alumnos[1]->pos=1;
	AlumnoS[2]->letra='c'; AlumnoS[2]=AlumnoS[2]=0;	//Alumnos[2]->pos=2;
	AlumnoS[3]->letra='d'; AlumnoS[3]=AlumnoS[3]=0;	//Alumnos[3]->pos=3;
	AlumnoS[4]->letra='e'; AlumnoS[4]=AlumnoS[4]=0;	//Alumnos[4]->pos=4;
	AlumnoS[5]->letra='f'; AlumnoS[5]=AlumnoS[5]=0;	//Alumnos[5]->pos=5;
	AlumnoS[6]->letra='g'; AlumnoS[6]=AlumnoS[6]=0;	//Alumnos[6]->pos=6;
	AlumnoS[7]->letra='h'; AlumnoS[7]=AlumnoS[7]=0;	//Alumnos[7]->pos=7;
	AlumnoS[8]->letra='i'; AlumnoS[8]=AlumnoS[8]=0;	//Alumnos[8]->pos=8;
}

Curso inicializar_curso (){
	Alumno AlumnoS[tam]=inicializar_alumnos();

//				0.1.2.3.4.5.6.7.8
	Curso curso[tam][tam]={	0,1,1,1,1,0,0,0,0,/*0*/
		     		1,0,1,0,0,0,0,0,0,/*1*/
		     		1,1,0,0,0,0,0,0,0,/*2*/
		     		0,0,0,0,1,1,0,0,0,/*3*/
		     		0,0,1,1,0,1,0,0,0,/*4*/
				0,0,0,1,1,0,0,0,0,/*5*/
				0,0,0,0,0,0,0,1,1,/*6*/
				0,0,0,0,0,0,1,0,1,/*7*/
				0,0,0,0,0,0,1,1,0;}/*8*/
}

void recorrer_grafoBFS(Alumno alumno){
	//Aquí introducir todo el algoritmo de recorrido 
	//o bien, crear funciones para hacerlo por partes
/*
	
	
}
void recorrer_grafoDFS(Alumno alumno){
	//Aquí introducir todo el algoritmo de recorrido 
	//o bien, crear funciones para hacerlo por partes
	
}
