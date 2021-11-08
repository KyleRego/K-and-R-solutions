#include <stdio.h>

int lower(int c);

int main() {
    printf("%c", lower('A'));
}

int lower(int c) {
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c ;
}

// int lower(int c)
// {
//     if (c >= 'A' && c <= 'Z')
//         return c + 'a' - 'A';
//     else
//         return c;
// }