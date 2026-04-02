#include <stdio.h>

void swap_endian(int *x){
    unsigned char* addr = (unsigned char*)x;
    char a1 = *addr;
    char a2 = *(addr + 1);
    char a3 = *(addr + 2);
    char a4 = *(addr + 3);

    *addr = a4;
    *(addr + 1) = a3;
    *(addr + 2) = a2;
    *(addr + 3) = a1;
}

int main() {
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
} 
