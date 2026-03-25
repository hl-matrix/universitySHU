#include<iostream>
using namespace std;
struct stacknode{
    int val;
    stacknode * next;
    stacknode(int x):val(x),next(nullptr){};
};
int main()
{
    stacknode * top = nullptr;
    while(true){
        int x;
        cin >> x;
        if(x == 0)
        break;
        stacknode * newnode = new stacknode(x);
        newnode->next = top;
        top = newnode;
    }
    int sum = 0;
    cout << sum << " ";
    while(top != nullptr){
        stacknode * tmp = top;
        top = top->next; 
        sum += tmp->val;
        delete tmp;
        cout << sum << " ";
    }
    return 0;
}