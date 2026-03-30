#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
//展示交换过程
void reverse_string(vector<char>& s){
    for(int i = 0,j = s.size()-1;i < s.size()/2;i++,j--)
    swap(s[i],s[j]);
}
int main()
{
    vector<char> s = {'a','b','c','d','e'};
    reverse_string(s);
    for(int i = 0;i < s.size();i++){
        cout << s[i] << " ";
    }
    cout << endl;
    //直接交换 --> 库 要包含#include<algorithm>
    reverse(s.begin(),s.end());
    for(char val:s)
    cout << val << " ";
    cout << endl;
    return 0;
}