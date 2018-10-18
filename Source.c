#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = -1, k = -1;
	scanf("%d%d", &n, &k);
	int *arr = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	{
		//min
		size_t iter_min = 0, iter_max = n - 1;
		while (iter_min < iter_max) {
			int mid = (iter_min + iter_max) / 2;
				if (arr[mid] < k) iter_min = mid + 1;
				else iter_max = mid;
		}
		printf("%d ", (arr[iter_min]==k)?iter_min:-1 );
	}
	{
		//max
		size_t iter_min = 0, iter_max = n - 1;
		while (iter_min < iter_max) {
			int mid = (iter_min + iter_max + 1) / 2;
				if (arr[mid] > k) iter_max = mid - 1;
				else iter_min = mid;
		}
		printf("%d\n", (arr[iter_min] == k) ? iter_min : -1);
	}
	free(arr);
	return 0;
}