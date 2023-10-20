#include "iostream"
using namespace std;

class Stack{
    int max,top=-1;
    int st[];
    public:
        Stack(){
            cout<<"Enter Maximum Number of Elements = ";
            cin>>max;
            st[max];
        }
        void push(int val){
            if(top==max-1){
                cout<<"Overflow"<<endl;
                return;
            }else{
                top++;
                st[top] = val;
            }
        }
        int pop(){
            int val;
            if(top==-1){
                cout<<"Underflow"<<endl;
                return -1;
            }else{
                val = st[top];
                top--;
                return val;
            }
        }
        int peek(){
            if(top==-1){
                cout<<"Underflow"<<endl;
                return -1;
            }else{
                return st[top];
            }
        }
        int size(){
            return (top+1);
        }
        void display(){
            int i;
            if(top == -1)
                cout<<"STACK IS EMPTY"<<endl;
            else{
                for(i=top;i>=0;i--){
                    cout<<st[i]<<"  ";
            }cout<<endl;
        }
        }
};

int main(){
    Stack s;
    int val, option;
    do
    {
        cout<<"\n *****MAIN MENU*****\n 1. PUSH\n 2. POP\n 3. PEEK\n 4. DISPLAY\n 5. EXIT\n Enter your option: ";
        cin>>option;
        switch(option)
        {
        case 1:
            cout<<"Enter value to be pushed on stack = ";
            cin>>val;
            s.push(val);
            break;
        case 2:
            val = s.pop();
            if(val != -1)
                cout<<"\n The value deleted from stack is: "<<val<<endl;
            break;
        case 3:
            val = s.peek();
            if(val != -1)
                cout<<"\n The value stored at top of stack is: "<<val<<endl;
            break;
        case 4:
            s.display();
            break;
    }
    }while(option != 5);
    return 0;
}