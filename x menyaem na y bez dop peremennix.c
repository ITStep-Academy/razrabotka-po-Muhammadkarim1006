#include <stdio.h>
#include <math.h>
int main() {
	int x, y;
	printf("Vvedite chislo X:");
	scanf_s("%d", &x);
	printf("Vvedite chislo Y:");
	scanf_s("%d", &y);
	x = x + y;
	y = x - y;
	x =abs(y - x);
	printf("X=%d Y=%d", x, y);
	return 0;
}