int* twoSum(int* a, int n, int t, int* rs) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == t) {
                int* r = malloc(2 * sizeof(int));
                r[0] = i;
                r[1] = j;
                *rs = 2;
                return r;
            }
        }
    }
    return NULL;
}