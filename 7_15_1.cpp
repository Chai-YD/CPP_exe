//求数据在存储中占据内存的空间
#include<iostream>
using namespace std;
int main(){
    char* p =NULL;
    cout<<"int"<<sizeof(int)<<endl;
    cout<<"short"<<sizeof(short)<<endl;
    cout<<"char"<<sizeof(char)<<endl;
    cout<<"double"<<sizeof(double)<<endl;
    cout<<"bool"<<sizeof(bool)<<endl;
    cout<<"long"<<sizeof(long)<<endl;
    cout<<"char*"<<sizeof(p)<<endl;
    cout<<"float"<<sizeof(float)<<endl;
    return 0;
}












