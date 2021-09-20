#include <stdio.h>

#include <limits.h>

int main(void) 
{
        printf("\t\tThis is variable Storage size & Value range on your computer machine\n");
        printf("The number of bits in a byte %d\n", CHAR_BIT);
        
        printf("%-10s %-10s %31s\n\n", "Data Types","Storage Size", "Value Range");

        printf("%-10s %-10d %25d to %-25d\n", "Char", sizeof(char), CHAR_MIN, CHAR_MAX);

        printf("%-10s %-10d %25d to %-25d\n", "Short", sizeof(short), SHRT_MIN, SHRT_MAX);

        printf("%-10s %-10d %25d to %-25d\n", "Int", sizeof(int), INT_MIN, INT_MAX);

        printf("%-10s %-10d %-5d to %-25d\n", "Long", sizeof(long), LONG_MIN, LONG_MAX);

        return(0);
}
