#include <stdio.h>

int main() {

    int myInt = 25;
    int *pmyInt = &myInt;
    *pmyInt = 52;
    printf("myInt: %d\n", myInt);
    printf("myInt: %d\n", *pmyInt);

    return 0;
}
