#include<stdio.h>

int main() {
	int num, a, b[100000], i = 0;
	scanf_s("%d", &num);
	if (num > 9) {
		while (num > 9) {
			i = 0;
			while (num > 9) {
				b[i] = num % 10;
				num = num - (num % 10);
				num = num / 10;
				i++;
				if (num <= 9) {
					b[i] = num;
				}
			}
			num = 0;
			for (int j = 0; j <= i; j++) {
				num = num + b[j];
			}
			if (num >= 10) {
				printf("%d\n", num);
			}
		}
		printf("%d", num);
	}
	return 0;
}