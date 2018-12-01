/*************************************************************************
> File Name: max_de.c
> Author: gaoyu
> Mail: 
> Created Time: 2018年09月23日 星期日 12时57分29秒
************************************************************************/

#include<stdio.h>
#include <ctype.h>
#define P(func) { \
    printf("%s = %d\n", #func, (func)); \
}

//#define MAX(a, b) ((a) > (b) ? (a) : (b)) 
//#define MAX(a, b) a > b ? a : b 


// ({...})  GUN c的赋值扩展， 返回最后一个表达式的值

#define MAX(a, b) ({\
    __typeof__(a) __A = (a);\
    __typeof__(b) __B = (b);\
    __A > __B ? __A : __B;\
})

int main() {
    P(MAX(2, 3));
    P(5 + MAX(2, 3))
    P(MAX(2, MAX(3, 4)));
    P(MAX(2, 3 > 4 ? 3 : 4));
    int a = 7;
    P(MAX(a++, 6));
    printf("a = %d\n", a);
    return 0;

}
