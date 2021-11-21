#include <stdio.h>
#include <ctype.h>

int getch(void);
void ungetch(int);
int getfloat(float *);

int main(){
    float result;
    getfloat(&result);
    printf("result: %f\n", result);
}

/* getfloat: get next floating-point number from input into *pn */
int getfloat(float *pn){
    int c, sign;
    int i;

    while (isspace(c = getch()))
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c-'0');
    if (c == '.')
        c = getch();
    for (*pn, i = 1; isdigit(c); c = getch()){
        *pn = 10 * *pn + (c-'0');
        i *= 10;
    }
    *pn /= i;
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}








#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}