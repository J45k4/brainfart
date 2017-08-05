#include <stdio.h>
#include <string.h>

int main() {
	char sana1[25];
	char sana2[25];

	fgets(sana1, 25, stdin);



	if (strncmp(sana1, "makkara", 8) == 0) {
		printf("On sama\n");
	}

	//if (strncmp(sana1, sana2, 9) == 0) {
	//	printf("On sama2\n");
	//}

	return 0;
}