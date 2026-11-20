#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int recursiveMaximum(const int array[], int size);

int main(void)
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int max;

    max = recursiveMaximum(a, SIZE);

    printf("Largest element is %d\n", max);

    system("pause");
    return 0;
}

int recursiveMaximum(const int array[], int size)
{
    int subMax;

    if (size == 1)
    {
        return array[0];
    }

    subMax = recursiveMaximum(array, size - 1);

    if (array[size - 1] > subMax)
    {
        return array[size - 1];
    }
    else
    {
        return subMax;
    }
}