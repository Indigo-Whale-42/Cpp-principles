
#include "sort.h"
#include "sort_common.h"

void SelectionSort(int *a, int n) {
    int i, j, min;

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = min + 1; j < n; j++) {
            if (a[j] < a[min])
                min = j;
        }
        Swap(&a[i], &a[min]);
    }
}

