#include <stdio.h>
#include <string.h>
#include <ctype.h>
main(){
	int longitud, i=0, dig=0, otro;
	char cadena[30];
	char cadeaux[30];
	char aux[30];
	printf("ingresa una cadena\n");
	gets(cadena);
	printf("%s \n",cadena);
	printf("%s \n",cadeaux);
	strcpy(cadeaux,cadena);//funcion de copia
	printf("%s \n",cadena);
	printf("%s \n",cadeaux);
	cadeaux[0]='\0';
	strncpy(aux,cadena,3);
	printf("%s \n",cadena);
	printf("%s \n",aux);
}
