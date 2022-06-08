//metodo de ordenamiento de la burbuja 
//por caraceres

#include <stdio.h>
#include <string.h>

int k,i;
char nombres[20][20];
char auxnom[20];

main(){
	pedir();
	imprimir();
	ordenar_a();
	imprimir();
	ordenar_d();
	imprimir();
}

pedir(){
	for(i=0;i<10;i++){
		printf("Ingresar nombres\n");
		scanf("%s",nombres[i]);
	}
}

imprimir(){
	for(i=0;i<10;i++){
		printf("%s\n",nombres[i]);
	}
	printf("\n");
}

ordenar_d(){
	for(k=0;k<10;k++){
		for(i=0;i<9;i++){
			if(nombres[i][0]<nombres[i+1][0]){
				strcpy(auxnom,nombres[i]);
				strcpy(nombres[i],nombres[i+1]);
				strcpy(nombres[i+1],auxnom);
			}
		}
	}
}

ordenar_a(){
	for(k=0;k<10;k++){
		for(i=0;i<9;i++){
			if(nombres[i][0]>nombres[i+1][0]){
				strcpy(auxnom,nombres[i]);
				strcpy(nombres[i],nombres[i+1]);
				strcpy(nombres[i+1],auxnom);
			}
		}
	}
}
