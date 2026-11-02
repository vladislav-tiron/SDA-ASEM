#include <stdio.h>

int partition(int a[], int lo, int hi) {
    int pivot = a[lo], b = lo;

    for (int i = lo + 1; i < hi; i++) {
        if (a[i] < pivot) {
            b++;
            int t = a[i];
            a[i] = a[b];
            a[b] = t;
        }
    }

    a[lo] = a[b];
    a[b] = pivot;
    return b;
}

void quickSort(int a[], int lo, int hi) {
    if (hi - lo <= 1) return;

    int p = partition(a, lo, hi);
    quickSort(a, lo, p);
    quickSort(a, p + 1, hi);
}

int main() {
    int a[] = {6, 2, 5, 2, 1};
    int n = 5;

    quickSort(a, 0, n);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
