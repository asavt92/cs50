/*
 * asciimath.c
 * by Zamyla Chan
 *
 * Calculates the addition of a char and an integer,
 * and displays both the resultant character and its
 * ASCII value.
 *
 * Usage: ./asciimath key [char]
 *
 */

#include <stdio.h>
#include <string.h>
#include "cs50.c"

int main(int argc, string argv[])
{

//    if (argc != 2)
//        {
//    printf("print the key next time \n");
//    return 1;
//        }
    // key is the second command line argument
 	int i;
    //int key = (atoi(argv[1])%26); // int CEESAR
    string key = argv[1];
    key = "abc";
    int k_len = strlen(key);
    for(i=0;i<k_len;i++){
    	if (!isalpha(key[i]))
        {
   			printf("print the string key next time \n");
    		return 1;
        }
        //key[i] = (key[i] % 26);
	}
    fprintf(stdout,"%s\n",key);
    
	fprintf(stdout,"Input your string\n");
    string letter = GetString();
   
   	
   	for(i=0;i<strlen(letter);i++){
   		if(isalpha(letter[i])){
   			if(isupper(letter[i])){
   				fprintf(stdout,"%d\n",key[i%k_len]%26);
   				letter[i] += ((key[i%k_len]%26));
   				if(letter[i]<65){
   					letter[i]+=26;
				   }
				if(letter[i]>90){
					letter[i]-=26;
				}
			   } else {
			   	fprintf(stdout,"%d\n",key[i%k_len]%26);
			   	fprintf(stdout,"%d\n",letter[i]);
			   	letter[i] += ((key[i%k_len]%26));
			   	fprintf(stdout,"%d\n",letter[i]);
   				if(letter[i]<97){
   					letter[i]+=26;
				   }
				if(letter[i]>122){
					letter[i]-=26;
				}
				fprintf(stdout,"%d\n",letter[i]);
			   }
		   }
	   }
    printf("ENCODED letter is: %s.\n\n", letter);
    
    for(i=0;i<strlen(letter);i++){
   		if(isalpha(letter[i])){
   			if(isupper(letter[i])){
   				letter[i] -= ((key[i%k_len]%26));
   				if(letter[i]<65){
   					letter[i]+=26;
				   }
				if(letter[i]>90){
					letter[i]-=26;
				}
			   } else {
			   	letter[i] -= ((key[i%k_len]%26));
   				if(letter[i]<97){
   					letter[i]+=26;
				   }
				if(letter[i]>122){
					letter[i]-=26;
				}
			   }
		   }
	   }
	printf("DECODED letter is: %s.\n\n", letter);
   
    return 0;

}
