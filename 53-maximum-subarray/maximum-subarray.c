int maxSubArray(int* a, int n) {
    int cur = a[0];
    int max = a[0];

    for (int i = 1; i < n; i++) {
        if (cur < 0)
            cur = a[i];
        else
            cur += a[i];

        if (cur > max)
            max = cur;
    }

    return max;
}