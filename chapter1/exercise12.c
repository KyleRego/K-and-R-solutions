#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
    int c, lastputchar;

    while ((c=getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (lastputchar != '\n'){
                putchar('\n');
                lastputchar = '\n';
            }
            
        }
        else {
            putchar(c);
            lastputchar = c;
        }
    }
    return 0;
}