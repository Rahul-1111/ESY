#include <regx51.h>

void main(void)
{
    unsigned char a[10], sum = 0, i;

    // Initialize port P1 as an input port
    P1 = 0xFF;

    for (i = 0; i < 10; i++) // Changed the loop initialization and condition
    {
        a[i] = P1;
        sum = sum + a[i];
    }

    P3 = sum; // Output the sum to port P3
}