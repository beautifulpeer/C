#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/*  �ṹ�幮��  */

int main(){
	
	struct one  //���oneΪ�ṹ���ʶ��û��Ҳ�� 
	{
		uint8_t x1;
		uint16_t x2;
		float x3;	
	}y1;
	
	 
	y1.x1=8;
	y1.x2=500;
	y1.x3=3.4;
	
	printf("��ӡ���Ϊ��%d\r\n",y1.x1);
	printf("��ӡ���Ϊ��%d\r\n",y1.x2);
	printf("��ӡ���Ϊ��%.2f\r\n",y1.x3);


} 
