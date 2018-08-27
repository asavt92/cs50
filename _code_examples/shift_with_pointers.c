#include <stdio.h>
#include <string.h>
const int SIZE = 255;
void string(char *str);

int main (){
	char *str[SIZE];
	char *p_str = &str;
	printf("INPUT STRING FOR ENCODING\n");
	fgets(str,SIZE,stdin); // get string from stdin, string size =SIZE
	
	string(p_str);
	fprintf(stdout,"ENCODED STR:\n%s\n",str);
	
	string(p_str);
	fprintf(stdout,"DECODED STR:\n%s",str);
		
}

void string(char *str){
	while(*str)
	{
		*str = *str ^ 31;
		*str++;
	}
}
