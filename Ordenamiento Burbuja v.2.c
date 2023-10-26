#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int arr){
	int i,j,n,temp=0,bandera=0;
	srand(time(NULL));
	printf("Numero de elementos a ordenar\n");
	scanf("%d", &n);
	int lista[n];
	
	for(i=0;i<n;i++)
		lista[i]=rand()%100-50;
		
	printf("Lista sin ordenar\n");
	for(i=0;i<n;i++)
		printf(" %d", lista[i]);
	printf("\n");
	
	for(i=1;i<n;i++){
		bandera=0;
		for(j=0;j<n-i;j++){
			if(lista[j]>lista[j+1]){
				bandera=1;
				temp=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=temp;
			}
		}
		if(bandera==0)
			break;
	}
printf("Lista ordenda\n");
for(i=0;i<n;i++)
	printf(" %d ", lista[i]);
}
