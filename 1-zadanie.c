#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "russian");
	int y;
	float x, z;
	printf("������� �������������� �����: ");
	scanf_s("%f", &x);
	y = (int)x;
	z = x - y;
	printf("����� ����� : %d\n ������� �����: %.2f", y, z);
	return 0;
}