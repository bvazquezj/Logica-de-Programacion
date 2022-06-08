//Indicar cuantas letras "e" hay dentro de una cadena
#include <stdio.h>

main(){
	char cadena[50];
	printf("Ingresa una cadena de texto\n");
	gets(cadena);
	printf("el numero de letras e es %d\n",letrase(cadena));
}

int letrase(char cad[]){
	int i=0,nume=0;
	while(cad[i] != '\0'){
		if(cad[i] == 'e'){
			nume++;
		}
		i++;
	}
	return(nume);
}
