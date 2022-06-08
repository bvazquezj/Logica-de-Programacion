//programa ejemplo de uso de if
#include <stdio.h>	
main(){
	
		int edad;
		char nombre[20];
		char ap [20];
		char am [20];
		printf("Ingresa Nombre\n");
		scanf("%s",nombre);
		printf("Ingresa Apellido Paterno\n");
		scanf("%s",ap);
		printf("Ingresa Apellido materno\n");
		scanf("%s",am);
		printf("Ingresa Edad\n"); //imprime
		scanf("%d",&edad);//lee
		
		if(edad>=18){
			printf("Eres %s  %s  %s se te asignaron $1000 por ser mayor de edad %d",nombre
			,ap,am,edad);
		}else{
			printf("Eres %s  %s  %s se te asignaron $100 por ser menor de edad %d",nombre
			,ap,am,edad);
		}
		
	
}
