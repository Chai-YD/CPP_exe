#pragma once
#include<iostream>
using namespace std;
class String{
    public:
        //构造函数
        String(const char* str =NULL);
        //拷贝构造函数
        String(const String &other);
        //析构函数
        ~String();
        //赋值函数
        String & operator=(const String& another);
        //字符串连接
        String & operator+=(const String& another);
        //判断相等
        bool operator==(const String& another);
        //获取字符串长度
        int getlength();
        void getstr(){
            cout<<m_data<<endl;
        }
    private:
        //私有变量保存字符串
        char *m_data;
};

