#include "tests.h"
#include <iostream>
void test1()
{
    double array1[4] = {0,1.11,2.22,3.33};
    double sum = SumOddNumbers(array1,3);
    std::cout<<sum<<std::endl;
    assert(sum == 4.44);
}
void test2()
{
    double array[5]={0,-1.12,1.56,2.45,-1.67};
    double sum = SumBetZero(array,4);
    std::cout<<sum;
    assert(sum==4.01);
}
void test3()
{
    double array[5] = {1.12,0,1.56,2.45,0};
    double sum = SumBetZero(array,4);
    assert(sum==0);
}
void test4()
{
    double array[5] = {4,0,0,1.2,3.5};
    int sum = SumBetZero(array,5);
    assert(sum==0);
}
void test5()
{
    double array[5] = {4,0.1,6.8,1.2,3.5};
    double elem = CheckPosition(array,3);
    assert(elem == 1.2);
}
void test6()
{
    double array[5] = {1.7,-1.23,-1.44,0,6};
    double sum = SumOddNumbers(array,4);
    assert(sum == -1.23);
}
void test7()
{
    int siz = getsize(20);
    assert(siz <20 && siz>0);
}
void test8()
{
    char ch = FillingStyle();
    assert(ch == 'c' || ch == 'r');
}
void runtests()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    std::cout<<"Tests passed!";
}



