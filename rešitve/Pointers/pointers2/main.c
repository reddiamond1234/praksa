#include <stdio.h>

void incrementInt(int a);
void  incrementIntPtr(int *a);

int main() {

    int myInt = 42;

    printf("myInt at beginning: %d\n", myInt);
    incrementInt(myInt);
    printf("myInt after incrementInt: %d\n", myInt);
    incrementIntPtr(&myInt);
    printf("myInt after incrementIntPtr: %d\n", myInt);

    return 0;
}

void incrementInt(int a)
{
    a+=2;
    printf("myInt: %d\n", a);
}

void  incrementIntPtr(int *a)
{
    *a+=2;
    printf("myInt: %d\n", *a);
}
