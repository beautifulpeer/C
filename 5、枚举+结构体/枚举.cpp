#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/*  ö��   */

int main(){
	

/****************�ṹ�嶨�巽��һ*****************/	
	typedef enum 
	{
		AT=0,
		ATE0,
		AT_GMR, //��ѯ�汾��
		AT_I   //��ѯģ��IMEI 
	}tetest;
	
	tetest current_at; 
	
	//	current_at = (AT+1); //�ᱨ������ǰ�������ö������ת�� 
	current_at = (tetest)(AT+1);  
	printf("%d\r\n",current_at);

	
	
/****************�ṹ�嶨�巽����*****************
 	enum tetest
	{
		AT=0,
		ATE0,
		AT_GMR, //��ѯ�汾��
		AT_I   //��ѯģ��IMEI 
	};
		enum tetest current_at;

//	current_at = (AT+1); //�ᱨ������ǰ�������ö������ת�� 
	current_at = (enum tetest)(AT+1);  
	printf("%d\r\n",current_at);
*/	



} 
