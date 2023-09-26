#include<regx51.h>
void my_delay(unsigned int);
void main(void)
{
	unsigned int i;
P1=00;
for(i=0;i<=255;i++)
{
P1++;
my_delay(200);
}
}
void my_delay(unsigned int my_time)
{
unsigned int j,k;
for(j=0;my_time;j++)
	{
for(k=0;k<1275;k++)
		{
		}
}
	}