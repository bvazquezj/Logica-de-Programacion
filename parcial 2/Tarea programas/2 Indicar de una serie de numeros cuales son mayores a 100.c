//indicar de una serie de 10 numeros cuales son mayores a 100

#include <stdio.h>

main(){
	int cadena[10],i;
	for (i=0; i<10; i++){
		printf("ingresa un valor\n");
		scanf("%d",&cadena[i]);
	}

	printf("estos son los numeros mas grandes que 100:\n");
	mayor(cadena);
}

int mayor(int cad[]){
	int i, j=0,cont=0, numeros[10];
	for (i=0; i<10; i++){
			cont++;
		if(cad[i]>100){
			numeros[j]=cad[i];
			printf("%d. %d\n",cont,numeros[j]);
			j++;
		}else{
			printf("%d no es mayor a 100\n",cont);
		}
	}
	
}
