//Evaluar si un numero es positivo o negativo
#include <stdio.h>

main(){
	int num;
	printf("Ingresa un numero\n");
	scanf("%d",&num);
	if(num < 0){
		printf("%d Es negativo",num);
	}else{
		printf("%d Es positivo",num);
	}
}
