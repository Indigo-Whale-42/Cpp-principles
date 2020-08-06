
#include <stdlib.h>

#include "sort.h"

void Merge(int *A, int left, int middle, int right)
{
    int n = right - left;
    int i, j, k;

    int *B = (int *)malloc(sizeof(int) * n);

    for (i = left, j = middle, k = 0; k < n; k++)
    {
        if (j >= right || i < middle && A[i] < A[j])
            B[k] = A[i++];
        else
            B[k] = A[j++];
    }
    for (k = 0; k < n; k++)
        A[left + k] = B[k];
    free(B);
}

void MergeSorter(int *A, int left, int right)
{
    int middle;
    if (left < right - 1)
    {
        middle = (left + right) / 2;
        MergeSorter(A, left, middle);
        MergeSorter(A, middle, right);
        Merge(A, left, middle, right);
    }
}

void MergeSort(int *a, int n)
{
    MergeSorter(a, 0, n);
}

