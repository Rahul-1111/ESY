#include <regx51.h>
void add_delay(unsigned int); // Declare the add_delay function.
sbit data_bit=P1^2;          // Define a bit variable data_bit on Port 1, bit 2.
void main(void)
{
while(1)                     // Infinite loop.
{
data_bit=1;                   // Set data_bit to 1 (high)
add_delay(50);             // Call the add_delay function with a delay of 50.
data_bit=0;                  // Set data_bit to 0 (low).
}
}
void add_delay(unsigned int delay_time)
{
unsigned int x,y;
for(x=0;x<delay_time;x++)    // Outer loop for delay_time iterations.
for(y=0;y<1275;y++);         // Inner loop for creating a delay.
}