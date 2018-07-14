//文件名：7_14_1.cpp
//判断闰年

#include<iostream>
using namespace std;

int main(){
    int year;
    bool result;
    cout<<"输入想要验证的 年份： ";
    cin>>year;
    result = ((year % 4 ==0 &&year %100 != 0)|| year %400 == 0);
    if(result)
        cout<<year<<"是闰年"<<endl;
    else{
        cout<<year<<"不是闰年"<<endl;
    }
    return 0;
}


