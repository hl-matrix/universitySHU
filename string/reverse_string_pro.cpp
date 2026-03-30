#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
实现：
对字符串，每2k组，前k个翻转，后k个不变，结尾不足k个仍翻转，若超出不变
*/
//问题1：如何使用reverse函数，在什么条件下使用，如何使用，还是手动实现
//解决1：必须包含#include<algorithm>
//问题2：选择何种对象，字符串（c++类型，c类型），向量（vector）
//解决2：vector更灵活，刚学习，多使用
int main()
{
    vector<char> s = {'a','b','c','d','e','f','g','h'};
    int k = 3;
    for(int i = 0;i < s.size();i += 2*k){
        if(i+k <= s.size()){
            reverse(s.begin()+i,s.begin()+i+k);
            //注意continue，区别于break,continue跳过接下来的步骤，执行下一循环，break直接跳出循环
            continue;
        }
        reverse(s.begin()+i,s.end());
    }
    for(char val:s)
    cout << val << " ";
    cout << endl;
    return 0;
}