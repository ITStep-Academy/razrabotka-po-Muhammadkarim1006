#include <stdio.h>

int main() {
	int x, y, a, b;
	printf("Vvedite chislo x: ");
	scanf_s("%d", &x);
	printf("Vvedite chislo y: ");
	scanf_s("%d", &y);
	printf("Menyaem mestami\n");
	a = x;
	b = y;
	x = b;
	y = a;
	printf("x=%d y=%d", b, a);
	return 0;
}