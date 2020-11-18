#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DNI 99999999

typedef struct{
	char nombre[30];
	int dni;
	char letra_dni;
}Persona;

int main(int argc, char *argv[]){

	Persona *persona = (Persona *) malloc(sizeof(Persona));
	if(persona==NULL){
		exit(EXIT_FAILURE);
	}

	strcpy(persona->nombre,"Pepe");
	persona->dni=DNI;
	persona->letra_dni='A';

	printf("El nombre es: %s\n",persona->nombre);
	printf("El DNI es: %d\n", persona->dni);
	printf("La letra del DNI es: %c\n",persona->letra_dni);

	int numbers[] = {0,2,4,6,8};
	int *pointer = &numbers[0];
	for(int i=0;i<5;i++){
		printf("Numero del array: %d\n", *pointer);
		pointer++;
	}

	return 0;
}
