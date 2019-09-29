#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
// Complete the minimumAbsoluteDifference function below.
int minimumAbsoluteDifference(int arr_count, int *arr)
{
    int currMin = -1;
    qsort(arr, arr_count, sizeof(int), compare);
    for (int i = 0; i < arr_count - 1; i++)
    {
        int absDifference = abs(arr[i] - arr[i + 1]);
        if (currMin < 0 || currMin > absDifference)
        {
            currMin = absDifference;
        }
        if (currMin == 0)
        {
            return 0;
        }
    }
    return currMin;
}