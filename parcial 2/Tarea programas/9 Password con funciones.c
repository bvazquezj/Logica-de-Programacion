//Un Paword con funciones
#include <stdio.h>

main(){
	char pass[10], cpass[10];
	int i;
	printf("incerta contrase�a\n");
	gets(pass);
	printf("vuelve a ingresar contrase�a\n");
	gets(cpass);
	verificar(pass,cpass);	
}

int verificar(char arr[],char arr1[]){
	int i=0,j=0;
	while(arr[i] != '\0'){
		
		if(arr[i]==arr1[j]){
			i++;
			j++;
		}else{
			arr[i]='z';
		}
	}
	if(arr[i]=='*'){
		printf("contrase�a incorrecta");
	}else{
		printf("contrase�a correcta");
	}
}








