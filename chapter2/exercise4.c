#include <stdio.h>
#include <string.h>

void squeeze(char s[], int c);
void squeeze2(char s1[], char s2[]);

int main() {
    char s1[] = "hello world";
    char s2[] = "lol";
    squeeze2(s1, s2);
    printf("%s\n", s1);
    return 0;
}

/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

/* squeeze2: delete all char from s2 from s1 */
void squeeze2(char s1[], char s2[]) {
    int i;
    for (i = 0; s2[i] != '\0'; i++)
        squeeze(s1, s2[i]);
}