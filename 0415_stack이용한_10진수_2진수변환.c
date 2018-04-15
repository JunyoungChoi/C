#include<stdio.h>
void dtb(int num);

int main() {
	int num;
	scanf("%d", &num);
	dtb(num);
	return 0;
}

void dtb(int num) {
	if (num <= 1) {
		printf("%d", num);
		return;
	}
	else {
		dtb(num / 2);
		printf("%d", num % 2);
	}
}