#include <regx51.h>

void my_delay(unsigned int);

void main(void)
{
    unsigned int i; // Declare 'i' to use it in the for loop
    P1 = 0x00; // Initialize P1 with 0x00
    
    for (i = 0; i <= 255; i++)
    {
        P1++; // Increment the value of P1
        my_delay(200);
    }
}

void my_delay(unsigned int my_time)
{
    unsigned int j, k;
    
    for (j = 0; j < my_time; j++)
    {
        for (k = 0; k < 1275; k++)
       { 
             // This nested loop is used to create a time delay.
            // The exact duration of the delay depends on the value 1275 and the system clock frequency.
            // Adjust the values within these loops to achieve the desired delay duration.
		}
    }
}
