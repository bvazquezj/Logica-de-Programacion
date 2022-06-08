//indicar de 50 numeros generados aleatoriamente cuantos son pares
#include <stdio.h>
#include <stdlib.h>

main(){
	int i,numeros[50];
	for (i=0; i<50; i++){
		numeros[i]=rand();
		printf("%d\n",numeros[i]);
	}
		printf("El numero de pares es de: %d\n",pares(numeros));
}
int pares(int num[]){
	int i, par=0;
	for (i = 0; i<50;i++){
		if (num[i]%2 == 0){
			par++;
		}
	}
	return(par);
}