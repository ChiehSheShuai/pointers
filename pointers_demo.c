#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;      // ptr holds the address of num
    int **dptr = &ptr;    // dptr holds the address of ptr

    // Print the value and address of num
    printf("Value of num           : %d\n", num);
    printf("Address of num         : %p\n\n", &num);

    // Print what ptr holds and points to
    printf("ptr holds (addr of num): %p\n", ptr);
    printf("ptr points to value    : %d\n\n", *ptr);

    // Print what dptr holds and points to
    printf("dptr holds (addr of ptr): %p\n", dptr);
    printf("dptr points to (ptr val): %p\n", *dptr);
    printf("dptr double deref       : %d\n", **dptr);

    return 0;
}