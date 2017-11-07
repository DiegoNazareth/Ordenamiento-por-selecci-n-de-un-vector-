//Ordenamiento por seleccion de un vector con numeros aleatorios 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int numero[5],i, j, aux, min;
	srand(time(NULL));
	for(i=0;i<5;i++){
		
		numero[i]=1+rand()%((10+1)-1);
		
		
	}		
	printf("Numeros Desordenados\n");
    for(i=0;i<5;i++){
		
	printf("%d " , numero[i]);
    
    }
    printf("\n");
    //ordenamiento por seleccion
   for (i=0;i<5;i++){
    	min=i;
    	for(j=i+1;j<5;j++){
    		if (numero[j]<numero[min]){
    			min=j;
			}
			
		}
		aux=numero[i];
		numero[i]=numero[min];
		numero[min]=aux;
	}
	printf("Numeros Ordenados\n");
    for(i=0;i<5;i++){
    	printf("%d ", numero[i]);
	}
	return(0);
}
