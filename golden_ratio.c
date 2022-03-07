#include<stdio.h>
#include<math.h>

#define eps 0.0001


double golden_ratio(double a, double b, double(*f)(double x))//Gubenko Olesya 112
{
	double phi, x1, x2, y1, y2;
	phi=1+(1+sqrt(5))/2;
	x1=b-(b-a)/phi;
	x2=a+(b-a)/phi;
	y1=f(x1);
	y2=f(x2);
	while(fabs(b-a)>eps){
		if(y1>y2){
			b=x1;
			x1=x2;
			y1=y2;
			x2=a+(b-a)/phi;
			y2=f(x2);
		}
		else{
			a=x2;
			x2=x1;
			y2=y1;
			x1=b-(b-a)/phi;
			y1=f(x1);
		}
	}
	return f((a+b)/2);
}

