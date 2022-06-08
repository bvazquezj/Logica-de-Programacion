//Evaluar si un numero es par impar o 0
#include <stdio.h>

main(){
	int num;
	printf("Evaluar un numero e indicar si es par impar o cero\n");
	printf("ingresa un numero\n");
	scanf("%d",&num);

	printf("el numero es ");
	evaluar(num);
}

int evaluar(int x){
	if (x == 0){
		printf("0\n");
	}else if (x%2 == 0 ){
		printf("par\n");
	}else{
		printf("impar\n");
	}

}























