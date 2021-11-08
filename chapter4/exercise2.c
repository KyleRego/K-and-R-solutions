#include <ctype.h>
#include <stdio.h>
#include <math.h>

double atof(char s[]);

int main(){
    char test[50] = "   +50.23e+3";
    printf("%f\n", atof(test));
}

/* atof: convert string s to double */
double atof(char s[])
{
    double val, power, exponent;
    int i, sign, exponentsign;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    if (s[i] == 'e' || s[i] == 'E')
        i++;
    exponentsign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (exponent = 0; isdigit(s[i]); i++) {
        exponent = 10.0 * exponent + (s[i] - '0');
    }
    //printf("%d, %f\n", exponentsign, exponent);
    exponent = exponentsign * exponent;
    //printf("%d, %f, %f, %f\n", sign, val, exponent, power);
    return pow((sign * val / power) , exponent);
}