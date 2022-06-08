//Calcular la distancia entre 2 puntos (algoritmi 2)

#include <stdio.h>
#include <math.h>

main(){
	int x1,x2,xT,y1,y2,yT,d;
	printf("Calcula la distancia entre dos puntos\n");
	printf("Primera coordenada\n");
	printf("Ingresa x1\n");
	scanf("%d",&x1);
	printf("Ingresa y1\n");
	scanf("%d",&y1);
	printf("Segunda coordenada\n");
	printf("Ingresa x2\n");
	scanf("%d",&x2);
	printf("Ingresa y2\n");
	scanf("%d",&y2);
	xT= x2 - x1;
	yT= y2 - y1;
	d = sqrt((xT*xT)+(yT*yT));
	printf("la distancia es igual a %d",d);
		
}

