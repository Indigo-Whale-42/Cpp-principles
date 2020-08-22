
#include <stdio.h>
#include <stdlib.h>

#include "sort_test.h"
#include "sort_common.h"
#include "sort.h"
#include <time.h>
#include <math.h>
#include <limits.h>

void PrintArray(int *a, int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%i ", a[i]);
}

void FillRand(int *a, int n) {
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() % (5 * n);
}

void FillIncr(int *a, int n) {
    int i;
    for (i = 0; i < n; i++)
        a[i] = i;
}

void FillDecr(int *a, int n) {
    int i;
    for (i = 0; i < n; i++)
        a[i] =n - i - 1;
}

void FillAlmostSorted(int *a, int n) {
    int mixed = (int)ceil((double)n / 10); // num of mixed elements (10% of array not sorted)
    FillIncr(a, n);
    while (mixed){
        a[rand() % n] = a[rand() % n];
        mixed -= 2;
    }
}

Boolean IsSorted(int *a, int n) {
    int i;
    for (i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}

void TestAllSorts(void) {
    int *a;
    int max = 10000;
    int i, j;
    time_t t;

    Function sort_functions[] = {
            { BubbleSort, "Bubble" },
            { SelectionSort, "Selection" },
            { InsertionSort, "Insertion" },
            { CocktailSort, "Cocktail" },
            { CombSort, "Comb" },
            { ShellSort, "Shell" },
            { MergeSort, "Merge" }
    };

    Function fill_functions[] = {
            { FillRand, "Random" },
            { FillIncr, "Incremental" },
            { FillAlmostSorted, "Almost Sorted" },
            { FillDecr, "Decremental" }
    };

    a = (int *)malloc(sizeof(int) * max);
    if (a == NULL) {
        printf("not enough memory for array\n");
        return;
    }
    printf("\nStart (sort %i elements)\n", max);

    srand(time(0));

    printf("fill:                ");
    for (i = 0; i < sizeof(fill_functions) / sizeof(fill_functions[0]); i++) {
        printf("%20s ", fill_functions[i].name);
    }
    printf("\n");

    for (j = 0; j < sizeof(sort_functions) / sizeof(sort_functions[0]); j++) {
        printf("sort: %14s ", sort_functions[j].name);
        for (i = 0; i < sizeof(fill_functions) / sizeof(fill_functions[0]); i++) {
            fill_functions[i].function_p(a, max);
            t = clock();
            sort_functions[j].function_p(a, max);
            t = clock() - t;
            if (IsSorted(a, max))
                printf("%20f ", t / (double)CLOCKS_PER_SEC);
            else
                printf("               error ");
        }
        printf("\n");
    }
}

