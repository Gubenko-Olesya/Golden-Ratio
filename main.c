//programma ishet minimalnoe znachenie functsii na zadannom otrezke metodom paraboly
//poisk tochek proizvoditsya metodom zolotogo secheniya
#include<stdio.h>
#include"my_f.h"

#define eps 0.0001

int main()
{
	double a, b, min1, min2;
	printf("Programma ishet minimalnoe znachenie functsii na zadannom otrezke.\n");
	printf("Input ends of the segment.\n");
	if (scanf("%lf%lf", &a, &b)!=2) {
		printf("At least one of the ends is not a number.\n");
		return -1;
	}
	min1 = golden_ratio(a, b, f1);
	min2 = golden_ratio(a, b, f2);
	printf("Minimum of f1: %lf.\nMinimum of f2: %lf.\n", min1, min2);
	return 0;
}
