//programa de tablas de multiplicar 

#include <stdio.h>
main(){
	
	int i,k,mult;
	for(i=1; i<=10; i++){ //indica la tabla
		
		for(k=1; k<=10; k++){ //multiplicaciones
			
			mult=i*k;
			printf("%d * %d = %d \n",i,k,mult);
	 	}
		printf("\n");
	}
}

