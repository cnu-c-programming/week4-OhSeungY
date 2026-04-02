#include <stdio.h>
#include <ctype.h>

int main() {
    char chars[] = { 'A', 'z', '5', '!' };
    int n = sizeof(chars) / sizeof(chars[0]);

    for(int i=0; i<n; i++){
        char ch = chars[i];
        printf("%c - alpha:%d digit:%d upper:%c lower:%c", ch, 
            isalpha(ch), 
            isdigit(ch), 
            toupper(ch), 
            tolower(ch));
        if(i < n-1){
            printf("\n");
        }
    }

    return 0;
}
 
