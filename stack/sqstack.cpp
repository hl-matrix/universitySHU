#include<iostream>
using namespace std;
#define MAXSIZE 10
//stack的线性存储
struct sqstack{
    int data[MAXSIZE];
    int top = -1;//用于指栈顶元素
};
//压栈
bool push(sqstack * s,int val){
    if(s->top == MAXSIZE-1)
    return false;
    s->data[++s->top]  = val;
    return true;
}
//出栈
bool pop(sqstack * s,int * val){
    if(s->top == -1)
    return false;
    *val = s->data[s->top--];
    return true;
}
//打印栈
void pri(sqstack * s){
    if(s->top == -1)
    return;
    for(int i = 0;i <= s->top;i++){
        cout << s->data[i] << " ";
    }
    cout << endl;
}
int main()
{
    sqstack * s = new sqstack();
    push(s,1);
    push(s,2);
    pri(s);
    return 0;
}