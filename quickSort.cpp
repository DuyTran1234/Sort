
#ifndef _QUICKSORT_CPP
#define _QUICKSORT_CPP
void quickSort(int arr[], int low, int high)
{
    if(low >= high)
    {
        return;
    }
    else
    {
        int pivot = nPartition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}
int nPartition(int arr[], int low, int high)
{
    int left = low;
    int right = high - 1;
    int pivot = arr[high];

    while(true)
    {
        while(left <= right && arr[left] < pivot)
        {
            left++;
        }
        while(right >= left && arr[right] > pivot)
        {
            right--;
        }
        if(left > right)
        {
            break;
        }
        else
        {
            exChange(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
    exChange(&arr[left], &arr[high]);
    return left;
}
#endif
