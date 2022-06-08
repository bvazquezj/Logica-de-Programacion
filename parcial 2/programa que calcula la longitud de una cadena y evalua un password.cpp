//programa que calcula la longitud de una cadena y evalua un password
#include <stdio.h>
#include <string.h>
#include <ctype.h>
main(){
	int longitud, i=0, dig=0, otro;
	char cadena[30];
	printf("ingresa una clave\n");
	gets(cadena);
	
	longitud=strlen("hola68");
	printf("La longitud es: %d \n",longitud);
	
	if(strcmp("hola68",cadena)==0){
		printf("clave correcta\n");

		while(cadena[i] !='\0'){
			if(isdigit(cadena[i])){
				dig++;
			}else{
				otro++;
			}
			i++;
		}
 		printf("la cadena tiene numeros %d",dig);
	}else{
		printf("clave incorrecta");
	}	
	
}




