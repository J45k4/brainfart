#include <stdio.h>
#include <stdlib.h>


void tulostaAlkiot(int *a, int koko) {
	for (int i = 0; i < koko; i++) {
		printf("%d\n", a[i]);
	}
}

void tulostaAlkiot2(int *a, int koko) {
	for (int i = 0; i < koko; i++) {
		for (int j = 0; j < koko; j++) {
			printf("%d\n", a[i]);
		}
	}
}

int main() {
	int a[10];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			a[i] = 5;
		}
	}

	tulostaAlkiot(a, 10);
	printf("\n\n\n");
	tulostaAlkiot2(a, 10);

	system("pause");
}