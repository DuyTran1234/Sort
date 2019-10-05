#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Sort.h"
#include "selectionSort.cpp"
#include "bubbleSort.cpp"
#include "insertionSort.cpp"
#include "mergeSort.cpp"
#include "quickSort.cpp"
using namespace std;

int main()
{
    int *nArray = new int[1000];
    int mSize = 0;
    for(;;)
    {
        int choice = 0;
        cout<<"1. Selection Sort"<<endl;
        cout<<"2. Bubble Sort"<<endl;
        cout<<"3. Insertion Sort"<<endl;
        cout<<"4. Merge Sort"<<endl;
        cout<<"5. Quick Sort"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"#Select: ";
        cin>>choice;
        if(choice == 0)
        {
            break;
        }
        else if(choice == 1)
        {
            importArray(nArray, mSize);
            exportArray(nArray, mSize);
            cout<<"SORT: "<<endl;
            selectionSort(nArray, mSize);
            exportArray(nArray, mSize);
        }
        else if(choice == 2)
        {
            importArray(nArray, mSize);
            exportArray(nArray, mSize);
            cout<<"SORT: "<<endl;
            bubbleSort(nArray, mSize);
            exportArray(nArray, mSize);
        }
        else if(choice == 3)
        {
            importArray(nArray, mSize);
            exportArray(nArray, mSize);
            cout<<"SORT: "<<endl;
            insertionSort(nArray, mSize);
            exportArray(nArray, mSize);
        }
        else if(choice == 4)
        {
            importArray(nArray, mSize);
            exportArray(nArray, mSize);
            cout<<"SORT: "<<endl;
            mergeSort(nArray, 0, mSize - 1);
            exportArray(nArray, mSize);
        }
        else if(choice == 5)
        {
            importArray(nArray, mSize);
            exportArray(nArray, mSize);
            cout<<"SORT: "<<endl;
            quickSort(nArray, 0, mSize - 1);
            exportArray(nArray, mSize);
        }
        else
        {
            cout<<"Nhap sai!!"<<endl;
        }
    }
}
void importArray(int arr[], int &n)
{
    srand(time(NULL));
    cout<<"Enter amount element: ";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000 + 1;
    }
}
void exportArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<"A["<<i<<"] = "<<arr[i]<<endl;
    }
}
void exChange(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

