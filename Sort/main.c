
#include "sort.h"
#include "sort_test.h"

int main(void) {
    int a[] = {1,3, 4, -7, -1, 89, 2, 1, 5};
    int n = sizeof(a) / sizeof(int);

    //BubbleSort(a, sizeof(a) / sizeof(int));
   // CocktailSort(a, sizeof(a) / sizeof(int));
    //SelectionSort(a, sizeof(a) / sizeof(int));
    //InsertionSort(a, n);
    //ShellSort(a, n);
    //CombSort(a, n);
    //MergeSort(a, n);
    //PrintArray(a, sizeof(a) / sizeof(int));
    TestAllSorts();
}

