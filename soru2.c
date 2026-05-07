#include <stdio.h>

void ozelSirala(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int sonuc[n];
    int bas = 0;
    int son = n - 1;

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sonuc[i] = arr[bas++];
        } else {
            sonuc[i] = arr[son--];
        }
    }

    for (i = 0; i < n; i++) {
        arr[i] = sonuc[i];
        printf("%d ", arr[i]);
    }
}

int main() {
    int dizi[] = {50, 90, 4, 7, 53, 17};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    ozelSirala(dizi, n);
    return 0;
}
