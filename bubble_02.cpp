//objetivo: hpc que lean un vector de 20 valores enteros, los ordene de menor a mayor y despues los imprima en ese orden.
//autor: luis carlos cortez guzman
//fecha: 21/05/2022

#include <stdio.h>

int main(){
	int vector[20],i,j,n,aux;
	//inicializar
	n=19;
	//titulo
	printf("ORGANISADOR DE VECTORES \n");
	//leer
	for(i=0;i<=19;i++){
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
    for(i=0;i<=19;i++){
		printf("\n %d",vector[i]);
	}
}
