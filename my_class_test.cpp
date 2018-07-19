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

//#include<iostream>
//using namespace std;
//
//class Student{
//    string _name;
//    int _age;
//public:
//    Student():_name(""),_age(0){};
//    void set_name(string name){
//        _name = name;
//    }
//    void set_age(int age){
//        _age = age;
//    }
//    int get_age(){
//        return _age;
//    }
//    string get_name(){
//        return _name;
//    }
//};
////由于此处使用的是值传递，所以所得结果并不改变本身的值
//void increment_age(Student s){
//    s.set_age(s.get_age()+1);
//    cout<<s.get_age()<<endl;
//}
//
////主函数
//int main(){
//    Student s;
//    s.set_name("zhangsan");
//    s.set_age(20);
//    increment_age(s);
//    cout<<s.get_age()<<endl;
//    return 0;
//}

//输出结果为21，20
//结果分析：堆age进行+1处理时，所使用的是值传递，所以
//并不对本身的值进行改变
//如果想要对本身的值进行改变，此处应该进行传址操作



//#include<iostream>
//using namespace std;
//
//class Time{
//    //构造函数
//public:
//    Time(const Time& t){      //赋值运算符
//        cout<<"const Time& t"<<endl;
//        _hour = t._hour;
//        _minute  = t._minute;
//        _second = t._second;
//    }
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//class Date{
//public:
//    Date(int year,int month,int day,const Time& t):_testCount(1),
//    {
//        cout<<"Date()"<<endl;
//    _year = year;
//    _month = month;
//    _day = day;
//    _t  = t;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//    const int  _testCount;  //测试const成员变量的初始化
//    //int& _testReference;    //测试 引用成员变量的初始化
//    Time _t;                //测试无缺省构造函数的成员变量的初始化
//};
//void Test(){
//    Time t1(12,10,10);
//    Date d1(1996,5,20,t1);
//}
//
//int main(){
//    Test();
//    return 0;
//}



//#include<iostream>
//using namespace std;
//
////类的创建
//class Date{
//public:
//    Date(int x)
//    :_day(x),
//    _month(_day),
//    _year(x)
//    {
//        //构造函数
//        cout<<"Date()"<<endl;
//    }
//    void Display(){
//        cout<<"year"<<_year<<endl;
//        cout<<"_month"<<_month<<endl;
//        cout<<"day"<<_day<<endl;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};//类的定义失败
//void Test(){
//    Date d1(1);
//    d1.Display();
//}
//int main(){
//    Test();
//    return 0;
//}
//根据所得结果可得：
//  成员变量按声明顺序依次初始化，而非初始化列表的顺序


//#include<iostream>
//#include<string>
//using namespace std;
//
//class person{
//public:
//    //构造函数
//    person(char* name):_name(name)
//    {
//        cout<<"person()"<<endl;
//    }
//    //拷贝构造函数
//    person(const person& p):_name(p._name)
//    {
//        cout<<"person(const person& p)"<<endl;
//    }
//    //赋值运算符重载
//    person& operator=(const person& p){
//        cout<<"person& operator=(const person& p)"<<endl;
//        if(this != &p){
//            _name = p._name;
//        }
//        return *this;
//    }
//    //析构函数
//    ~person(){
//        cout<<"~person()"<<endl;
//    }
//protected: //继承后父类中私有成员将会变成不可见成员，
//            //故当类如果会被进程时，一般的情况下，应该
//            //将其成员变量设置为受保护的
//    string _name;
//};//类结束后一定应该使用分号，表示结束
//
//class student:public person{
//public:
//    //构造函数
//    student(char* name,int num):person(name),_num(num){
//        cout<<"student(char* name,int num)"<<endl;
//    }
//    //拷贝构造函数
//    student(const student& s):person(s),_num(s._num){
//        cout<<"student(const student& s)"<<endl;
//    }
//    //赋值运算符重载
//    student& operator=(const student& s){
//        cout<<"student& operator=(const student& s)"<<endl;
//        if(this != &s){
//            person::operator=(s);
//            _num = s._num;
//        }
//        return *this;
//    }
//    //析构函数
//    ~student(){
//        cout<<"~student()"<<endl;
//    }
//private:
//    int _num;
//};
//
//void Test(){
//    student p("zhang",21);
//    student q(p);
//    student r("li" ,23);
//    r = q;
//}
//
//int main(){
//    Test();
//    return 0;
//}

//单继承：一个子类只有一个父类时称这个继承为单继承
//多继承：一个子类有两个或两个以上父类时称这个继承为多继承


/*************************************
 * 菱形继承
 * **********************************/

//菱形继承会存在数据冗余和二义性的问题
//此处，Assistant对象中就含有两份person成员
//#include<iostream>
//#include<string>
//using  namespace std;
//
//class person{
//public:
//    string _name;
//};
//class student:public person{
//protected:
//    int _num;
//};
//class teacher:public person{
//protected:
//    int _id;
//};
//class Assistant:public student,public teacher{
//    string _majorCourse;
//};//类的结束后必须以分号结束
//
//int main(){
//    Assistant a;
//    //显示访问
//    a.student::_name = "xxx";
//    a.teacher::_name = "yyy";
//    return 0;
//}

/***************************
 * 虚继承 
 * ************************/
//在vs中，解决菱形继承使用的是偏移量


/**************************
 * 虚函数
 * ***********************/
//虚函数-类的成员函数前面加virtual关键字，则这个成员函数就称为虚函数
//虚函数重写-当在子类中定义了一个与父类完全相同的虚函数时，则称子类的
//           这个函数重写（也称覆盖）了父类的这个函数

//【多态】当使用基类的指针或引用调用重写的虚函数时，当指向父类调用的
//        就是父类的虚函数，当指向子类调用的就是子类的虚函数


/******************************************
 * 总结
 * ***************************************/
//1.派生类重写基类的虚函数实现多态，要求函数名、参数列表、返回值完全相同。（协变除外）
//2.在基类中定义了虚函数，在派生类中该函数始终保持虚函数的特性
//3.只有类的成员才能定义为虚函数
//4.静态成员函数不能定义为虚函数
//5.如果在类外定义虚函数，只能在声明函数时加virtual，类外定义函数时不能加virtual
//6.构造函数不能为虚函数，虽然可以将operator=定义为虚函数，但是最好不要将其定义为
//  虚函数，因为使用时容易引起混淆
//7.不要在构造函数和析构函数里面调用虚函数，在构造函数和析构函数中，对象是不完整的，
//  可能会发生未定义的行为
//8.最好把基类的析构函数定义为虚函数。（why？另外析构函数比较特殊，因为派生类的析构函数
//  和基类的析构函数名称不一样，但是构成覆盖，这里是编译器做了特殊处理）

#include<iostream>
using namespace std;

class person{
public:
    virtual void buyticket(){
        cout<<"person::buyticket->全价"<<endl;
    }
};
class student:public person{
public:
    virtual void buyticket(){
        cout<<"student::buyticket->半价"<<endl;
    }
};
void FUN(person& p){
    p.buyticket();
}

int main(){
    person p;
    student s;
    FUN(p);
    FUN(s);
    person* q = &p;
    q->buyticket();
    q = &s;
    q->buyticket();
    return 0;
}




