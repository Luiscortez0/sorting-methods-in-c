//objetivo: hpc que lean un vector de 15 valores enteros en un vector, ordene el vector, e imprima el mayor y el menor.
//autor: luis carlos cortez guzman
//fecha: 21/05/2022

#include <stdio.h>

int main(){
	int vector[15],i,j,n,aux;
	//inicializar
	n=14;
	//titulo
	printf("ORGANISADOR QUE MUESTRA EL MAYOR Y EL MENOR \n");
	//leer
	for(i=0;i<=14;i++){
		printf("teclea un valor: ");
	   	scanf("%d",&vector[i]);
	}
	//ordenamiento de burbuja
	for(i=0;i<=n;i++){
		for(j=0;j<=n-1;j++){
			if(vector[j]>vector[j+1]){
				aux=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=aux;
			}
		}
	}
    //imprimir 
    printf("El numero menor es: %d \n",vector[0]);
    printf("El numero mayor es: %d \n",vector[14]);
	}
