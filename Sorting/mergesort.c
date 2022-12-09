#include <stdio.h>
void merge(int arr[], int lb, int mid, int ub) {
	int i = lb, j = mid + 1, k = lb;
	int brr[ub + 1];
	while (i <= mid && j <= ub) {
		if (arr[i] <= arr[j]) {
			brr[k] = arr[i];
			i++;
			k++;
		}
		else {
			brr[k] = arr[j];
			j++;
			k++;
		}
	}
	if (i > mid) {
		while (j <= ub) {
			brr[k] = arr[j];
			j++;
			k++;
		}
	}
	else {
		while (i <= mid) {
			brr[k] = arr[i];
			i++;
			k++;
		}
	}
	for (int i = lb; i <= ub; i++) {
		arr[i] = brr[i];
	}
}
void mergesort(int arr[], int lb, int ub) {

	if (lb < ub) {
		int mid = (lb + ub) / 2;
		mergesort(arr, lb, mid);
		mergesort(arr, mid + 1, ub);
		merge(arr, lb, mid, ub);
	}
}
int main() {
	int arr[] = { 38,27,43,3,9,82,10,15 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int lb = 0;
	int ub = n - 1;
	mergesort(arr, lb, ub);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}