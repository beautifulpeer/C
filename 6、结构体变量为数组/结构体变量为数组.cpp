#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/*  结构体变量为数组   */

int main()
{
	
	typedef struct{
		char *ATSendStr;
		char *ATRecStr;
		uint16_t TimeOut;
	}tsATCmds;
	
	 
	tsATCmds ATCmds[]={
		{"AT\r\n","OK",200},
		{"ATE0\r\n","OK",200},
		{"AT+GMR\r\n","ME3616",200},
	};	

	printf("%s\r\n",ATCmds[0]);
	printf("%s\r\n",ATCmds[1]);
	printf("%s\r\n",ATCmds[2]);

} 
