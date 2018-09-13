/*************************************************************************
	> File Name: newton_sqrt.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年09月13日 星期四 21时24分46秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define EPS 1e-7

double f1 (double x, double n) {
    return x * x - n;
}

double f1_prime(double x) {
    return 2 * x;
}

double newton_sqrt(double n, double (*f)(double, double), double(*f_prime)(double)) {
    double x = 1.0;
    while (fabs(f(x, n)) > EPS)  {
        x -= f(x, n) / f_prime(x);
    }
    return x;
}
int main () {
    double x; 
    while (scanf ("%lf", &x) != EOF) {
        printf ("%lf\n", newton_sqrt(x, f1, f1_prime));
    }


    return 0;
}
