#include <regx51.h>

void add_delay(unsigned int);

void main(void)
{
    while(1)
    {
        P0=0xAA;
        add_delay(200);
        P1=0xAA;
        add_delay(200);
        P2=0xAA;
        add_delay(200);
        P0=0x55;
        add_delay(200);
        P1=0x55;
        add_delay(200);
        P2=0x55;
        add_delay(200);
    }
}

void add_delay(unsigned int delay_time)
{
    unsigned int x,y;
    for(x=0; x<delay_time; x++)
    {
        for(y=0; y<1275; y++);
    }
}
