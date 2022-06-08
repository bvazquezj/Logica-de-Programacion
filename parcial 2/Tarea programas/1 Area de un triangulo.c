//calcular el area de un triangulo
#include <stdio.h>

main(){
	/* code */
	int b,h;
	printf("calcualr el area de un triangulo\n");
	printf("introduce la base\n");
	scanf("%d",&b);
	printf("introduce la altura\n");
	scanf("%d",&h);
	printf("El area es: %d\n",area(b,h));

}

int area(int base, int altura){
	int area;
	area =(base*altura)/2;
	return(area);
}
