#include <regx51.h>

sbit sw = P3^2;

void delay(unsigned int);

void main(void)
{
    unsigned char i; // Declare 'i' at the beginning of the block
    sw = 1;
    P1 = 0x00;
    while(1)
    {
        if (sw == 1)
        {
            for (i = 0; i <= 255; i++)
            {
                P1 = i;
                delay(100);
            }
        }
        else
        {
            P1 = 0;
        }
    }
}

void delay(unsigned int itime)
{
    unsigned int i, j;
    for (i = 0; i < itime; i++)
    {
        for (j = 0; j < 1275; j++)
        {
            // This is a placeholder for delay; you may need to add actual delay code here.
        }
    }
}
