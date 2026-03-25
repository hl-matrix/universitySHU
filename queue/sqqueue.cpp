//队列的顺序存储结构
//队头删除front->队头元素,队尾入队rear->队尾元素下一个
//应该为循环队列,解决假溢出的问题，为了充分利用空间
#include<iostream>
using namespace std;
#define MAXSIZE 10
struct sqqueue{
    int data[MAXSIZE];
    int front;
    int rear;
    sqqueue():front(0),rear(0){};
};
void push(sqqueue * s,int val){
    //判断队列是否已满
    if((s->rear+1)%MAXSIZE == s->front)
    return;
    s->data[s->rear] = val;
    s->rear = (s->rear+1)%MAXSIZE;
}
void pop(sqqueue * s,int& val){
    if(s->front == s->rear)
    return;
    val = s->data[s->front];
    s->front = (s->front + 1)% MAXSIZE;
}
//球队列长度
int length(sqqueue * s){
    return (s->rear - s->front + MAXSIZE)%MAXSIZE;
}
int main()
{
    sqqueue * s = new sqqueue();
    push(s,1);
    push(s,2);
    cout << "长度为：" << length(s) << endl;
    return 0;
}