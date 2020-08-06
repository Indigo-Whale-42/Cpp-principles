

#include "sort.h"
#include "sort_common.h"

void CombSort(int *a, int n) {
    int i, d;
    Boolean swap_happened = false;

    d = n / 2;

    while (d) {
        do {
            swap_happened = false;
            for (i = 0; i < n - d; i += d) {
                if (a[i] > a[i + d]) {
                    Swap(&a[i], &a[i + d]);
                    swap_happened = true;
                }
            }
        } while (swap_happened);
        d /= 2;
    }

}



