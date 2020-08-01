#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/*  枚举   */

int main(){
	

/****************结构体定义方法一*****************/	
	typedef enum 
	{
		AT=0,
		ATE0,
		AT_GMR, //查询版本号
		AT_I   //查询模组IMEI 
	}tetest;
	
	tetest current_at; 
	
	//	current_at = (AT+1); //会报错，在其前面需加上枚举类型转换 
	current_at = (tetest)(AT+1);  
	printf("%d\r\n",current_at);

	
	
/****************结构体定义方法二*****************
 	enum tetest
	{
		AT=0,
		ATE0,
		AT_GMR, //查询版本号
		AT_I   //查询模组IMEI 
	};
		enum tetest current_at;

//	current_at = (AT+1); //会报错，在其前面需加上枚举类型转换 
	current_at = (enum tetest)(AT+1);  
	printf("%d\r\n",current_at);
*/	



} 
