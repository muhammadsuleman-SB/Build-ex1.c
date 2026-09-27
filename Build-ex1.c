#include <stdio.h>

int main(void)
{

    printf("unsigned char: %zu bytes, %zu bits\n",
           sizeof(unsigned char), sizeof(unsigned char) * 8);

    printf("unsigned short: %zu bytes, %zu bits\n",
           sizeof(unsigned short), sizeof(unsigned short) * 8);

    printf("unsigned int: %zu bytes, %zu bits\n",
           sizeof(unsigned int), sizeof(unsigned int) * 8);

    printf("unsigned long: %zu bytes, %zu bits\n",
           sizeof(unsigned long), sizeof(unsigned long) * 8);


    unsigned char a = 0x12;
    unsigned char b = 0xda;
    unsigned char c = 0x3b;
    unsigned char d = 0xbe;

    printf("\nHexadecimal values:\n");

    printf("a: %%x = %x, %%d = %d, %%c = %c\n",
           (unsigned int)a, (int)a, a);

    printf("b: %%x = %x, %%d = %d, %%c = %c\n",
           (unsigned int)b, (int)b, b);

    printf("c: %%x = %x, %%d = %d, %%c = %c\n",
           (unsigned int)c, (int)c, c);

    printf("d: %%x = %x, %%d = %d, %%c = %c\n",
           (unsigned int)d, (int)d, d);


    unsigned int input;

    printf("\nEnter a hexadecimal value: ");
    scanf("%x", &input);

    unsigned char hexInput = (unsigned char)input;

    printf("You entered: %x\n", (unsigned int)hexInput);



    printf("\nBitwise operations:\n");

    printf("0x12 & 0xda = %x\n",
           (unsigned int)(a & b));

    printf("0x12 | 0xda = %x\n",
           (unsigned int)(a | b));

    printf("0x12 ^ 0xda = %x\n",
           (unsigned int)(a ^ b));

    printf("0x3b & 0xbe = %x\n",
           (unsigned int)(c & d));

    printf("0x3b | 0xbe = %x\n",
           (unsigned int)(c | d));

    printf("0x3b ^ 0xbe = %x\n",
           (unsigned int)(c ^ d));



    unsigned int number;

    printf("\nEnter another hexadecimal value: ");
    scanf("%x", &number);

    unsigned char result = (unsigned char)number;

    result = result | 0x0F;

    printf("Result: %x\n", (unsigned int)result);

    return 0;
}
