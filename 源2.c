#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int a,b,c,d,e,f,t,m;
	int n = 0;
	scanf_s("%d", &a);
	b = a / 10000;
	c = a / 1000 % 10;
	d = a / 100 % 10;
	e = a / 10 % 10;
	f = a % 10;
	printf("%d %d %d %d %d\n", b, c, d, e, f);
	if (a / 10000 > 0) n = 5;
	else if (a / 1000 > 0) n = 4;
	else if (a / 100 > 0) n = 3;
	else if (a / 10 > 0) n = 2;
	else n = 1;
	printf("该数为%d位数\n", n);
	t = pow(10,n - 1);
	m = f * t + e * t / 10 + d * t / 100 + c * t / 1000 + b * t / 10000;
	printf("倒序%d", m);
	return 0;
}