#include <stdio.h>
#include <stdlib.h>

int main() {
	char *sana = "peruna";
	char *sana2 = "asdfgh";
	printf("%d\n%d\n%d\n%c\n\n", &sana[4], &sana[5], &sana[6], sana[8]);
	printf("%d\n%d\n%d\n", &sana2[4], &sana2[5], &sana2[6]);

	system("pause");
	return 0;
}