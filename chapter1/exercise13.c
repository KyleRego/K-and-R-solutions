#include <stdio.h>

#define MAXWORDLENGTH 20

int main() {
    int i, c, counter;
    int wordlengths[MAXWORDLENGTH];

    for (i=0; i<=MAXWORDLENGTH; i++){
        wordlengths[i] = 0;
    }

    counter = 0;

    while ((c=getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            wordlengths[counter]++;
            counter = 0;
        } 
        else counter++;

    }
    for (i=1; i<=MAXWORDLENGTH; i++){
        printf("%3d:", i);
        for (int j=0; j<wordlengths[i]; j++){
            printf("*");
        }
        printf("\n");
    }
}