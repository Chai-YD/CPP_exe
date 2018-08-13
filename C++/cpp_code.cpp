//使用clock函数计算时间
#include<iostream>
#include<ctime>

using namespace std;

int main(){
    long n= 0;
    clock_t start,finish;
    start = clock();
    while(n<1000000000)
        n++;
    finish = clock();
    cout<<double(finish-start)/CLOCKS_PER_SEC<<endl;
}
