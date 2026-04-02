#include <stdio.h>

void my_print(char type, void* x){
    if(type == 'C'){
        char *c = (char *)x;
        printf("%c", *c);
    }else if(type == 'D'){
        int *i = (int *)x;
        printf("%d", *i);
    }else if(type == 'S'){
        char *s = (char *)x;
        printf("%s", s);
    }
}

int main() {
    int a = 0x61;
    char b = 'b';
    char* c = "hello world";

    my_print('C', &a);
    printf("\n");
    my_print('D', &b);
    printf("\n");
    my_print('S', c);
    printf("\n");
    my_print('C', c);

    return 0;
}
