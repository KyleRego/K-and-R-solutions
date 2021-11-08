#include <stdio.h>

int fahr_to_cels(int fahr);

int main(){
    for (int i=0; i<=300; i=i+20){
        printf("Fahrenheit:%d\tCelsius:%d\n", i, fahr_to_cels(i));
    }
    return 0;
}

int fahr_to_cels(int fahr){
    return 5 * (fahr - 32) / 9;
}