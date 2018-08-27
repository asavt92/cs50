#include <stdio.h>
#include <string.h>
#define SIZE 10

int main (){
	
	char str1[SIZE] = "Z dsafsfdsf ";
	char str2[] = "asf sadf as d";
	char str3[SIZE] = "Second mas ";
	char str4[] = "345yuasf sadv dvd d";
	
	strcat(str1,str2);
	fprintf(stdout, "%s\n",str1);
	
	strncat(str3,(str4+2),4);
	fprintf(stdout, "%s\n",str3);
	
}
