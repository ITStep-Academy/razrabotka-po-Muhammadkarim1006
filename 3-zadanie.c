#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "russian");
	int hours, minute, second, x;
	printf("Введите количество секунд: ");
	scanf_s("%d", &x);
	hours = (x - day * 86400) / 3600;
	minute = x - (day * 86400 + hours * 3600);
	minute /= 60;
	second = x - (day * 86400 + hours * 3600 + minute * 60);
	printf("Дней: %d Часов: %d Минут: %d Секунд: %d", day, hours, minute, second);
	return 0;
}
