#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(){
void action1(int,int, int), action2(int, int, int);
	char ch;
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	ch = getchar();
	switch (ch) {
	case'A':action1(a, b, c);break;
	case'B':action2(a, b, c);break;
	}
	return 0;
}
void action1(int x, int y, int z) {
	int max;
	max = x;
	if (y > max)
		max = y;
	if (z > max)
		max = z;
	printf("%d\n", max);
}
void action2(int x, int y, int z) {
	int t;
	if (x > y) { t = x;x = y;y = t; }
	if (y > z) { t = y;y = z;z = t; }
	if (x > z) { t = x;x = z;z = t; }
	printf("%d %d %d\n", x, y, z);
}
