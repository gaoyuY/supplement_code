/*************************************************************************
	> File Name: newton_sqrt-1.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年09月14日 星期五 11时45分53秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define EPS 1e-7

double f1 (double x, double n) {
    return x * x - n;
}

double f1_prime (double x) {
    return 2 * x;
}

double newton_sqrt (double n) {
    double x = 1.0;
    while (fabs(f1(x, n)) > EPS) {
        x -= f1(x, n) /f1_prime(x);
    }

    return x;
}
int main () {
    double x;
    while (scanf ("%lf", &x) != EOF) {
        printf ("%lf\n",newton_sqrt(x));
    }

    return 0;
}
