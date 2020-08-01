#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/*  结构体巩固  */

int main(){
	
	struct one  //这个one为结构体标识，没有也行 
	{
		uint8_t x1;
		uint16_t x2;
		float x3;	
	}y1;
	
	 
	y1.x1=8;
	y1.x2=500;
	y1.x3=3.4;
	
	printf("打印结果为：%d\r\n",y1.x1);
	printf("打印结果为：%d\r\n",y1.x2);
	printf("打印结果为：%.2f\r\n",y1.x3);


} 
