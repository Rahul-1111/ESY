#include <regx51.h>

void main(void)
{
    unsigned char data_byte;  // Declare an 8-bit variable to store data
    P0 = 0xFF;               // Set Port 0 to all high (0xFF)

    while(1)
    {
        data_byte = P0;      // Read data from Port 0

        if (data_byte > 99)
            P1 = data_byte;  // If data is greater than 99, assign it to Port 1
        else
            P2 = data_byte;  // Otherwise, assign it to Port 2
    }
}