
#include "sort.h"
#include "sort_common.h"

void CocktailSort(int *a, int n)
{
    int left = 0, right = n - 1, i, last_changed;
    Boolean swap_happened;

    do {
        swap_happened = false;
        for (i = left; i < right; i++) {
            if (a[i] > a[i + 1]) {
                Swap(&a[i], &a[i + 1]);
                swap_happened = true;
                last_changed = i;
            }
        }

        if (swap_happened) {
            swap_happened = false;
            right = last_changed;
            for (i = right; i > left; i--) {
                if (a[i - 1] > a[i]) {
                    Swap(&a[i], &a[i - 1]);
                    swap_happened = true;
                    last_changed = i;
                }
            }
            left = last_changed;
        }
    } while (swap_happened);
}

