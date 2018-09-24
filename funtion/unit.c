/*************************************************************************
	> File Name: is_prime.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年09月20日 星期四 19时52分25秒
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>
#include<inttypes.h>

int is_prime(int x) {
    for (int  i =2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}


int max_int (int n, ...) {
    int ans = INT32_MIN, temp;
    va_list arg;
    va_start(arg, n);
    while (n--) {
        temp = va_arg(arg, int);
        ans = temp > ans ? temp : ans;
    }

    va_end(arg);
    return ans;
}
