#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/*  �ṹ�幮��  */

int main(){
	
	struct one   //�ṹ�������ֻ��һ�����ƶ��ѣ���Ƭ��û�и��������ڴ浥Ԫ 
	{
		uint8_t x1;
		uint16_t x2;
		float x3;	
	}y1; //���ǽṹ����������ƣ�������ڴ浥Ԫ 
	
	struct one *y2;
	
	y2=&y1;
	
	(*y2).x1=5;
	(*y2).x2=500;
	(*y2).x3=3.5;
	/*    �ȼ���һ�±�ʾ����     */
	y2->x1=5;
	y2->x2=500;
	y2->x3=3.5; 
	
	printf("��ӡ���Ϊ��%d\r\n",(*y2).x1);
	printf("��ӡ���Ϊ��%d\r\n",y2->x1);


} 
