#include <stdio.h>

int any(char s1[], char s2[]);

int main() {
    char s1[] = "hello world";
    printf("expected value:6\t%d\n", any(s1, "w"));
    printf("expected value:0\t%d\n", any(s1, "h"));
    printf("expected value:-1\t%d\n", any(s1, "z"));
}

/* any: returns first index of s1 where any character
from s2 occurs; returns -1 if s1 contains none from s2 */
int any(char s1[], char s2[]) {
    int i, j, c;
    for (i=0; s2[i] != '\0'; i++) {
        c = s2[i];
        for (j=0; s1[j] != '\0'; j++) {
            if (s1[j] == c){
                return j;
            }
        }
    }
    return -1;
}