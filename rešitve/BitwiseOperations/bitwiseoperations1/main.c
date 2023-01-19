#include <stdio.h>

int setBit(unsigned short a, int b)
{
    return (a |= (1<<b));
}

int clearBit(unsigned short a, int b)
{
    return (a &= ~(1<<b));
}

int flipBit(unsigned short a, int b)
{
    return (a ^= (1<<b));
}

int main() {

    unsigned short newVal;

    newVal = setBit(0x100, 1); // newVal should be 0x102
    printf("setBit ima vrednost: 0x%x\n", newVal);
    newVal = clearBit(0x116, 1); // newVal should be 0x114
    printf("setBit ima vrednost: 0x%x\n", newVal);
    newVal = flipBit(0x316, 8); // newVal should be 0x216
    printf("setBit ima vrednost: 0x%x\n", newVal);
    newVal = flipBit(0x216, 8); // newVal should be 0x316
    printf("setBit ima vrednost: 0x%x\n", newVal);

    return 0;
}


