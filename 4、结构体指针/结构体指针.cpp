#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/*  结构体巩固  */

int main(){
	
	struct one   //结构体的名称只是一个名称而已，单片机没有给他分配内存单元 
	{
		uint8_t x1;
		uint16_t x2;
		float x3;	
	}y1; //这是结构体变量的名称，会分配内存单元 
	
	struct one *y2;
	
	y2=&y1;
	
	(*y2).x1=5;
	(*y2).x2=500;
	(*y2).x3=3.5;
	/*    等价于一下表示方法     */
	y2->x1=5;
	y2->x2=500;
	y2->x3=3.5; 
	
	printf("打印结果为：%d\r\n",(*y2).x1);
	printf("打印结果为：%d\r\n",y2->x1);


} 
