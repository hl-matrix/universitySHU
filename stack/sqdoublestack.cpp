//同类型的栈公用空间
#include<iostream>
using namespace std;
#define MAXSIZE 20
struct sqstack{
    int data[MAXSIZE];
    int top1 = -1;//初始为-1
    int top2 = MAXSIZE;//初始为MAXSIZE
};
//入栈 规定stacknumber为1 -> top1; 0 -> top2
bool push(sqstack * s,int val,int stacknumber){
    if(s->top1 + 1 == s->top2)
    return false;
    if(stacknumber){
        s->data[++s->top1] = val;
    }else{
        s->data[--s->top2] = val;
    }
    return true;
}
//出栈
bool pop(sqstack *s,int& val,int stacknumber){
    if(stacknumber){
        if(s->top1 ==  -1)
        return false;
        val = s->data[s->top1--];
    }else{
        if(s->top2 == MAXSIZE)
        return false;
        val = s->data[s->top2++];
    }
    return true;
}
void pri(sqstack * s){
    if(s->top1 == -1 && s->top2 == MAXSIZE)
    return;
    for(int i = 0;i<=s->top1;i++){
        cout << s->data[i] << " ";
    }
    for(int i = s->top2;i < MAXSIZE;i++){
        cout << s->data[i] << " ";
    }
    cout << endl;
}
int main()
{
    sqstack s;
    push(&s,3,1);
    push(&s,4,1);
    push(&s,5,0);
    pri(&s);
    int a;
    pop(&s,a,1);
    pri(&s);
    cout <<"弹出的值为：" << a << endl;
    return 0;
}