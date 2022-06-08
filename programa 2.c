//Pograma calcular area de un rectangulo 

#include <stdio.h>
main(){
	
	int area, base, altura;
	printf("Ingresa base\n");
	scanf("%d",&base);
	printf("Ingresa altura\n");
	scanf("%d",&altura);
	area = base*altura;
	printf("El area del rectangulo es %d",area);	
}
