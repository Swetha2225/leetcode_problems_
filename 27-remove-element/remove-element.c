int removeElement(int* a, int n, int val) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != val) {
            a[j] = a[i];
            j++;
        }
    }
   return j;
}