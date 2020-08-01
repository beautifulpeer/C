#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/*  >>ºÍ&²âÊÔ    */

int main(){
	
	uint16_t buf1,buf2;
    uint16_t pkt;
    

	 
    pkt = 0xffee;
    buf1 = pkt >> 8; 
    buf2 = buf1 & 0x00ff;
    printf("%d\n",buf2);


} 
