#include <stdio.h>
#include "perimetro.h"

main(){
	float r=0, d=0; 
	int operador;
	
	printf("Calcula el perimetro del circulo\n");
	printf("si no conoces el diametro pulsa 1 si lo conoces pulsa cualquier numero\n");
	scanf("%d",&operador);
	if(operador!=1){
		printf("Seleccionaste que no conoces el radio\n");
		printf("introduce el diametrio\n");
		scanf("%f",&d);
		printf("el perimetro del circulo es %f\n",perimetrod(d));
	}
	printf("Seleccionaste que no conoces el diametro\n");
	printf("ingresa el radio\n");
	scanf("%f",&r);
	printf("el perimetro del circulo es %f\n",perimetror(r));

}
