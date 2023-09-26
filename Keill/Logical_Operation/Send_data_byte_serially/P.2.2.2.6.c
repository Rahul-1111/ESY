#include<regx51.h>
sbit t_bit = P2^0;          // Define t_bit as the first bit of Port 2.
sbit reg_bitdata = ACC^0;     // Define reg_bitdata as the least significant bit of ACC (accumulator).
void main(void)
{
unsigned char a = 0xAA,i;    // Initialize 'a' and declare 'i'.
ACC = a;                     // Load 'a' into the accumulator.
for(i=1;i<=8;i++)            // Loop 8 times.
{
t_bit = reg_bitdata;         // Set t_bit based on reg_bitdata.
ACC = ACC << 1;              // Shift ACC left by 1 bit.
}
}