//calcula porcentaje (algoritmi 1)

#include <stdio.h>

main(){
	int Tot,Num,Res;
	printf("Calcula el porsentaje\n");
	printf("Ingresa tu total\n");
	scanf("%d",&Tot);
	printf("Ingresa tu numero\n");
	scanf("%d",&Num);
	Res = (Num * 100)/Tot;
	printf("Su porsentaje es %d %",Res);
		
}

