#ifndef _INSERTIONSORT_CPP
#define _INSERTIONSORT_CPP
void insertionSort(int arr[], int n)
{
    for(int i = 1;  i < n; i++)
    {
        int j = i - 1;
        int temp = arr[i];
        while(j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        int key = j + 1;
        arr[key] = temp;
    }
}

#endif
