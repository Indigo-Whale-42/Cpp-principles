
#include "sort.h"
#include "sort_common.h"

void ShellSort(int *a, int n) {
    int i, j, x, d;

    d = n / 2;

    while (d) {
        for (i = d; i < n; i += d) {
            x = a[i];
            for (j = i - d; j >= 0 && a[j] > x; j -= d)
                a[j + d] = a[j];
            a[j + d] = x;
        }
        d /= 2;
    }
}

