#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define m(v) sizeof(v) / sizeof(v[0])


int main() {
	int v[] = { 3, 4, 1, 7, 5, 8, 9, 2, 6, 10 };
	for (int i = 0; i < m(v); i++) {
		int min = v[i];
		int ind = i;
		for (int j = i + 1; j < m(v); j++) {
			if (v[j] < min) {
				min = v[j];
				ind = j;
			}
		}
		if (ind == i) {
			continue;
		}
		else {
			int aux = v[ind];
			v[ind] = v[i];
			v[i] = aux;
		}
	}

	for (int i = 0; i < m(v); i++) {
		printf("%d ", v[i]);
	}
}