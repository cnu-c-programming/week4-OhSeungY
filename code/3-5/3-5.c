#include <stdio.h>

void my_print(char type, void* x){
    if(type == 'C'){
        char *c = (char *)x;
        printf("%c\n", *c);
    }else if(type == 'D'){
        int *i = (int *)x;
        printf("%d\n", *i);
    }else if(type == 'S'){
        char *s = (char *)x;
        printf("%s\n", s);
    }
}

int main() {
    int a = 0x61;
    char b = 'b';
    char* c = "hello world";

    my_print('C', &a);
    my_print('D', &b);
    my_print('S', c);
    my_print('C', c);

    return 0;
}
