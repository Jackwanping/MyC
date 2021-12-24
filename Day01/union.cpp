/* ************************************************************************
> File Name:     union.cpp
> Author:        程序员Phil
> 微信公众号:    程序员Phil
> Created Time:  Fri 24 Dec 2021 01:26:10 PM CST
> Description:   
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
// 共同体只申请一块空间，下面是申请一个struct的三个int，当给k赋值时，k的值会覆盖x的值
union myun
{
    struct {
        int x;int y;int z;
    }u;
    int k;
}a;


//测试1：当申请一个内存大的类型double和一个小的int，查看共同体的大小
union test1
{
    int m;
    int n;
    double t;
    int w;
}t1;


//应用1：共同体可以用来判断电脑CPU是大端还是小端
void byteorder()
{
    union{
        short value;
        char union_bytes[sizeof(short)];
    }test;
    test.value = 0x0102;
    if(test.union_bytes[0]==1 && test.union_bytes[1]==2)
    {
        cout<<"大端"<<endl;
    }
    else if(test.union_bytes[0]==2 && test.union_bytes[1]==1)
    {
        cout<<"小端"<<endl;
    }
    else{
        cout<<"error"<<endl;
    }
}
int main()
{
    //union of myun for test cover of union
    a.u.x = 4;
    a.u.y = 5;
    a.u.z = 6;
    a.k = 0;
    cout<<"my union size is"<<sizeof(myun)<<endl;
    cout<<"a.u.x: "<<a.u.x<<endl;
    cout<<"a.u.y: "<<a.u.y<<endl;
    cout<<"a.u.z: "<<a.u.z<<endl;
    cout<<"a.k: "<<a.k<<endl;
    // union of test1
    cout<<"union of test1 size is:"<<sizeof(test1)<<endl;
    cout<<"size of double is"<<sizeof(double)<<endl;
    t1.t = 2.0;
    //t1.m = 2;
    //t1.n = 3;
    //t1.w = 44444444;
    cout<<"t1.t:"<<t1.t<<endl;
    cout<<"t1.m:"<<t1.m<<endl;
    cout<<"t1.n:"<<t1.n<<endl;
    cout<<"t1.w:"<<t1.w<<endl;
    cout<<"t1.t address"<<&t1.t<<endl;
    cout<<"t1.m address"<<&t1.m<<endl;
    cout<<"t1.n address"<<&t1.n<<endl;
    byteorder();
    return 0;
}






