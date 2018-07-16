//#include<iostream>
//using namespace std;
//
//class Person{
//
//public:
//    void Display(){
//        cout<<_name<<"-"<<_sex<<"-"<<_age<<endl;
//    }
//public:
//    char* _name;   //姓名
//    char* _sex;   //性别
//    int _age;    //年龄
//};
//void Test(){
//    Person p;   //定义一个对象
//    //初始化，成员变量为公有的，所以，此处可以对成员变量进行访问
//    p._name = "jack";
//    p._sex = "男";
//    p._age = 18;
//    p.Display();
//}
//
//int main(){
//    Test();
//    return 0;
//}

/******************************
 * 成员函数的定义与声明
 * ***************************/

//类内定义成员函数
//#include<iostream>
//using namespace std;

//class Person{
//public:
//    void Display(){
//        cout<<_name<<"-"<<_sex<<"-"<<_age<<endl;
//    }
//public:
//    char* _name;
//    char* _sex;
//    int _age;
//};//此处的分号必须写


//类外定义成员函数
//class Person{
//public:
//    void Display();
//public:
//    char* _name;
//    char* _sex;
//    int _age;
//};
//void Person::Display(){
//    cout<<_name<<"-"<<_sex<<"-"<<_age<<endl;
//}
//void Test(){
//    Person p;
//    p._name = "费坤其";
//    p._sex = "男";
//    p._age = 16;
//    p.Display();
//    cout<<sizeof(p)<<endl;
//}
//int main(){
//    Test();
//    return 0;
//}


