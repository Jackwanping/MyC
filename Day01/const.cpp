/* ************************************************************************
> File Name:     const.cpp
> Author:        程序员Phil
> 微信公众号:    程序员Phil
> Created Time:  Fri 24 Dec 2021 07:24:50 PM CST
> Description:   
 ************************************************************************/

#include<iostream>
using namespace std;

//const的使用
//1、const对象默认为文件局部变量，在源文件要声明为extern int a；
//2、定义常量，定义就要初始化
//3、指针和const：3.1指向常量的指针。const int *ptr = 10;        10不能变，即不能通过ptr改变数值，允许把非const对象地址赋值给const对象指针
//                3.2常指针。        int * const ptr = &num;     ptr不能变
//                3.3指向常量的常指针 const int * const ptr = &p;

int main()
{
    const int *
}
