#include <stdio.h>
#include <string.h>

typedef struct {
char *name;
int age;
} Man;

int main(){
	
	Man one,two, *ukaz;
	//*ukaz - указатель на переменную типа Man
	
	one.age = 11;
	one.name = "San";
	fprintf(stdout,"Age %d - Name %s\n", one.age, one.name);
	
	
	ukaz = &two;
	ukaz -> age = 55;
	ukaz -> name = "Allo";
	
	fprintf(stdout,"Age %d - Name %s\n", ukaz -> age,  ukaz -> name);
	
	}

