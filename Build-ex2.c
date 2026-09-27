#include <stdio.h>

int main(void)
{
    unsigned char value;
    unsigned int input;
    int p;
    int n;

    printf("Enter hexadecimal value: ");
    scanf("%x", &input);

    value = (unsigned char)input;

    printf("Enter p and n: ");
    scanf("%d %d", &p, &n);

    if (n == 0)
    {
        printf("0\n");
        return 0;
    }

    unsigned char mask;

    mask = (unsigned char)((1u << n) - 1u);

    value = (unsigned char)(value >> p);
    value = (unsigned char)(value & mask);

    printf("%x\n", value);

    return 0;
}