//默认对齐数 vs：8 ；gcc ：4
//#include<iostream>
//using namespace std;
//
//class A{
//    char ch;
//    double d;
//};
//class B{
//    char ch1;
//    A a;
//    char ch2;
//};
//
//void Test(){
//    A person1;
//    B person2;
//    cout<<"A "<<sizeof(person1)<<endl;
//    cout<<"B "<<sizeof(person2)<<endl;
//}
//int main(){
//    Test();
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Date{
//public:
//    //无参构造函数
//    Date(){};
//    //带参构造函数
//    Date(int year,int month,int day){
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//    void Display(){
//        cout<<_year<<"-"<<_month<<"-"<<_day<<endl;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//void Test(){
//    Date d1;//调用无参构造函数
//    d1.Display();
//    Date d2(1996,5,20);//调用带参数构造函数
//    d2.Display();
//    //Date d3 (); //注意这里没有调用d3的构造函数定义出d3
//    //d3.Display();
//}
//
//int main(){
//    Test();
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Date{
//public:
//    //缺省参数的构造函数
//   // Date(int year=1996,int month=5,int day=20){
//   //     _year = year;
//   //     _month = month;
//   //     _day = day;
//   // }
//    //半缺省构造函数
//    Date(int year,int month=5){
//        _year = year;
//        _month = month;
//        _day = 20;
//    }
//    void Display(){
//        cout<<_year<<"-"<<_month<<"-"<<_day<<endl;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//void Test(){
//   // Date d1;
//   // Date d2(1998,10,20);
//   // d1.Display();
//   // d2.Display();
//    Date d3(2010);
//    d3.Display();
//
//}
//
//int main(){
//    Test();
//    return 0;
//}


//拷贝构造函数
//#include<iostream>
//using namespace std;
//
//class Date{
//public:
//    Date(){};//构造函数
//    //拷贝构造函数
//    Date(const Date& d){
//        _year = d._year;
//        _month = d._month;
//        _day = d._day;
//    }
//    void Display(){
//        cout<<_year<<"-"<<_month<<"-"<<_day<<endl;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//void Test(){
//    Date d1;
//    d1.Display();
//    Date d2(d1);
//    d2.Display();
//    //调用拷贝构造函数
//    Date d3 = d1;
//    d3.Display();
//}
//int main(){
//    Test();
//    return 0;
//}


/*****************************
 * 析构函数
 * **************************/
//#include<iostream>
//using namespace std;
//
//class Date{
//public:
//    //构造函数
//    Date(){};
//    //拷贝构造函数
//    Date(int year = 1996,int month = 5,int day = 20){
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//    Date(const Date& d){
//        _year = d._year;
//        _month = d._month;
//        _day = d._day;
//    }
//    void Display(){
//        cout<<_year<<"-"<<_month<<"-"<<_day<<endl;
//    }
//    //析构函数
//    ~Date(){};
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//void Test(){
//    Date d1(1996,5,20);
//    d1.Display();
//}
//int main(){
//    Test();
//    return 0;
//}

//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//
//class Array{
//public:
//    //构造函数
//    Array(int size){
//        _ptr = ( int*)malloc(sizeof(int)*size);
//    }
//    //析构函数
//    ~Array(){
//        if(_ptr){
//            free(_ptr);
//            _ptr = 0;
//        }
//    }
//private:
//    int* _ptr;
//};
//void Test(){
//    Array arr1(1);
//}
//int main(){
//    Test();
//    return 0;
//}


/*****************************
 * 运算符重载
 * **************************/
//#include<iostream>
//using namespace std;
//
//class Date{
//public:
//    //带缺省参数的构造函数
//    Date(int year = 1996,int month = 5,int day = 20){
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//    //拷贝构造函数
//    Date(const Date& d){
//        _year = d._year;
//        _month = d._month;
//        _day = d._day;
//    }
//    //赋值运算符重载
//    Date& operator= (const Date& d){
//        if(this != &d){
//            _year = d._year;
//            _month = d._month;
//            _day = d._day;
//        }
//        return *this;
//    }
//    void Display(){
//        cout<<_year<<"-"<<_month<<"-"<<_day<<endl;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//void Test(){
//    Date d1;
//    d1.Display();
//    Date d2 = d1;//调用拷贝构造函数
//    d2.Display();
//    Date d3;
//    d3 = d1; //调用赋值运算符的重载
//    d3.Display();
//}
//int main(){
//    Test();
//    return 0;
//}

/***********************************
 * 初始化列表的使用
 * ********************************/
//#include<iostream>
//using namespace std;
//class Time{
//public:
//    //构造函数
//    Time(){
//        cout<<"Time"<<endl;
//        _hour = 0;
//        _minute = 0;
//        _second = 0;
//    }
//    //拷贝构造函数
//    Time(const Time& t){
//        cout<<"time(const Time& t)"<<endl;
//        _hour = t._hour;
//        _minute = t._minute;
//        _second = t._second;
//    }
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//class Date{
//public:
//    //构造函数
//    //非初始化列表
//    Date( int year,int month,int day,const Time& t){
//        cout<<"非初始化列表"<<endl;
//        _year = year;
//        _month = month;
//        _day = day;
//        _t = t;
//    }
//    //初始化列表
//   // Date(int year,int month,int day,Time t)
//   //     :_year(year),_month(month),_day(day),_t(t){
//   //         cout<<"初始化列表"<<endl;
//   //     }
//private:
//    int _year;
//    int _month;
//    int _day;
//    Time _t;//时间
//};
//void Test(){
//    int begin = clock();
//    Time t1;
//    Date d1(1996,5,20,t1);
//    int end = clock();
//    cout<<end-begin<<endl;
//}
//int main(){
//    Test();
//    return 0;
//}

#include<iostream>
using namespace std;

class Student{
    string _name;
    int _age;
public:
    Student():_name(""),_age(0){};
    void set_name(string name){
        _name = name;
    }
    void set_age(int age){
        _age = age;
    }
    int get_age(){
        return _age;
    }
    string get_name(){
        return _name;
    }
};
//由于此处使用的是值传递，所以所得结果并不改变本身的值
void increment_age(Student s){
    s.set_age(s.get_age()+1);
    cout<<s.get_age()<<endl;
}

//主函数
int main(){
    Student s;
    s.set_name("zhangsan");
    s.set_age(20);
    increment_age(s);
    cout<<s.get_age()<<endl;
    return 0;
}

//输出结果为21，20
//结果分析：堆age进行+1处理时，所使用的是值传递，所以
//并不对本身的值进行改变
//如果想要对本身的值进行改变，此处应该进行传址操作
