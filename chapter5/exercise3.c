#include <stdio.h>

void strcat2(char *, char *);

int main(){
    char s[] = "hello";
    char t[] = "world";
    strcat2(s, t);
    printf("%s", s);
}

void strcat2(char *to, char *from){
    while (*to){
        *to++;
    }
    while (*to++ = *from++){
        ;
    }
}