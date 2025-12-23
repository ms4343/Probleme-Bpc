#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binarySearch(int v[], int x, int l, int r) {
	int mid = l + (r - l) / 2;
	if (l <= r) {
		if (v[mid] == x) {
			return mid;
		}

		if (v[mid] > x) {
			return binarySearch(v, x, l, r - 1);
		}

		return binarySearch(v, x, mid + 1, r);
	}

	return -1;
}

int main0() {
	int v[10];
	int n, x;
	printf("n: ");
	scanf("%d", &n); 
	printf("x: ");
	scanf("%d", &x);	
	for (int i = 0; i < n; i++) {
		printf("v[%d] = ", i);
		scanf("%d", &v[i]);
	}

	int l = 0;
	int r = n - 1;
	printf("%d", binarySearch(v, x, l, r));
}


// long sumaElemVec(int v[], int n) {
// 	if (n == 1) {
// 		return v[0];
// 	}
// 	else {
// 		return v[n - 1] + sumaElemVec(v, n - 1);
// 	}
// }

// long combinari(unsigned n, unsigned k) {
// 	if (k == 0 || n == k) {
// 		return 1;
// 	}
// 	else {
// 		return combinari(n - 1, k) + combinari(n - 1, k - 1);
// 	}
// }
