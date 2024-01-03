//objetivo: hpc que lea las edades y los nombres de 20 personas, despues imprima los nombres ordenados de acuerdo a la edad de menor a mayor.
//autor: luis carlos cortez guzman
//fecha: 24/05/2022

#include <stdio.h>
#include <string.h>

int main(){
	int a[20],i,j,aux;
	char z[20][100],aux2[100];
	//titulo
	printf("ORGANISADOR DE NOMBRES POR EDAD \n");
	//leer nombres
	for(i=0;i<=19;i++){
		printf("ingresa el nombre de la persona numero %d: ",i);
	   	gets(z[i]);
    }
    //leer edades
	for(i=0;i<=19;i++){
		printf("ingresa la edad de la persona numero %d: ",i);
	   	scanf("%d",&a[i]);
    }
	//ordenamiento de burbuja
	for(i=0;i<=20;i++){
		for(j=0;j<=19;j++){
			if(a[j]>a[j+1]){
				aux=a[j];
				a[j]=a[j+1];
				a[j+1]=aux;
				//acomodo los nombres
			    strcpy(aux2,z[j]);
				strcpy(z[j],z[j+1]);
				strcpy(z[j+1],aux2);
			}
		}
	}
	//imprimir
	for(i=0;i<=19;i++){
		printf("%s \t edad %d\n",z[i],a[i]);
	}
	}
