//Algoritmo switc con 10 casos
#include <stdio.h>

main(){
	int mes;
	printf("Cuantos dias tiene el mes\n");
	printf("Ingresa el numero del mes\n");
	scanf("%d",&mes);
	switch(mes){
		case 1:printf("Enero tiene 31 dias\n");
			 break;
		case 2:printf("Febrero tiene 28 dias\n");
			 break;
		case 3:printf("Marzo tiene 31 dias\n");
			 break;
		case 4:printf("Abril tiene 30 dias\n");
			 break;
		case 5:printf("Mayo tiene 31 dias\n");
			 break;
		case 6:printf("Junio tiene 30 dias\n");
			 break;
		case 7:printf("julio tiene 31 dias\n");
			 break;
		case 8:printf("Agosto tiene 31 dias\n");
			 break;
		case 9:printf("Septiembre tiene 30 dias\n");
			 break;
		case 10:printf("Octubre tiene 31 dias\n");
			 break;
		case 11:printf("Noviembre tiene 30 dias\n");
			 break;
		case 12:printf("Diciebre tiene 31 dias\n");
			 break;
	 	default:printf("selecciona un mes valido\n");
			 			
	}
	
	
	
	
	
	
}
