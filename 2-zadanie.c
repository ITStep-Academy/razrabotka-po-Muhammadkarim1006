#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "russian");
	int x, y;
	printf("Введите целое число: ");
	scanf_s("%d", x);
	y = x % 10;
	printf("Первая цифра этого числа: %d", y);
	return 0;
}