#ifndef _MERGESORT_CPP
#define _MERGESORT_CPP
void mergeSort(int arr[], int low, int high)
{
    if(low >= high)
    {
        return;
    }
    else
    {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        nMerge(arr, low, mid, high);
    }
}
void nMerge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - (mid + 1) + 1;
    int L[n1];
    int R[n2];
    for(int i = 0; i < n1; i++)
    {
        L[i] = arr[i + low];
    }
    for(int j = 0; j < n2; j++)
    {
        R[j] = arr[j + mid + 1];
    }
    int i = 0, j = 0, key = low;
    while(i < n1 && j < n2)
    {
        if(L[i] < R[j])
        {
            arr[key] = L[i];
            key++;
            i++;
        }
        else
        {
            arr[key] = R[j];
            key++;
            j++;
        }
    }
    while(i < n1)
    {
        arr[key] = L[i];
        key++;
        i++;
    }
    while(j < n2)
    {
        arr[key] = R[j];
        key++;
        j++;
    }
}


#endif
