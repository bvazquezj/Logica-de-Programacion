#include <stdio.h>

main(){
	 
	 char cadena[20];
	 int i=0, longitud=0, letrae=0;
	 printf("ingresa cadena\n");
	 scanf("%s",cadena);
	 
	 while(cadena[i] != '\0'){
	 	
	 	longitud = longitud +1;
	 	
	 	if(cadena[i] == 'e'){
	 		letrae++;
		 }
		i++; 
	 }
	 printf("%d",longitud);
	 printf("%d",letrae);

}
