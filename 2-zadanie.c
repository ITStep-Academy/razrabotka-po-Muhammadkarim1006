#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "russian");
	int x, y;
	printf("������� ����� �����: ");
	scanf_s("%d", x);
	y = x % 10;
	printf("������ ����� ����� �����: %d", y);
	return 0;
}