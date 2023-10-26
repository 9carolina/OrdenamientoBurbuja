#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand (time(NULL));
	int arr[100];
	
	for (int a=0;a<100;a++){
		arr=rand()%100;
	}
	
	return 0;
}



