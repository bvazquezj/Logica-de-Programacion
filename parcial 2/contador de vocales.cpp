#include <stdio.h>

main(){
	 
	 char cadena[20];
	 int i=0, longitud=0, vocales=0;
	 printf("ingresa cadena\n");
	 scanf("%s",cadena);
	 
	 while(cadena[i] != '\0'){
	 	
	 	longitud = longitud +1;
	 	
	 	if(cadena[i] == 'a'){
	 		vocales++;
		 }
		if(cadena[i] == 'e'){
	 		vocales++;
		}
		if(cadena[i] == 'i'){
	 		vocales++;
		}
		if(cadena[i] == 'o'){
	 		vocales++;
		}
		if(cadena[i] == 'u'){
	 		vocales++;
		}
		i++; 
	 }
	 printf("%d",longitud);
	 printf("El numero de vocales es: %d",vocales);

}
