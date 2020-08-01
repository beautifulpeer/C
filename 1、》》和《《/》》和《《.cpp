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
    
    pkt = 0xFFEE;
    buf1 = pkt >> 8;
    buf2 = pkt << 8;
    printf("%d\n",pkt);
    printf("%d\n",buf1);
    printf("%d\n",buf2);


} 
