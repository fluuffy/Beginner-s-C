#include <stdio.h>

int main()
{

    long int decimalNumber, quotient;
    int i=1, buffer[100], j;

    printf("Enter the decimal number: ");
    scanf("%ld", &decimalNumber);

    quotient = decimalNumber;

    while (quotient!=0){

        buffer[i++] = quotient % 2;
        quotient = quotient / 2;

    }
    printf("Binary val of decimal number %d is [", decimalNumber);
    for (j = i-1; j > 0; j--)
        printf("%d", buffer[j]);
        puts("]");
    return 0;
}
