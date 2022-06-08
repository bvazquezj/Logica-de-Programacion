#include <stdio.h>

FILE *fp;
int bol, dia, mes, ano, tel[10];
char nombre[20], ap[20], am[20], curp[18],sexo;
main(){
	lectura();
}

lectura(){
	if((fp=fopen("alumnos.txt","r"))==NULL){
		printf("no se puede leer el archivo\n");
	}else{
		while(!feof(fp)){
			fscanf(fp,"%d%s%s%s%s%c%d%d%d%d\n",&bol,ap,am,nombre,curp,sexo,tel,dia,mes,ano);
			printf("%d %s %s %s %s %c %d %d %d %d \n",bol,ap,am,nombre,curp,sexo,tel,dia,mes,ano);		
		}
		printf("Archivo leido\n");
	}
	fclose(fp);
}
