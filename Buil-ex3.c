#include <stdio.h>

int main(void)
{

    unsigned int value;
    int p;
    int n;

    printf("Enter hexadecimal value: ");
    scanf("%x", &value);

    printf("Enter p and n: ");
    scanf("%d %d", &p, &n);

    if (n == 0)
    {
        printf("0\n");
        return 0;
    }

    unsigned int mask;

    mask = (1u << n) - 1u;

    value = value >> p;
    value = value & mask;

    printf("%x\n", value);

    return 0;
}
