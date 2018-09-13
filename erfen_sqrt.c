/*************************************************************************
	> File Name: erfen_sqrt.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年09月13日 星期四 21时16分31秒
 ************************************************************************/
/***********************二分法代替 -----sqrt()  *********************/
#include<stdio.h>
#include<math.h>
#define EPS 1e-7

double _sqrt(double x) {
    double head = -100, tail = 100, mid;
    while (tail - head > EPS) {
        mid = (head + tail) / 2.0;
        if (mid * mid < x) 
            head = mid;
        else
            tail = mid;
    }

    return head;
}

int main () {
    double x;
    while (scanf ("%lf", &x) != EOF) {
        printf ("%lf\n", _sqrt(x));
    }

    return 0;
}
