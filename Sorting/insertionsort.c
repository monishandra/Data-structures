#include <stdio.h>
int main() {
    int arr[] = { 5,4,25,1,3,12,11 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    for (i = 0; i < n; i++) {
        int temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");
}