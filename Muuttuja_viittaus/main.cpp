#include <stdio.h>

struct Tietue {
	int luku;
};

void eiMuutaLuku(int a);
void muutaLuku(int *a);

int main() {
	Tietue tietue;

	tietue.luku = 5;

	printf("Luku on %d\n", tietue.luku);
	eiMuutaLuku(tietue.luku);
	printf("Luku on %d\n", tietue.luku);
	muutaLuku(&tietue.luku);
	printf("Luku on %d\n", tietue.luku);
	return 0;
}

void eiMuutaLuku(int a) {
	a = 2;
}

void muutaLuku(int *a) {
	*a = 2;
}