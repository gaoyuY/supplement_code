/*************************************************************************
> File Name: Function_parameter.cpp
> Author:gaoyu
> Mail:2282940822 
> Created Time: 2018年09月14日 星期五 12时11分44秒
************************************************************************/

#include<iostream>
using namespace std;
double add(double, double);  
double add2(double x, double y);  

double calculate(double x1, double y1, double(**f)(double, double))  //函数调用里面传递 函数指针数组 的方法  
{  
    cout << "add:" << (*f[0])(x1, y1) << endl;  
    cout << "add2:" << (*f[1])(x1, y1) << endl;  
    return  1;  
}  

int main()  
{  
    int x, y;  
    double (*pf[2])(double,double) = { add, add2  };   
    x = 2; y = 1;  
    calculate(x, y, pf);  

    return 0;  
}  



double add(double x, double y)  
{  
    return x + y;  
}  

double add2(double x, double y)  
{  
    return x - y;  
}  

