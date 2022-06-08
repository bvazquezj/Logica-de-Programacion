//Inventar programa con funciones (cnvertidor de km/h a m/s)
#include <stdio.h>

main(){
	int valor;
	printf("introduce la velocdad km/h\n");
	scanf("%d",&valor);
	con(valor);

}

int con(int x){
	float res;
	res = x/3.6;
	printf("su conversion es: %.2f m/s\n",res);
}
