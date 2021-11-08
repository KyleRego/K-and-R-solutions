#include <stdio.h>

void shellsort(int v[], int n);

int main(){
    int test[5];
    test[0] = 7;
    test[1] = 3;
    test[2] = 5;
    test[3] = 10;
    test[4] = 1;

    shellsort(test, 5);
    for (int i=0; i < 5; i++){
        printf("%d ", test[i]);
    }
}


/* shellsort: sort v[0]...v[n-1] into increasing order */
void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}