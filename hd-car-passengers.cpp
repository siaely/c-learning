#include <stdio.h>

int main() {
	int n;
	long long C;
	scanf("%d %lld", &n, &C);
	long long now, stay, maxp;
	now = 0;
	stay = 0;
	maxp = 0;
	for (int i = 1; i <= n; i++) {
		long long a, b;
		scanf("%lld %lld", &a, &b);
		now -= a;
		long long space = C - now;
		if (a > C) {
			now = 0;
		}
		if (b > space) {
			stay += b - space;
			now = C;
		} else {
			now += b;
		}

		if (now > maxp) {
			maxp = now;
		}
	}
	printf("%lld %lld %lld\n", stay, maxp, now);
	return 0;
}
