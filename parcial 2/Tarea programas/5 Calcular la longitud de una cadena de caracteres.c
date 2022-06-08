//calcular la longitud de una cadena de caracteres
#include <stdio.h>

main(){
	char cadena[30];
	printf("introduce una cadena de caracteres\n");
	gets(cadena);
	printf("La longitud de la cadena es %d",longitud(cadena));
}

int longitud(char ad[]){
	int i, contador=0;
	while(ad[i]!='\0'){
		contador++;
		i++;
	}
	return(contador);
}










