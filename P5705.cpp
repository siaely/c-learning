#include <stdio.h>

int main () {
	float a;
	scanf("%f", &a);
	int b = a * 10;
	int c = (b % 10) * 1000 + (b / 10) % 10 * 100 + (b / 100) % 10 * 10 + (b / 1000);
	double d = c / 1000.0;
	printf("%.3lf\n", d);
	return 0;
}
