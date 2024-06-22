#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int a, b, sum = 0,i;
	scanf("%d %d", &a, &b);

	if (a % 2 == 1) {
		sum += a;
		printf("%d", a);
	}
	else {
		sum -= a;
		printf("-%d", a);
	}

	for (i = a + 1; i <= b; i++) {
		if (i % 2 == 1) {
			sum += i;
			printf("+%d", i);
		}
		else {
			sum -= i;
			printf("-%d", i);
		}
	}

	printf("=%d", sum);
	return 0; // 1281 È¦¼ö´Â ´õÇÏ°í Â¦¼ö´Â »©°í 3
}