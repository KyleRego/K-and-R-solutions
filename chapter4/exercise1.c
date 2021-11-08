#include <stdio.h>
#include <string.h>

int strrindex(char s[], char t[]);

int main(){

    char testarray[50] = "hello world";
    char testchar[5] = "l";

    printf("%d", strrindex(testarray, testchar));

}

/* strrindex: return rightmost index of t in s, -1 if none */
int strrindex(char s[], char t[]){
    int i, j, k, p;
    int iarray[10];
    iarray[0] = -1;

    for (i=0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k]!='\0'&& s[j] == t[k]; j++, k++){
            ;
        }
        if (k > 0 && t[k] == '\0')
            iarray[++p] = i;
    }
    return iarray[p];
    
}