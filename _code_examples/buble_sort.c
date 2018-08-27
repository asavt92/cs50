#include <stdio.h>

int main(){
	int a[] = {9,4,5,2,3,5,8,3,1};
	
	int count = 0;
	int n = sizeof(a)/sizeof(a[0]);
	int i;
	int v;
	do{
		count = 0;
		for(i=1;i<n;i++){
			if(a[i]<a[i-1]){
				v = a[i];
				a[i] = a[i-1];
				a[i-1] = v;
				count++;
			}
		}
	} while(count>0);
	
	for(i=0;i<n;i++){
		fprintf(stdout, "%d ",a[i]);
	}
}
