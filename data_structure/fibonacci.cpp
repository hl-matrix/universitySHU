//输出前四十位斐波那契数列
#include<iostream>
using namespace std;
//使用递归的方式书写
int Fib(int n){
    if(n < 2){
        //使用三目运算符，简化二个选择的判断
        return n == 0 ? 0 : 1;
    }
    return Fib(n-1) + Fib(n-2);
}
int main()
{
    for(int i = 0;i<40;i++){
        cout << Fib(i) << " ";
    }
    return 0;
}