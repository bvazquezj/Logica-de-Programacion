#include <stdio.h>
#include <string.h>

int bol[20], c1[20], c2[20], c3[20], c4[20], c5[20], c6[20], c7[20], i, prom, aux;
char nombre[20][20],ap[20][20],am[20][20], aux_cadena[20];
float promedio[20], aux_p;
FILE *fp;

main()
{
    Leer();
    Ordenar();
    grabar_archivo();
    imprimir_arch();
}


Leer(){
	float nu=7;
	if ((fp=fopen("calif.txt","r"))== NULL){
		printf("no se pudo mostrar el archivo\n");
	}else{
		for (i=0; i<20; i++){
		fscanf(fp,"%d%s%s%s%d%d%d%d%d%d%d", &bol[i],nombre[i],ap[i],am[i],&c1[i], &c2[i],&c3[i], &c4[i], &c5[i], &c6[i], &c7[i]);
		prom = c1[i]+c2[i]+c3[i]+c4[i]+c5[i]+c6[i]+c7[i];
		promedio[i]= prom/nu;
		}
		
	}
	fclose(fp);
}
Ordenar(){
	int k;
	for(k=0;k<20;k++){
		for(i=0;i<19;i++){
		
			if(promedio[i]<promedio[i+1]){
		        strcpy(aux_cadena,nombre[i]);
		        strcpy(nombre[i],nombre[i+1]);
		        strcpy(nombre[i+1],aux_cadena);
		
		        strcpy(aux_cadena,ap[i]);
		        strcpy(ap[i],ap[i+1]);
		        strcpy(ap[i+1],aux_cadena);
		
		        strcpy(aux_cadena,am[i]);
		        strcpy(am[i],am[i+1]);
		        strcpy(am[i+1],aux_cadena);
		        
		        aux=bol[i];
		        bol[i]=bol[i+1];
		        bol[i+1]=aux;
		         
		        aux=c1[i];    
		        c1[i]=c1[i+1];
		        c1[i+1]=aux;
		
		 		aux=c2[i];    
		        c2[i]=c2[i+1];
		        c2[i+1]=aux;
		
		        aux=c3[i];    
		        c3[i]=c3[i+1];
		        c3[i+1]=aux;
		
		        aux=c4[i];    
		        c4[i]=c4[i+1];
		        c4[i+1]=aux;
		
		        aux=c5[i];    
		        c5[i]=c5[i+1];
		        c5[i+1]=aux;
		
		        aux=c6[i];    
		        c6[i]=c6[i+1];
		        c6[i+1]=aux;
		
		        aux=c7[i];    
		        c7[i]=c7[i+1];
		        c7[i+1]=aux;
		
		        aux_p = promedio[i];   
		        promedio[i]=promedio[i+1];
		      	promedio[i+1]=aux_p;
		    }
		}	
	}
}     

grabar_archivo(){

	if ((fp=fopen("salida.txt","w"))==NULL){
		printf("no se puede abrir el archivo\n");
	}else{
		for (i=0;i<20; i++){
			fprintf(fp, "IPN");
			fprintf(fp, "\n");
			fprintf(fp,"___________________________________\n");
			fprintf(fp,"Nombre:   %s    %s  %s              bol. %d\n", nombre[i],ap[i],am[i],bol[i]);
			fprintf(fp, "___________________________________\n");
			fprintf(fp, "Unidad de aprendisaje               calificacion\n");
			fprintf(fp, "fisica---------------------------%d\n",c1[i]);
			fprintf(fp, "Logica de programacion-----------%d\n",c2[i]);
			fprintf(fp, "Matematicas----------------------%d\n",c3[i]);
			fprintf(fp, "comunicacion---------------------%d\n",c4[i]);
			fprintf(fp, "sistemas digitales---------------%d\n",c5[i]);
			fprintf(fp, "contabilidad---------------------%d\n",c6[i]);
			fprintf(fp, "lab fisica-----------------------%d\n",c7[i]);
			fprintf(fp, "___________________________________\n");
			fprintf(fp, "promedio                           %f\n",promedio[i]);
			fprintf(fp, "\n");
			fprintf(fp, "\n");
		}
	}
	fclose(fp);
}

imprimir_arch(){
	char car;
	if((fp=fopen("salida.txt","r"))==NULL){
		printf("No se puede abrir el archivo\n");	
	}else{
		while((car = fgetc(fp)) != EOF){
		printf("%c",car);
	    }
    }
        fclose(fp);
	}







