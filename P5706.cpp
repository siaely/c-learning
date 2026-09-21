#include <stdio.h>

int main() {
	float t;
	unsigned int n, y;
	scanf("%f %d", &t, &n);
	float x = t / n;
	y = 2 * n;
	printf("%.3f\n", x);
	printf("%d\n", y);
	return 0;
}
