////标准输出示例程序
//#include<iostream>
//using std::cout;
//using std::endl;
//
//int main(){
//    int a = 5,*p = &a ;
//    double x = 3.1415926;
//    char ch = 'a';
//    cout<<"a = "<< a <<endl;
//    cout<<"x = "<< x <<endl;
//    cout<<" ch = "<<ch<<endl;
//    cout<<"p = "<<p<<endl;
//    cout<<"*p = "<<*p<<endl;
//    return 0;
//}

////指向字符的指针输出示例程序
//#include<iostream>
//using std::endl;
//using std::cout;
//
//int main(){
//    char* ptr = "abcdef";
//    cout<<"ptr指向的内容是： "<<ptr<<endl;
//    cout<<"ptr中保存的地址是："<<(void *)ptr<<endl;
//    return 0;
//}


////通过put成员函数进行字符的输出
//#include<iostream>
//using std::endl;
//using std::cout;
//
//int main(){
//    cout.put('A');
//    cout.put(65);
//    cout.put('A').put('\n');
//}


//通过write成员函数进行无格式的输出
#include<iostream>
using std::cout;

int main(){
    char buf[] = "HAPPY BIRTHDAY";
    cout.write(buf,10);
}

