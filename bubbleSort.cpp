#include "Sort.h"

#ifndef _BUBBLESORT_CPP
#define _BUBBLESORT_CPP
void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                exChange(&arr[j], &arr[j + 1]);
            }
        }
    }
}

#endif
