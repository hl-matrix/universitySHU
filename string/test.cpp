#include<iostream>
//向量库 类似c风格字符串，区别在于可以自动扩容和缩容
#include<vector>
//c++字符串库 string
#include<string>
//c风格字符串库 char a[]
#include<cstring>
using namespace std;
int main()
{
    //解决中文乱码
    system("chcp 65001");
    //向量
    vector<char> v;
    vector<string> cars = {"xiaomi","Tesla","Ford"};
    for(string car: cars){
        cout << car << " ";
    };
    cout << endl;
    //返回首部元素
    cout <<"首部元素为：" << cars.front() << endl;
    //返回尾部元素
    cout <<"尾部元素为：" << cars.back() << endl;
    //向量长度
    cout <<"长度为：" << cars.size() << endl;
    //插入元素 hel
    cars.push_back("hel");
    cout << "插入元素hel" << endl;
    for(int i = 0;i < cars.size();i++){
        cout << cars[i] << " ";
    }
    cout << endl;
    cout << "删除元素：" ;
    //删除元素 默认删除队尾元素 
    cars.pop_back();
    for(string car : cars){
        cout << car << " ";
    }
    cout << endl;
    cout << "综上所述，插入,删除元素类似于栈的push和pop" <<  endl;
    //c++字符串
    string firstname = "Bill ";
    string lastname = "Gates";
    string fullname = firstname.append(lastname);
    cout << fullname << endl;
    return 0;
}