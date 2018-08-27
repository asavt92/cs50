/* strcat example */
#include <stdio.h>
#include <string.h>

int main ()
{
  int num = 10;
  
  int* p_num = &num; //инициализация и определение указателя
  fprintf(stdout,"Adres %x  Value %d\n\n",p_num, *p_num); 
  
  int mas[] = {0,1,2,3,4};
  int* p_mas = &mas; //для массивов можно не указывать &, т.к. указатель будет ссылаться на первый элемент массива
  
  // Количество элементов массива, выведем адрес ячейки памяти
  int cnt = sizeof(mas)/sizeof(int);
  fprintf(stdout,"Adres %x  Value %d\n\n",&cnt, cnt); 
  
  int i =0;
  for (i=0;i<cnt;i++){
  	fprintf(stdout, "Index %d Adres %x  Value %d\n",i, p_mas, *p_mas);
  	p_mas++; //Сдвигаем указатель на след элемент
}
	
	char* p_str;
	char str[] = "String Some";
	p_str = &str;
	
	//Вывод строки
	fprintf(stdout,"%s\n",str);
	
	//Вывод строки с указателями посимвольно
	for (i=0;i<strlen(str);i++){
		// Изменим символ
		if(*p_str=='S'){
			*p_str='Z';
		}
		fprintf(stdout,"%c",*p_str);
		p_str++;
	}
	
	printf("\n\n");
	
	func2(p_num);
	fprintf(stdout,"Adres %x  Value %d\n\n",p_num, *p_num); 
	
	func1(p_num);
  	fprintf(stdout,"Adres %x  Value %d\n\n",p_num, *p_num); 
	


}



void func1(int *p_num){
	*p_num = *p_num + *p_num;
}


void func2(int *p_num){
	*p_num = *p_num * *p_num;
}
