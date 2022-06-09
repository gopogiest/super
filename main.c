#include "std.h"
//это обучающая программа

int main()
{
	int a;
	int b;
	int sum;
	int diff;
	printf("\nvvedite a:");
	scanf("%d",&a);
	printf("\nvvedite b:");
	scanf("%d",&b);
	sum= a+b;
	diff=a-b;
	printf("\nSUM(a+b) = %d",sum);
	printf("\nDifference(a-b)=%d",diff);
	printf("\nDelenie= %d",a/b);
}