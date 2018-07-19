#include<iostream>
#include<string.h>
using namespace std;

//class String{
//public:
//    //构造函数
//    String(const char* str)
//    :_str(new char[strlen(str)+1])
//    {
//        strcpy(_str,str);
//    }
//    //拷贝构造函数
//    String(const String& s)
//    :_str(new char[strlen(s._str)+1])
//    {
//        strcpy(_str,s._str);
//    }
//    //赋值运算符的拷贝
//    String& operator=(const String& s){
//        if(&s != this){
//            //刚赋值对象与被赋值对象不是同一个时，
//            //才进行赋值操作
//            char* tmp = new char[strlen(s._str)+1];
//            strcpy(tmp,s._str);
//            delete[] _str;
//            _str = tmp;
//        }
//        return *this;
//    }
//    //析垢函数
//    ~String(){
//        delete[] _str;
//        _str = NULL;
//    }
//    char* c_str(){
//        return _str;
//    }
//private:
//    char* _str;
//};//class结束
//void TestString(){
//    String s1("hello");
//    char* str1 = "hello";
//    cout<<sizeof(s1)<<endl;
//    cout<<sizeof(str1)<<endl;
//
//    String s2(s1);
//    cout<<s1.c_str()<<endl;
//    cout<<s2.c_str()<<endl;
//
//    String s3("world!!!!");
//
//    s1 = s3;
//    s1 = s1;
//    cout<<s1.c_str()<<endl;
//    cout<<s3.c_str()<<endl;
//}

//class String{
//public:
//    String(const char* str)
//        :_str(new char[strlen(str)+1])
//    {
//        strcpy(_str,str);
//    }
//    //拷贝构造函数
//    String(const String& s)
//        :_str(NULL)
//    {
//        String tmp(s._str);
//        swap(_str,tmp._str);
//    }
//
//    //赋值运算符重载
//    //String& operator=(const String& s){
//    //    if(this != &s){
//    //        String tmp(s._str);
//    //        swap(this->_str,tmp._str);
//    //    }
//    //    return *this;
//    //}
//    String& operator=(String s){
//        swap(_str,s._str);
//        return *this;
//    }
//
//    //析垢函数
//    ~String(){
//        if(_str){
//            delete[] _str;
//            _str = NULL;
//        }
//    }
//    char* c_str(){
//
//        return _str;
//    }
//private:
//    char* _str;
//};//类结束
//
//void TestString(){
//    String s1("hello");
//    String s2(s1);
//
//    cout<<s1.c_str()<<endl;
//    cout<<s2.c_str()<<endl;
//
//    String s3("world!!");
//
//    s1 = s3;
//    cout<<s1.c_str()<<endl;
//    cout<<s3.c_str()<<endl;
//}

namespace DP_COPY{
    class String{
    public:
        //构造函数
        String(const char* str ="")
            :_size(strlen(str))
             ,_capacity(_size){
                 _str = new char[_size+1];
                 strcpy(_str,str);
             }
        //s1.Swap(s2)交换
        void Swap(String& s){
            swap(_str,s._str);
            swap(_size,s._size);
            swap(_capacity,s._capacity);
        }
        //拷贝构造函数
        //s2(s1)
        String(const String& s)
            :_str(NULL)
        {
            String tmp(s._str);
            this->Swap(tmp);
        }
    }
}
int main(){
    TestString();
    return 0;
}
