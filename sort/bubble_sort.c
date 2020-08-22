
#include "sort_common.h"
#include "sort.h"

void BubbleSort(int *a, int n) {
    int i;
    Boolean swap_happened = false;

    do {
        swap_happened = false;
        for (i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                Swap(&a[i], &a[i + 1]);
                swap_happened = true;
            }
        }
    } while (swap_happened);
}