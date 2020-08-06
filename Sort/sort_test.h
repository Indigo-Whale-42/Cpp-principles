//
// Created by Екатерина on 06.08.2020.
//

#ifndef CPP_PRINCIPLES_SORT_TEST_H
#define CPP_PRINCIPLES_SORT_TEST_H

typedef struct {
    void (*function_p)(int *a, int n);
    char *name;
} Function;


void PrintArray(int *a, int n);
void TestAllSorts(void);

#endif //CPP_PRINCIPLES_SORT_TEST_H
