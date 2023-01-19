#include <stdio.h>

struct Reg
{
    unsigned short OCTP;
    unsigned short MCUCTL;
};


int main() {

    struct Reg SYS_REG;
    SYS_REG.MCUCTL = 0x1;

    printf("MCUCTL: 0x%x", SYS_REG.MCUCTL);

    return 0;
}


