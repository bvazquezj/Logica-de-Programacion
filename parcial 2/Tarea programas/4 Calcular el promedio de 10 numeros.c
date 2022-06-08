#include <stdio.h>

main(){
	int calificaciones[10],i;
	printf("Introduce 10 numeros para calcular su promedio\n");
	for(i=0;i<10;i++){
		printf("Introduce un valor\n");
		scanf("%d",&calificaciones[i]);
	}
	printf("El Promedio de los numeros es %d",promedio(calificaciones));
	
}
int promedio(int cadena[]){
	int i, sum=0, res;
	for(i=0;i<10;i++){
		sum=sum+cadena[i];
	}
	res=sum/10;
	return(res);
}