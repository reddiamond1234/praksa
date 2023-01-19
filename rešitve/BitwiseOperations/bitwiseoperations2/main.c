#include <stdio.h>

int setBits(unsigned short a, int b)
{
    return (a |= b);
}

int clearBits(unsigned short a, int b)
{
    return (a &= ~(b));
}

int flipBits(unsigned short a, int b)
{
    return (a ^= b);
}

int main() {

    unsigned short newVal;
    
    newVal = setBits(0x100, 0x101); // newVal should be 0x101
    printf("setBit ima vrednost: 0x%x\n", newVal);
    newVal = clearBits(0x116, 0x022); // newVal should be 0x114
    printf("setBit ima vrednost: 0x%x\n", newVal);
    newVal = flipBits(0x316, 0x111); // newVal should be 0x207
    printf("setBit ima vrednost: 0x%x\n", newVal);

    return 0;
}


