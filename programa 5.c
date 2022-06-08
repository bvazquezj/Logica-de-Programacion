//Elaborar un programa que reciba un caracter y evalue si es vocal
#include <stdio.h>
main(){
	char caracter;
	printf("Ingresa caracter\n");
	scanf("%c",&caracter);
	
	switch(caracter){
		case 'A': printf("ES LA LETRA A");
				break;
				
		case 'a': printf("ES LA LETRA a");
				break;
				
		case 'E': printf("ES LA LETRA E");
				break;		
				
		case 'e': printf("ES LA LETRA e");
				break;		
				
		case 'I': printf("ES LA LETRA I");
				break;		
				
		case 'i': printf("ES LA LETRA i");
				break;
				
		case 'O': printf("ES LA LETRA O");
				break;		
				
		case 'o': printf("ES LA LETRA o");
				break;		
				
		case 'U': printf("ES LA LETRA U");
				break;	
				
		case 'u': printf("ES LA LETRA u");
				break;			
				
		default: printf("No es una vocal");			
	}
	
}
