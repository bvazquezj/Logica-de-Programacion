#include <stdio.h>

int num[20],i,k,aux;
FILE *fp;
main(){
	leer();
	imprimir();
	ord_asc();
	imprimir();
	grabar_a();
	ord_des();
	imprimir();
	grabar_d();
}

leer(){
	int i;
	if((fp=fopen("base.txt","r"))==NULL){
  		printf("no se pudo leer el archivo\n");
	}else{
	    while(!feof(fp)){	
			fscanf(fp,"%d",&num[i]);
			i++;	
		}
		
	}
}
imprimir(){
	int i;
	for(i=0;i<20;i++){
		printf("%d\n",num[i]);
	}
}

ord_asc(){
	int i,k,aux;
	printf("Ordenados acendente mente\n");
	for(k=0;k<20;k++){
		for(i=0;i<19;i++){
			if(num[i]>num[i+1]){
				aux=num[i];
				num[i]=num[i+1];
				num[i+1]=aux;
			}
		}
	}
}

grabar_a(){
		if((fp=fopen("asc.txt","w"))==NULL){
			printf("no se puede abrir el archivo\n");
		}else{
			for(i=0;i<20;i++){
				fprintf(fp,"%d\n",num[i]);
			}
			printf("grabado con exito\n");
		}
}

ord_des(){
	int i,k,aux;
	printf("Ordenados decendente mente\n");
	for(k=0;k<20;k++){
		for(i=0;i<19;i++){
			if(num[i]<num[i+1]){
				aux=num[i];
				num[i]=num[i+1];
				num[i+1]=aux;
			}
		}
	}
}

grabar_d(){
	if((fp=fopen("des.txt","w"))==NULL){
			printf("no se puede abrir el archivo\n");
		}else{
			for(i=0;i<20;i++){
				fprintf(fp,"%d\n",num[i]);
			}
			printf("grabado con exito\n");
		}
}
