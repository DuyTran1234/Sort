#ifndef _SORT_H
#define _SORT_H

void importArray(int arr[], int &n);
void exportArray(int arr[], int n);
void exChange(int *a, int *b);
void selectionSort(int arr[], int n);
void bubbleSort(int arr[], int n);
void insertionSort(int arr[], int n);
void mergeSort(int arr[], int low, int high);
void nMerge(int arr[], int low, int mid, int high);
void quickSort(int arr[], int low, int high);
int nPartition(int arr[], int low, int high);

#endif
