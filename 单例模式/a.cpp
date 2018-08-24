#include<iostream>
#include<stack>

using namespace std;

class Solution
{
    public:
        void push(int node) {
            while(!stack2.empty()){
                stack1.push(stack2.top());
                stack2.pop();

            }
            stack1.push(node);
        }

        int pop() {
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
            if(!stack2.empty()){
                stack2.pop();
                return 0;
            }
            return -1;
        }
        void print(){
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
            while(!stack2.empty()){
                cout<<stack2.top()<<" ";
                stack2.pop();
            }
            cout<<endl;
        }

    private:
        stack<int> stack1;
        stack<int> stack2;
};
int main(){
    Solution A;
    A.push(1);
    A.push(2);
    A.push(3);
    A.push(4);
    A.pop();
    A.push(5);
    A.push(6);
    A.pop();
    A.push(7);
    A.push(8);
    A.print();
    return 0;
}
