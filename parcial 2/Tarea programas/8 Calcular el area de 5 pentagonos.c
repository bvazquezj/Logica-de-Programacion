//calcular el area de 5 penntagonos
#include <stdio.h>

main(){
	int i, pen1[2],pen2[2],pen3[2],pen4[2],pen5[2];
	printf("Introdusca los datos de los pemtagonos\n");
	printf("Introduce el primer pentagono perimetro y apotema\n");
	for (i=0; i<2; i++){
		scanf("%d",&pen1[i]);
	}
	printf("Introduce el segundo pentagono perimetro y apotema\n");
	for (i=0; i<2; i++){
		scanf("%d",&pen2[i]);
	}
	printf("Introduce el tercer pentagono perimetro y apotema\n");
	for (i=0; i<2; i++){
		scanf("%d",&pen3[i]);
	}
	printf("Introduce el cuarto pentagono perimetro y apotema\n");
	for (i=0; i<2; i++){
		scanf("%d",&pen4[i]);
	}
	printf("Introduce el quinto pentagono perimetro y apotema\n");
	for (i=0; i<2; i++){
		scanf("%d",&pen5[i]);
	}
	printf("el area 1 es %d\n",area(pen1));
	printf("el area 2 es %d\n",area(pen2));
	printf("el area 3 es %d\n",area(pen3));
	printf("el area 4 es %d\n",area(pen4));
	printf("el area 5 es %d\n",area(pen5));
}

int area(int arr[]){
	int res;
	res = (arr[0]*arr[1])/2;
	return(res);
}