#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int dice1 , dice2 , sum;
    int a[13] = {0};
    srand(time(0));
    for (int i = 0; i <=36000; i++){
        dice1 = rand() %6 + 1;
        dice2 = rand() %6 + 1;
        sum = dice1 + dice2;
        a[sum]++;
    }
    for (int sum = 2; sum <= 12; sum++){
        printf("%d:\t%d\n", sum , a[sum]);
    }
}