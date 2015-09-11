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
#include "alumno.h"
#define alumnos_h
#endif
//---------------------------------------------------------------------------------------------------
# define tam 9
//---------------------------------------------------------------------------------------------------
typedef struct tipo_curso{	int interaccion [tam][tam];  Alumno alumnos[tam];}Curso;
//Aquí sirve para la interacción, osea estatico.
//---------------------------------------------------------------------------------------------------
//	PROTOTIPOS.
void imprimir_matriz(int matriz[tam][tam]);
void imprimir_curso(Curso curso);
Curso inicializar_curso ();
//---------------------------------------------------------------------------------------------------
void imprimir_matriz(int matriz[tam][tam]){
	for (int i=0; i<tam; i++){
		for (int j=0; j<tam; j++){
			printf("%i ", matriz[i][j]);
		}	printf("\n");
	}
	
}
//---------------------------------------------------------------------------------------------------
void imprimir_adyacentes(Alumno alumno){
}
//---------------------------------------------------------------------------------------------------
void imprimir_curso(Curso curso){
	imprimir_matriz(curso.interaccion);
	for (int i=0; i<tam; i++){
		imprimir_alumno(curso.alumnos[i]);	
	}
}

//---------------------------------------------------------------------------------------------------
Curso inicializar_curso (){
	Curso curso;
	inicializar_alumnos(curso.alumnos);
//				 a.b.c.d.e.f.g.h.i
//				 0.1.2.3.4.5.6.7.8
	int matriz[tam][tam]={	{0,1,1,1,1,0,0,0,0},//0a
		     		{1,0,1,0,0,0,0,0,0},//1b
 		    		{1,1,0,0,0,0,0,0,0},//2c
		 		{0,0,0,0,1,1,0,0,0},//3d
				{0,0,1,1,0,1,0,0,0},//4e
				{0,0,0,1,1,0,0,0,1},//5f
				{0,0,0,0,0,0,0,1,1},//6g
				{0,0,0,0,0,0,1,0,1},//7h
				{0,0,0,0,0,5,1,1,0} //8i
				};

	for (int i=0; i<tam; i++){
		for (int j=0; j<tam; j++){
			curso.interaccion[i][j]=matriz[i][j];
		}
	}
//	imprimir_curso(curso);
	return curso;
}
//---------------------------------------------------------------------------------------------------
void imprimir_todo(Curso curso, Alumno Q[tam]){
	printf("Mis Cola: \n");
	for (int i=0; i<tam; i++){
		imprimir_alumno(Q[i]);
	}
	printf("Mis Alumnos: \n");
	for (int i=0; i<tam; i++){
		imprimir_alumno(curso.alumnos[i]);
	}
}
//---------------------------------------------------------------------------------------------------
int Q_vacio(Alumno Q[tam]){
	for (int i=0; i<tam; i++){
		if (Q[i].pos!=-1){
			return 1;
		}
	}
	return 0;
}
//---------------------------------------------------------------------------------------------------
int existen_adyacentes(Alumno v, Curso curso){
	for (int i=0; i<tam; i++){
		if (curso.interaccion[(v.pos)][i]==1){
			return 1;
		}
	}
	return 0;
}
//---------------------------------------------------------------------------------------------------
void marco_adyacentes(Curso *curso, Alumno Q[tam], Alumno v, int profundidad, int *lugar){
	printf("Le busco adyacentes a: ");		
	imprimir_alumno(v);getchar();
	printf("Adyacentes de %c:\n", v.letra);
/**/	for (int i=0; i<tam; i++){
		if ((*curso).interaccion[(v.pos)][i]==1 && ((*curso).alumnos[i]).color==0){
			((*curso).alumnos[i]).prof=profundidad;
			Q[(*lugar)]=(*curso).alumnos[i];	//Q[(*lugar)].pos=*lugar;
			(*curso).alumnos[i].color++;
			(*lugar)++;
			imprimir_alumno((*curso).alumnos[i]);
		}
	}
}
//---------------------------------------------------------------------------------------------------
void metodo_BFS (Curso curso){
	int lugar, profundidad=lugar=0;
	Alumno Q[tam];		inicializar_Q(Q);	Alumno alumno;
	curso.alumnos[3].prof=profundidad; curso.alumnos[3].color=1;	Q[0]=curso.alumnos[3];	lugar++;
	curso.alumnos[(Q[0].pos)].prof=profundidad;
	while (Q_vacio(Q)==1){
//		curso.alumnos[alumno.pos].prof=Q[0].prof=profundidad;
		curso.alumnos[(Q[0].pos)].color++;
		Q[0].color++;	alumno=nuevo_v(Q,&lugar);	//profundidad++;
		imprimir_todo(curso,Q);	
		if ( (profundidad)!=Q[1].prof || profundidad==0){
			profundidad++;
		}
		if (existen_adyacentes(alumno, curso)==1){
			marco_adyacentes(&curso,Q,alumno,profundidad,&lugar); //REVISANDO
		}
	}
	imprimir_curso(curso);getchar();
}
//---------------------------------------------------------------------------------------------------
	
//---------------------------------------------------------------------------------------------------
