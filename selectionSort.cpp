#include "Sort.h"

#ifndef _SELECTIONSORT_CPP
#define _SELECTIONSORT_CPP

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                exChange(&arr[i], &arr[j]);
            }
        }
    }
}


#endif
