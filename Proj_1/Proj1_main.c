#include <REG51F.H>

sbit BIT_0_P2 = P2^0;

void main(){
	while(1){
		
		int mask_0 =  1 << 0;
    int masked_0 = P2 & mask_0;
    int P2_zero_bit = masked_0 >> 0;
		
		int mask_1 =  1 << 1;
    int masked_1 = P2 & mask_1;
    int P2_one_bit = masked_1 >> 1;
		
		
		int mask_LOW_P0 = P0 & 0x0F;
		int mask_HIGH_P0 = P0 & 0xF0;
		
		int mask_HIGH_P1 = P1 & 0xF0;
		
		if(P2_zero_bit){
			P1 = mask_HIGH_P1 << 4;
			P1 = mask_LOW_P0 << 4;
		}
		
		int mask_LOW_P1 = P1 & 0x0F;
		
		if (P2_one_bit){
			P1 = mask_HIGH_P0 << 4;
			P1 = mask_LOW_P1 << 4;
		}
		
	}

}