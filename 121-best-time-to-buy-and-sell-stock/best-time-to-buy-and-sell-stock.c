int maxProfit(int* a, int n) {
    if (n == 0) return 0;

    int min = a[0];
    int max = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
        else if (a[i] - min > max)
            max = a[i] - min;
    }

    return max;
}