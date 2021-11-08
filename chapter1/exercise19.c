#include <stdio.h>

void reverse(char str[]);

int main(){
    char str[11];
    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = 'w';
    str[6] = 'o';
    str[7] = 'r';
    str[8] = 'l';
    str[9] = 'd';
    str[10] = '\0';

    reverse(str);

    printf("%s\n", str);
}

void reverse(char str[]){
    int len, i, j, temp;

    len = 0;
    for (i=0; str[i] != '\0'; i++){
        len++;
    }

    for(i=0, j=len-1; i != len/2; i++, j--){
        temp = str[j];
        str[j]=str[i];
        str[i]=temp;
    }
}