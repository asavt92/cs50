#include <stdio.h>
#include <string.h>

typedef struct {
char *str;
} PtrType;

char a[10]  = {'a','b','\0','a','b','a','b'};
PtrType s = {"GOOD qwerty"};

int main(){
	
	char *u = "idea";
	int *ukaz = u;
	//Перезапишем массив символов
	int i;
	for(i=0;i<5; i++){
		a[i] = *u++;
	}
	fprintf(stdout,"%s\n\n",a);
	
	//Перезапишем указатель
	s.str = ukaz;
	fprintf(stdout,"%s",s.str);
	}

