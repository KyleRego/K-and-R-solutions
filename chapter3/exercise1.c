#include <stdio.h>

int binsearch(int x, int v[], int n);

int main() {
    int test[10];
    for (int i=0; i<10; i++){
        test[i] = i;
    }
    int result = binsearch(5, test, 10);
    printf("%d", result);
}


/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n-1;
    while (low <= high && x != v[mid]) {
        mid = (low+high) /2;
        if (x < v[mid])
            high = mid -1;
        else
            low = mid +1;
    }
    if (v[mid] == x) {
        return mid;
    }
    else
        return -1;
}