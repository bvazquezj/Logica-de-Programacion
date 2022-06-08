//Ejemplo 15 ifs anidados
#include <stdio.h>

main(){
	  int op,num1,num2,res;
	  printf("introduce un numero para seleccionar el operando\n");
	  printf("1)Suma\n2)Resta\n3)Dividir\n4)Multiplicar\n");
	  scanf("%d",&op);
	  if(op==1){
			printf("Seleccionaste suma\n");
			printf("Ingresa el primer numero\n");
  	  		scanf("%d",&num1);
  	  		printf("Ingresa el segundo numero\n");
  	  		scanf("%d",&num2);
  	  		res = num1 + num2;
				if(res < 0){
  	  					printf("Tu resultado es negativo %d",res);
  	  					
				}else if(res > 0){
					  	printf("Tu resultado es positivo %d",res);  	 
				}
	  }else if(op==2){
	  		printf("Seleccionaste resta\n");
	  		printf("Ingresa el primer numero\n");
  	  		scanf("%d",&num1);
  	  		printf("Ingresa el segundo numero\n");
  	  		scanf("%d",&num2);
  	  		res = num1 - num2;
  	  			if(res < 0){
  	  					printf("Tu resultado es positivo %d",res);
					}else if(res > 0){
						printf("Tu resultado es negativo %d",res);
					}
	  }else if(op == 3){
  	  		printf("Seleccionaste dividir\n");
  	  		printf("Ingresa el numerador\n");
  	  		scanf("%d",&num1);
  	  		printf("Ingresa el denominador\n");
  	  		scanf("%d",&num2);
  	  		res = num1 / num2;
				if(num2 != 0){
					if(num1 < num2){
						printf("Tu resultado sera menor a 1\n");
						printf("%d",res);
					}else if(num1 > num2){
						printf("Tu resultado sera mayor a 1\n");
						printf("%d",res);
					}
				}else if("La divicion no existe\n");
	  }else if(op==4){
	  		printf("Seleccionaste multiplicar\n");
	  		printf("Ingresa el primer numero\n");
  	  		scanf("%d",&num1);
  	  		printf("Ingresa el segundo numero\n");
  	  		scanf("%d",&num2);
				 if(num1 > 0 || num2 > 0){
				 	printf("%d es positivo",res);
				 	
				 }else if(num1 < 0 || num2 < 0){
				 	printf("%d es positivo",res);
				 }else if(num1 > 0 || num2 < 0){
				 	printf("%d es negativo",res);
				 }else if(num1 < 0 || num2 > 0){
				 	printf("%d es negativo",res);
				 }
  	  		res = num1 * num2;
  	  		
  	  		
	  }else if(op > 4){
	  		printf("Parece que te pasaste un poco ingresa un numero menor\n");
	  }else if(op < 1){
	  		printf("el numero que seleccionaste es menor\n");
	  }
	  
	  
	  
	  
	        
}
