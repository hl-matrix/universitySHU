//栈的链式存储结构
#include<iostream>
using namespace std;
struct stacknode{
    int val;
    stacknode * next;
    stacknode(int x):val(x),next(nullptr){};
};
struct linkstack{
    stacknode * top;
    int count = 0;
};
//进栈
void push(linkstack* s,int val){
    stacknode * newnode = new stacknode(val);
    newnode->next = s->top;
    s->top = newnode;
    s->count++;
}
//出栈
void pop(linkstack *s){
    if(s->top->next == nullptr){
        return;
    }
    stacknode * cur = s->top;
    s->top = s->top->next;
    delete cur;
    s->count--;
}
//打印栈
void pri(linkstack * s){
    if(s->top->next == nullptr)
    return;
    stacknode * cur = s->top;
    while(cur!= nullptr){
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << endl;
}
int main()
{
    linkstack * s = new linkstack();
    push(s,1);
    push(s,2);
    push(s,3);
    pri(s);
    pop(s);
    pri(s);
    return 0;
}