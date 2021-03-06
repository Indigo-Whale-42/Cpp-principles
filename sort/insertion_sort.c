
#include "sort.h"
#include "sort_common.h"

void InsertionSort(int *a, int n) {
    int i, j, x;

    for (i = 1; i < n; i++) {
        x = a[i];
        for (j = i - 1; j >= 0 && a[j] > x; j--)
            a[j + 1] = a[j];
        a[j + 1] = x;
    }
}

