//const修饰成员函数
//在成员函数后面加const，，const修饰this指针所指向
//的对象，也就是保证调用这个const成员函数的对象在
//函数内 不会发生改变
//#include<iostream>
//using namespace std;
////类的定义
//class Date{
//public:
//    //构造函数缺省
//    Date(int year = 1996,int month = 10, int day = 20){
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//    void Display(){
//        cout<<"Display()"<<endl;
//        cout<<"year"<<_year<<endl;
//    }
//    void Display() const
//    {
//        cout<<"Display()const"<<endl;
//        cout<<"_year"<<_year<<endl;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//void Test(){
//    Date d1;
//    d1.Display();
//
//    const Date d2(1996,3,12);
//    d2.Display();
//}
//int main(){
//    Test();
//    return 0;
//}
//const对象不可以调用非const对象
//非const对象可以调用const对象
//const成员函数不可以调用其他的非const成员函数
//非const成员函数可以调用其他的const成员函数



