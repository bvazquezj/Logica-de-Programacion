//Evaluar si un numero es positivo o negativo
#include <stdio.h>

main(){
	int num;
	printf("Ingresa un numero\n");
	scanf("%d",&num);
	if(num < 0 ){
		printf("%d es negativo\n",num);
	}else if(num > 0){
		printf("%d es positivo\n",num);
		
	}else if(num == 0){
		printf("%d es cero\n",num);	
	
	}
}


