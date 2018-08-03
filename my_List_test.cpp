
#include<iostream>
using namespace std;

typedef  int DataType 
//关于结点的结构体的创建
struct ListNode{
    ListNode* _next;
    ListNode* _prev;
    DataType _data;
};

class List{
    typedef ListNode Node;
 public:
    //构造函数
    List():_head->_data(1){
        _head = new Node;
        _head->next = _head;
        _head->prev = _head;
    }
    //成员函数
    //插入函数默认从尾部插入
    void insert(DataType x){
        new_node = new Node;
        _head->prev->next = new_node;
        new_node->prev = _head->prev;
        _head->prev = new_node;
        new_node->next = _head;
    }
    //显示函数
    void print(){
        Node* cur = _head->next;
        while(cur != _head){
            cout<<cur->_data<<" ";
        }
        cout<<endl;
    }
 private:
    Node* _head;
}

void Test(){
    List Li;
    //Li.insert(1);
    //Li.insert(2);
    //Li.insert(3);
    //Li.insert(4);
    //Li.print();
}
int main(){
    Test();
    return 0;
}




