#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "russian");
	int y;
	float x, z;
	printf("Введите действительное число: ");
	scanf_s("%f", &x);
	y = (int)x;
	z = x - y;
	printf("Целая часть : %d\n Дробная часть: %.2f", y, z);
	return 0;
}