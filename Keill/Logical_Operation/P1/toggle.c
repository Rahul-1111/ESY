#include <regx51.h>             // Include the header file for 8051 microcontroller (assuming it's for an 8051)

void add_delay(unsigned int);   // Function prototype for delay function

void main(void)
{
    P0 = 0xAA;                  // Initialize Port 0 with the binary value 10101010b

    while (1)                   // Infinite loop
    {
        P0 = ~P0;               // Toggle all bits of Port 0 (complement the bits)

        add_delay(250);         // Call the delay function with a delay time of 250
    }
}

void add_delay(unsigned int delay_time)
{
    unsigned int x, y;
    for (x = 0; x < delay_time; x++)    //  there are two nested for loops:
    {
        for (y = 0; y < 1275; y++)
        {
                                // This inner loop creates a delay, but it's not very precise.
        }
    }
}