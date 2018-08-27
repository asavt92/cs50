#include "cs50.c"
#include <stdio.h>

int main(void){
	int money;
	do{
		money = GetInt();
	} while( money<=0||money>100);
	
	int num = 0;
	
	while(money>0){
		num+=1;
		if(money-25>=0){
			money -= 25;
		} else{
			if(money-10>=0){
			money -= 10;
				} else{
					if(money-1>=0){
						money -= 1;
						}
						}
		}
	}
	printf("%d",num);
}
