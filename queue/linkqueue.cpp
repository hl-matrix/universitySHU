#include<iostream>
using namespace std;
class linkqueue{
private:
    struct node{
        int val;
        node * next;
        node(int x):val(x),next(nullptr){};
    };
    node *front,*rear;
public:
    linkqueue(){
        node * dummyhead = new node(-1);
        front = rear = dummyhead;
    }
    ~linkqueue(){
        node * cur = front;
        while(cur != nullptr){
            node * tmp = cur;
            cur = cur->next;
            delete tmp;
        }
    }
    void push(int val){
        node * newnode = new node(val);
        rear->next = newnode;
    }
    void pop(int &val){
        if(rear == front)
        return;
        node * tmp = front->next;
        front->next = front->next->next;
        val = tmp->val;
        delete tmp;
    }
};
int main()
{

    return 0;
}