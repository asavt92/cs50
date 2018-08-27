#include <stdio.h>
#define SIZE 10

int main (){
	int numbers[SIZE] = {0,1,2,3,4};
	int *p_num[SIZE];
	
	int i;
	for( i=0;i<SIZE;i++){
		p_num[i] = &numbers[i];
	}
	
	for( i=0;i<SIZE;i++){
		fprintf(stdout, "Index %d Adres %x  Value %d\n",i, p_num[i], numbers[i]);
		
	}
}
