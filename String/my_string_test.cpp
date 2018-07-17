#include"my_string_test.h"
#include<string.h>

//普通构造函数的实现过程
String::String (const char* str){
    if(str == NULL){
        m_data = new char[1];
        *m_data = '\0';
    }else{
        int length = strlen(str);
        m_data = new char[length+1];
        strcpy(m_data,str);
    }
}

//拷贝构造函数的实现过程
String::String(const String &other){
    if(!other.m_data){
        m_data = 0;
    }
    m_data = new char[strlen(other.m_data)+1];
    strcpy(m_data,other.m_data);
}

//析构函数的实现过程
String::~String(){
    if(m_data){
        delete[] m_data;
        m_data = 0;
    }
}

//赋值函数的实现过程
//赋值函数需要注意的是，如果传入的参数内容与本身一致，则不需要赋值（常量区特性）
String & String::operator=(const String& another){
    //如果将自己拷贝给自己，呢么就没必要进行拷贝
    //过程
    if(this !=&another){
        delete[] m_data;//释放原有内存
        if(!another.m_data){
            //所对应的字符串为空
            m_data = 0;
        }else{
            m_data = new char[strlen(another.m_data)+1];
            strcpy(m_data,another.m_data);
        }
    }
    return *this;
}

//字符串连接
//字符串连接函数里面分三种情况：传入参数为空，本身为空，或两者都为空
String&  String::operator+=(const String& another){
    //String newString;
    if(!another.m_data){
        //newString = *this;
    }else if(!m_data){
        //newString = another;
        m_data = another.m_data;
    }else{
        //newString.m_data = new char[strlen(m_data)+strlen(another.m_data)+1];
        strcpy(m_data,m_data);
        strcat(m_data,another.m_data);
    }
    //m_data = newString.m_data;
    //cout<<m_data<<endl;
    //cout<<another.m_data<<endl;
    return *this;
}

//判断相等
bool String::operator==(const String& another){
    if(strlen(m_data)!= strlen(another.m_data)){
        return false;
    }else{
        return strcmp(m_data,another.m_data);
    }
}

//获取字符串长度
int String::getlength(){
    return strlen(m_data);
}



void Test(){
    String str("hello");
    int num = str.getlength();
    String str1(str);
    str1.getstr();
    String str2("world");
    str2.getstr();
    str1+=str2;
    str1.getstr();
    str2 = str;
    str2.getstr();
    cout<<num<<endl;
    str.getstr();
}
int main(){
    Test();
    return 0;
}
