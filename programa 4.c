//elaborar un programa que conviert del 1 al 10 en su equivalente en letra (palabra)
#include <stdio.h>

main(){
	int numero;
	printf("Ingresa numero \n");
	scanf("%d",&numero);		
	switch(numero){
		case 1: printf("UNO");
				break;
				
		case 2: printf("DOS");
				break;
				
		case 3: printf("TRES");
				break;
				
		case 4: printf("CUATRO");
				break;
				
		case 5: printf("CINCO");
				break;
				
		case 6: printf("SEIS");
				break;
				
		case 7: printf("SIETE");
				break;
				
		case 8: printf("OCHO");
				break;
				
		case 9: printf("NUEVE");
				break;
				
		case 10: printf("DIES");
				break;
				
		default: printf("error solo se acepta del 1 al 10");
	}
}






