#include "cs50.c"
#include <stdio.h>
#include <string.h>

int main(void){
	
	string  str = GetString();
	int size = strlen(str);
	int i;
	fprintf(stdout,"%c ",toupper(str[0]));

	for( i = 1; i<size;i++){
		if (str[i-1]==' '){
			fprintf(stdout,"%c ",toupper(str[i]));
		}
	}
	fprintf(stdout,"\b\n");

}
