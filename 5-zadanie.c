#include <stdio.h>

int main() {
	int x, y;
	printf("Vvedite chislo x: ");
	scanf_s("%d", &x);
	printf("Vvedite chislo y: ");
	scanf_s("%d", &y);
	printf("Menyaem mestami\n");
	printf("x=%d y=%d", y, x);
	return 0;
}