#include <stdio.h>

int day_of_year(int, int, int);

int main(){
    int year = 2021;
    int month = 11;
    int day = 16;
    day = day_of_year(year, month, day);
    printf("%d\n", day);
    return 0;
}

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int day_of_year_original(int year, int month, int day)
{
	int i, leap;
	
	leap = (year%4 == 0 && year%100 != 0) || year%400 == 0;
	for (i = 1; i < month; i++)
		day += daytab[leap][i];
	return day;
}

/* day_of_year: set day of year from month and day */
int day_of_year(int year, int month, int day)
{
    int i, leap;

    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;

    char *p = &daytab[leap][1];

    for (i = 1; i < month; i++) {
        day += *p;
        p++;
    }
    return day;
}


