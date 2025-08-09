#include <stdio.h>
unsigned int flippingBits(unsigned int n) 
{
    return (~n) & 0xFFFFFFFF;
}

int main() 
{
    int t;
    scanf("%d", &t);
    while (t > 0) 
    {
        unsigned int num;
        scanf("%u", &num);
        printf("%u\n", flippingBits(num));
        t--;
    }
    return 0;
}
