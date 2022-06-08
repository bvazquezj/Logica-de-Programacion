#include <stdio.h>
#include <ctype.h>
main(){
	 
	 char cadena[50];
	 int i=0;
	 printf("ingresa una cadena\n");
	 gets(cadena);
	 
	 while(cadena[i] != '\0'){
	 	if(cadena[i] == 'i'){
	 		if(cadena[i+1] == 'f'){
	 			if(cadena[i+2]=='('){
	 				while(cadena[i] != ')'){
	 					if(i<50){
	 						i++;
						 }else{
						 	printf("No intudusiste parentesis de cierre");
						 }	 
					 }
					 if(cadena[i]==')'){
					 	if(cadena[i+1]=='{'){
					 		while(cadena[i]!='}'){
					 			if(i>100){
					 				i++;
								 }else{
								 	printf("No intudusiste corchete final");
								 }
					 		 }
			 			if(cadena[i]=='e'){
			 				if(cadena[i+1]=='l'){
					 			if(cadena[i+2]=='s'){
					 				if(cadena[i+3]=='e'){
					 					if(cadena[i+4]=='{'){
					 						while(cadena[i]!='}'){
											 
					 						if(i>100){
					 							i++;
											 }else{
											 	printf("No introduciste corcete de cierre");
											 }
										 }
										 printf("funcionando con exito");
									 }else{
									 	printf("No introduciste corcete de apertura");
									 }
								 }
							 }
						 } 
						 }else{
						 	printf("No intudusiste corchete de inicio");
						 }
					 }
	 				
				 }else{
				 	printf("No intudusiste paretntesis abierto");
				 }
			 }else{
			 	printf("No intudusiste f");
			 }
		 }else{
		 	printf("No intudusiste i");
		 }
	 	
	}	i++; 
	 }
	 	 
}
