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
typedef struct tipo_alumno{	char letra;	int prof, estado,pos;}Alumno;

void inicializar_alumnos (Alumno Alumnos[tam]){
	(Alumnos[0]->letra)='a'; (Alumnos[0]->prof)=(Alumnos[0]->estado)=0;(Alumnos[0]->pos)=0;
	(Alumnos[1]->letra)='a'; (Alumnos[1]->prof)=(Alumnos[1]->estado)=0;(Alumnos[1]->pos)=1;
	(Alumnos[2]->letra)='a'; (Alumnos[2]->prof)=(Alumnos[2]->estado)=0;(Alumnos[2]->pos)=2;
	(Alumnos[3]->letra)='a'; (Alumnos[3]->prof)=(Alumnos[3]->estado)=0;(Alumnos[3]->pos)=3;
	(Alumnos[4]->letra)='a'; (Alumnos[4]->prof)=(Alumnos[4]->estado)=0;(Alumnos[4]->pos)=4;
	(Alumnos[5]->letra)='a'; (Alumnos[5]->prof)=(Alumnos[5]->estado)=0;(Alumnos[5]->pos)=5;
	(Alumnos[6]->letra)='a'; (Alumnos[6]->prof)=(Alumnos[6]->estado)=0;(Alumnos[6]->pos)=6;
	(Alumnos[7]->letra)='a'; (Alumnos[7]->prof)=(Alumnos[7]->estado)=0;(Alumnos[7]->pos)=7;
	(Alumnos[8]->letra)='a'; (Alumnos[8]->prof)=(Alumnos[8]->estado)=0;(Alumnos[8]->pos)=8;
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
int revisar_marcado(Alumnos alumnos[tam]){
	for (int i=0; i<tam; i++){
		if ( partir == (Alumnos[i]->prof) && (Alumnos[i]->estado)!=2){
			return 0;
		}
	}
	return 1;
}

void recorrer_grafoBFS(Alumno alumno, Alumnos alumnos[tam], Curso curso[tam][tam], int *prof){
	//Aquí introducir todo el algoritmo de recorrido 
	//o bien, crear funciones para hacerlo por partes
	int partir=-1;
	alumno->estado=2;
	for (int i=0; i<tam; i++){
		if ( (curso[(alumno->pos)][i]==1) && ((alumno->pos)!=i) ){
			alumnos[i]->estado=1;
			alumnos[i]->prof=(*prof)+1;
		}
	}
	(*prof)++;	
	if ( (revisar_marcado(alumnos[tam])) == 1 )	{
		partir=(*prof);
	}
	else{
		recorrer_grafoBFS () //  A Q U Í  -   Q U E D É. pd. se debe arreglar el main.
	}
}
void recorrer_grafoDFS(Alumno alumno){
	//Aquí introducir todo el algoritmo de recorrido 
	//o bien, crear funciones para hacerlo por partes
	
}