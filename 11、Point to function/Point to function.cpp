#include "stdio.h"

typedef struct{
 char name;
 int (*handle)(void);
}studend_t; 

studend_t stu;


int change(void){
	stu.name = 2; 
	printf("------2  %d\r\n",stu.name);
	return 0;
}



int main(){

 	stu.name = 1;
 	printf("------1  %d\r\n",stu.name);
	stu.handle = change;
	stu.handle(); 
 	
}



