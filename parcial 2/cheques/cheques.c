#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int dia[20], mes[20], ano[20], cantidad[20], i, aux;
char nombre[20][20],ap[20][20],am[20][20],aunom[20][20],auap[20][20], aux_cadena[20], Cadena[20][200], Auxiliar[200];
FILE *fp;

main()
{
    Leer();
    Ordenar();
    convertir();
    grabar_archivo();
    imprimir_arch();
}


Leer(){
	float nu=7;
	if ((fp=fopen("datos.txt","r"))== NULL){
		printf("no se pudo mostrar el archivo\n");
	}else{
		for (i=0; i<20; i++){
		fscanf(fp,"%d%d%d%s%s%s%d%s%s", &dia[i],&mes[i],&ano[i],nombre[i],ap[i],am[i],&cantidad[i],aunom[i],auap[i]);
		}
		
	}
	fclose(fp);
}

Ordenar(){
	int k;
	for(k=0;k<20;k++){
		for(i=0;i<19;i++){
		
			if(ap[i][0]>ap[i+1][0]){
		        strcpy(aux_cadena,nombre[i]);
		        strcpy(nombre[i],nombre[i+1]);
		        strcpy(nombre[i+1],aux_cadena);
		
		        strcpy(aux_cadena,ap[i]);
		        strcpy(ap[i],ap[i+1]);
		        strcpy(ap[i+1],aux_cadena);
		
		        strcpy(aux_cadena,am[i]);
		        strcpy(am[i],am[i+1]);
		        strcpy(am[i+1],aux_cadena);
		        
	         	strcpy(aux_cadena,aunom[i]);
		        strcpy(aunom[i],aunom[i+1]);
		        strcpy(aunom[i+1],aux_cadena);
		
		        strcpy(aux_cadena,auap[i]);
		        strcpy(auap[i],auap[i+1]);
		        strcpy(auap[i+1],aux_cadena);
		        
		        aux=cantidad[i];
		        cantidad[i]=cantidad[i+1];
		        cantidad[i+1]=aux;
		         
		        aux=dia[i];    
		        dia[i]=dia[i+1];
  		      	dia[i+1]=aux;
		
		 		aux=mes[i];    
		        mes[i]=mes[i+1];
		        mes[i+1]=aux;
		
		        aux=ano[i];    
		        ano[i]=ano[i+1];
		        ano[i+1]=aux;
		    }
		}	
	}
}     

convertir(){	

	int unidad=0;
	int decena=0;
   Cadena[0][200]='\0';
   
   for(i=0;i<20; i++){
	   unidad = cantidad[i] % 10; 
	   decena = cantidad[i] / 10;
	   getch();   
	   
	   switch(decena){
		  case 1:
		  strcpy(Cadena[i],"diez");
		  break;
		  case 2:
			strcpy(Cadena[i],"veinte");
			break;
			case 3:
			strcpy(Cadena[i],"treinta");
			break;
			case 4:
			strcpy(Cadena[i],"cuarenta");
			break;
			case 5:
			strcpy(Cadena[i],"cincuenta");
			break;
			case 6:
			strcpy(Cadena[i],"sesenta");
			break;
			case 7:
			strcpy(Cadena[i],"setenta");
			break;
			case 8:
			strcpy(Cadena[i],"ochenta");
			break;
			case 9:
			strcpy(Cadena[i],"noventa");
			break;
		}
	   if (decena==0 || decena==2){
	   	  switch(unidad){ 
		  	  case 0:
			  strcpy(Cadena[i],"cero");
			  break;
			  case 1:
			  strcpy(Cadena[i],"uno");
			  break;
		  	  case 2:
			  strcpy(Cadena[i],"dos");
			  break;
			  case 3:
			  strcpy(Cadena[i],"tres");
			  break;
			  case 4:
			  strcpy(Cadena[i],"cuatro");
			  break;
			  case 5:
			  strcpy(Cadena[i],"cinco");
			  break;
			  case 6:
			  strcpy(Cadena[i],"seis");
			  break;
			  case 7:
			  strcpy(Cadena[i],"siete");
			  break;
			  case 8:
			  strcpy(Cadena[i],"ocho");
			  break;
			  case 9:
			  strcpy(Cadena[i],"nueve");
		    }
		}
		if (decena==1) {
		   switch(unidad){    				   
		   	  case 0:
			  strcpy(Cadena[i],"diez");
			  break;
			  case 1:
			  strcpy(Cadena[i],"once");
			  break;
			  case 2:
			  strcpy(Cadena[i],"doce");
			  break;
			  case 3:
			  strcpy(Cadena[i],"trece");
			  break;
			  case 4:
			  strcpy(Cadena[i],"catorce");
			  break;
			  case 5:
			  strcpy(Cadena[i],"quince");
			  break;
			  case 6:
			  strcpy(Cadena[i],"dieciseis");
			  break;
			  case 7:
			  strcpy(Cadena[i],"diecisiete");
			  break;
			  case 8:
			  strcpy(Cadena[i],"dieciocho");
			  break;
			  case 9:
			  strcpy(Cadena[i],"diecinueve");
	 	  }
	   }     
	
		if(decena==2) {
		strcpy(Auxiliar,"veinti");
		strcat(Auxiliar,Cadena[i]);
		strcpy(Cadena[i],Auxiliar);
		}
	
		if(decena>2){
	 		 strcat(Cadena[i]," y "); 
				switch(unidad){ 
				case 1:
				strcat(Cadena[i],"uno");
				break;
				case 2:
				strcat(Cadena[i],"dos");
				break;
				case 3:
				strcat(Cadena[i],"tres");
				break;
				case 4:
				strcat(Cadena[i],"cuatro");
				break;
				case 5:
				strcat(Cadena[i],"cinco");
				break;
				case 6:
				strcat(Cadena[i],"seis");
				break;
				case 7:
				strcat(Cadena[i],"siete");
				break;
				case 8:
				strcat(Cadena[i],"ocho"); 
				break;
				case 9:
				strcat(Cadena[i],"nueve");
				break;
			}
		}
   }

}
grabar_archivo(){

	if ((fp=fopen("salida.txt","w"))==NULL){
		printf("no se puede abrir el archivo\n");
	}else{
		for (i=0;i<20;i++){
			fprintf(fp,"________________________________________________\n");
			fprintf(fp,"                       IPN                      \n");
			fprintf(fp,"________________________________________________\n");
			fprintf(fp,"                                  FECHA:%d/%d/%d\n",dia[i],mes[i],ano[i]);
			fprintf(fp,"                  Banco de UPIICSA              \n");
			fprintf(fp,"________________________________________________\n");
			fprintf(fp, "Pagar a nombre de %s %s %s \n",nombre[i],ap[i],ap[i]);
			fprintf(fp, "La cantidad de $ %d (%s)\n",cantidad[i],Cadena[i]);
			fprintf(fp, "_______________________________________________\n");
			fprintf(fp, " Autorizo: %s %s \n",aunom[i], auap[i]);
			fprintf(fp, "_______________________________________________\n");
			fprintf(fp, "\n \n");
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
