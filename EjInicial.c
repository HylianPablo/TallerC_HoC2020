#include <stdio.h>
#include <stdlib.h>

/*Prototipo*/
int sum(int arr[]);

int main(int argc, char *argv[]){
	
	int sizeArr;
	sscanf(argv[1],"%d",&sizeArr);

	int array[sizeArr];
	for(int i=0;i<sizeArr;i++){
		printf("Introduzca un numero: \n");
		scanf("%d",&array[i]);
	}

	int suma = sum(array);
	printf("La suma es %d\n",suma);
	return 0;
}
/*Esta funcion podria estar declarada encima del main y no necesitaria prototipo*/
int sum(int arr[]){
	int resultado=0;
	/*La longitud son los bytes totales entre los bytes que ocupa un elemento*/
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Tam matriz: %d\n",size);
	for(int i=0;i<size;i++){
		resultado+=arr[i];
	}
	return resultado;
}
