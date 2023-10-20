#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int d){
            data = d;
            next = NULL;
        }
};

class Stack{
    Node* head;
    int capacity;
    int currSize;
    public:
        Stack(int c){
            capacity = c;
            currSize = 0;
            head = NULL;
        }
        bool isFull(){
            return (currSize==capacity);
        }
        bool isEmpty(){
            return (head==NULL);
        }
        void push(int data){
            if(currSize==capacity){
                cout<<"Overflow"<<endl;
                return;
            }
            Node* new_node = new Node(data);
            new_node->next = head;
            head = new_node;
            currSize++;
        }
        int pop(){
            if(head==NULL){
                cout<<"Underflow"<<endl;
                
            }
            Node* new_node = head->next;
            head->next = NULL;
            Node* tobeRemoved = head;
            int result = tobeRemoved->data;
            delete tobeRemoved;
            head = new_node;
            return result;
        }
        int size(){
            return currSize;
        }
        int getTop(){
            if(head==NULL){
                cout<<"Underflow"<<endl;
                
            }
            return head->data;
        }
};

int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.getTop()<<endl;
    s.push(4);
    s.push(5);
    cout<<s.getTop()<<endl;
    s.push(6);
    s.pop();
    s.pop();
    cout<<s.getTop()<<endl;
    return 0;
}