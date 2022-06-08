#include <stdio.h>
#include "areas.h"

main(){
	int operador,a,b;
	
	printf("Calcula el area de un cuadrado o un rectangulo\n");
	printf("introduce 1 para calcular el area de un cuadrado\n");
	printf("introduce 2 para cacular el area del rectangulo\n");
	scanf("%d",&operador);
	if(operador == 1){
		printf("Seleccionaste area del cuadrado\n");
		printf("introduce el valor de un lado\n");
		scanf("%d",&a);
		printf("%d",cuadrado(a));
	}else {
		printf("Selccionaste area del rectangulo\n");
		printf("introduce la base\n");
		scanf("%d",&a);
		printf("introduce la altura\n");
		scanf("%d",&b);
		printf("%d",rectangulo(a,b));
		}
}
