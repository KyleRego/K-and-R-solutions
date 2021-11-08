#include <stdio.h>
#include <string.h>

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

int main(){
    char teststring[13] = "hello\tworld\n";
    char outstring[40];
    escape(outstring, teststring);
    printf("%s\n", outstring);
    char teststring2[18] = "hello\\nworld\\tfoo";
    char outstring2[40];
    unescape(outstring2, teststring2);
    printf("%s\n", outstring2);
    return 0;
}

/* escape: copies string t to s, replaces newline and tab with visible escape sequences */
void escape(char s[], char t[]) {
    int i, j;
    i = j = 0;
    while (t[i]) {
        switch (t[i]) {
            case '\t':
                s[j++] = '\\';
                s[j] = 't';
                break;
            case '\n':
                s[j++] = '\\';
                s[j] = 'n';
                break;
            default:
                s[j] = t[i];
        }
        i++;
        j++;
    }
    s[j] = t[i];
}

/* unescape: copies t to s, replaces visible escape sequences with newline and tab */
void unescape(char s[], char t[]){
    int i, j; /* i for t, j for s */
    i = j = 0;

    while (t[i]){
        switch (t[i]){
            case '\\':
                switch(t[++i]){
                    case 't':
                        s[j++] = '\t';
                        i++;
                        break;
                    case 'n':
                        s[j++] = '\n';
                        i++;
                        break;
                }
            default:
                s[j++] = t[i++];
                break;
        }
    }
    s[j] = t[i];
}