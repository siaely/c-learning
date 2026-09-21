#include <stdio.h>

int main() {
	float a, b, c, p, X, S;
	scanf("%f %f %f", &a, &b, &c);
	p = (a + b + c) / 2;
	X = p * (p - a) * (p - b) * (p - c);
	S *= X;
	printf("%.1f", S);
	return 0;
}
