/* c1-3.c  输入两个整数，求它们的平均值 */
#include <stdio.h>
int main() {
	int a, b, aver;
	printf("Please input a b\n");
	scanf("%d %d", &a, &b);
	aver = ( a + b) / 2;
	printf("aver=%d\n", aver);
	return 0;
}
