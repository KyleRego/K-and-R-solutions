#include <stdio.h>

int strend(char *, char *);

int main(){
    char longstring[] = "hello world";
    char shortstring[] = "world";
    int result = strend(shortstring, longstring);
    return 0;
}

/* strend: return 1 if s is at end of t; return 0 otherwise */
int strend(char *s, char *t){
    char first = *s;
    while(*s){
        *s++;
    }
    while (*t){
        *t++;
    }
    while(*t == *s){
        *t--;
        *s--;
        if (*s == first){
            return 1;
        }
    }
    return 0;

}