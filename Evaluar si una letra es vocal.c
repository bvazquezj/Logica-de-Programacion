//Evaluar si una letra es vocal
#include <stdio.h>

main(){
	char vocal;
	printf("Ingresa una vocal\n");
	scanf("%c",&vocal);
	switch(vocal){
		case 'a':printf("Vocal a");
			 break;
        case 'e':printf("Vocal e");
			 break;
		case 'i':printf("Vocal i");
			 break;
		case 'o':printf("Vocal o");
			 break;
		case 'u':printf("Vocal u");
			 break;
		default:printf("No es una vocal"); 	 	 
	}
}
