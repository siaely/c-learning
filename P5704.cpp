#include <stdio.h>
int main() {
	char c = getchar();
	c = c - 'a' + 'A';
	putchar(c);
	return 0;
}
