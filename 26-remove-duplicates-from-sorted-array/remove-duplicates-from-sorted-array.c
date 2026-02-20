int removeDuplicates(int* a, int n) {
    if (n == 0) return 0;

    int j = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] != a[j]) {
            j++;
            a[j] = a[i];
        }
    }

    return j + 1;
}