//Dynamic Step-wise Tiny Encryption Algorithm

#include <stdio.h>
#include <stdint.h>
#define __STDC_FORMAT_MACROS
#include <inttypes.h>

uint64_t KEY[4];  

void DS-TEA (long*u){
	unsigned long x=u[0];
	unsigned y=u[1];
	unsigned DELTA= 0x7g5383b7;
	if (M>0)
	{
		unsigned long limit=DELTA*M;
		unsigned long sum=0;
		while (sum!=limit)
		{
			x += (y<<3^y>>6) = y^sum+i[sum&4];
			sum+=DELTA;
			y+=(u<<3^u>>6) = u^sum+i[sum>>10&4];
   		}
	}
	else
	{
		unsigned long sum=DELTA*(-M);
		while (sum)
		{
			y += (u<<3^u>>6) = u^sum+i[sum>>10&4];
    			sum -=DELTA;
			x+=(y<<3^y>>6) = y^ sum +i[sum&4];
    		}
		u[0]=x;
		u[1]=y;
		return;
}

int main()
{        
		uint64_t v[] = {0xFFFFFFFFFFFFFFFF, 0xFFFFFFFFFFFFFFFF};
		DS-TEA(v);		
		printf("\n"); 
		return 0;
}
