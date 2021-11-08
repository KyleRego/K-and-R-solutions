#include <stdio.h>

int main(){
    int c;
    int lastchar;

    while ( (c=getchar()) != EOF) {
        if (c == ' ' && lastchar == ' ') {
            lastchar = c;
        }
        else {
            putchar(c);
            lastchar = c;
        }
    }

    return 0;
}