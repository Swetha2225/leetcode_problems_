#include <stdbool.h>
#include <stdlib.h>

int cmp(const void* x, const void* y) {
    return (*(int*)x - *(int*)y);
}

bool containsDuplicate(int* a, int n) {
    if (n <= 1) return false;

    qsort(a, n, sizeof(int), cmp);

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1])
            return true;
    }

    return false;
}