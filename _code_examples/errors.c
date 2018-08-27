#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	for(i=0;i<100;i++){
		fprintf(stdout,"%3d : %s\n",i,strerror(i));
	}
	return 1;
}
