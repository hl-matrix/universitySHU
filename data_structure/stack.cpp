/*
若以1，2，3，4作为双端队列的输入序列，试分别求出以下条件的序列。
(1)能由输入受限的双端队列得到，但不能由输出受限的双端队列得到的输出序列。
(2)能由输出受限的双端队列得到，但不能由输入受限的双端队列得到的输出序列。
*/
#include<iostream>
using namespace std;
#define MAXSIZE 10
struct Que{
    int data[MAXSIZE];
    int front = 0,rear = 0;
};
//输入受限
bool InResin(Que &q,int val){
    if((q.rear+1)%MAXSIZE == q.front) 
    return false;
    q.data[q.rear] = val;
    q.rear = (q.rear+1)%MAXSIZE;
    return true;
}
bool InResout(Que &q,int val,bool frontout){
    if(q.rear == q.front) 
    return false;
    if(frontout){
        val = q.data[q.front];
        q.front = (q.front+1)%MAXSIZE;
    }else{
        q.rear = (q.rear -1 + MAXSIZE) % MAXSIZE;
        val = q.data[q.rear];
    }
    return true;
}
//输出受限
bool OutResin(Que &q,int val,bool frontin){
    if((q.rear + 1)%MAXSIZE == q.front)
    return false;
    if(frontin){
        q.front = (q.front - 1 + MAXSIZE) % MAXSIZE;
        q.data[q.front] = val;
    }else{
        q.data[q.rear] = val;
        q.rear = (q.rear + 1)%MAXSIZE;
    }
    return true;
}
bool OutResout(Que &q,int val){
    if(q.rear == q.front)
    return false;
    val = q.data[q.front];
    q.front = (q.front + 1) % MAXSIZE;
}
int main()
{
    
    return 0;
}