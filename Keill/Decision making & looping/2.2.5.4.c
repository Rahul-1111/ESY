#include<regx51.h>
void add_delay(unsigned int);
sbit data_bit=P1^2;
void main(void)
{
while(1)
{
data_bit=1;
add_delay(50);
data_bit=0;
add_delay(50);
}
}
void add_delay(unsigned int delay_time)
{
unsigned int x,y;
for(x=0;x<delay_time;x++)
	{
for(y=0;y<1275;y++)
		{
            // This is a placeholder for delay; you may need to add actual delay code here.
        }
	}
}