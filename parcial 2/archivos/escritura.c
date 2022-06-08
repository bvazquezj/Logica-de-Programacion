//Escritura de un archivo 
#include <stdio.h>

int i, art[10], cantidad[10];
char nomart[20][20];

FILE *fp;
main(){
	pedir();
	escritura();
	leer();
}

pedir(){
	for (i=0; i<2; i++){
		printf("Ingresa clave del articulo\n");
		scanf("%d",&art[i]);

		printf("Ingresa nombre del articulo\n");
		scanf("%s",nomart[i]);
		
		printf("Ingresa existencias\n");
		scanf("%d",&cantidad[i]);
			
	}
}

escritura(){
	if ((fp=fopen("salida.txt","w"))==NULL){
		printf("No se puede abrir el archivo\n");
	}else{
		for (i=0;i<2;i++){
			fprintf(fp,"%d %s %d\n",art[i],nomart[i],cantidad[i]);
		}
		printf("Archivo Grabado\n");
	}
	fclose(fp);
}

leer(){
	int c_articulo,cant;
	char nombre_art[20];

	if ((fp=fopen("salida.txt","r"))==NULL){
		printf("No puedo leer el archivo\n");
	}else{
		while(!feof(fp)){
			fscanf(fp,"%d%s%d",&c_articulo, nombre_art,&cant);
			printf("%d %s %d\n",c_articulo,nombre_art,cant);
		}
		printf("Archivo Leido\n");
	}
	fclose(fp);
}


