//Q.1 Q1. Set, Clear and Toggle a Bit Given an 8-bit unsigned variable:
#include <stdio.h>
#include<stdint.h>
int main(void)
{
	uint8_t reg = 0x2A;
	
	reg |=(1<<4);//set bit 4
	printf("for bit 4:0x%02X (00111010)\n",reg);
	
	reg ^=(1<<4);//toggle bit 5
	printf("for bit 5:0x%02X (00011000)\n",reg);
	
	reg &=(1<<5);//clear bit 1
	printf("for bit 4:0x%02X (00111000)\n",reg);
}
