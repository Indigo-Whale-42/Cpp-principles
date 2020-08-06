
#include "sort.h"
#include "sort_test.h"

int main(void) {
    int a[] = {1,3, 4, -7, -1, 89, 2, 1, 5};

    //BubbleSort(a, sizeof(a) / sizeof(int));
    CocktailSort(a, sizeof(a) / sizeof(int));
    PrintArray(a, sizeof(a) / sizeof(int));
}

