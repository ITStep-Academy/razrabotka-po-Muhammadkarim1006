#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "russian");
	int hours, minute, second, x;
	printf("������� ���������� ������: ");
	scanf_s("%d", &x);
	hours = (x - day * 86400) / 3600;
	minute = x - (day * 86400 + hours * 3600);
	minute /= 60;
	second = x - (day * 86400 + hours * 3600 + minute * 60);
	printf("����: %d �����: %d �����: %d ������: %d", day, hours, minute, second);
	return 0;
}
