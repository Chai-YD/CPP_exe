//*******************************
//缺省函数
//*******************************
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
////全缺省参数
//int Add1(int a= 0, int b = 0){
//    return a+b;
//}
////半缺省参数
//int Add2(int a, int b =0){
//    return a+b;
//}
//
////测试函数
//void Test(){
//    printf("Add1 = %d\n",Add1());
//    printf("Add1 = %d\n",Add1(1));
//    printf("Add1 = %d\n",Add1(1,1));
//    printf("Add2 = %d\n",Add2(2));
//    printf("Add2 = %d\n",Add2(2,2));
//    cout<<Add1()<<endl;
//    cout<<Add1(1)<<endl;
//    cout<<Add1(1,1)<<endl;
//    cout<<Add2(2)<<endl;
//    cout<<Add2(2,2)<<endl;
//}
////主函数
//int main(){
//    Test();
//    return 0;
//}

//*************************************
//指针&引用&const
//*************************************
#include<iostream>
using namespace std;
//引用不是定义一个新的变量，而是给一个已经定义的变量重新起一个别名

//引用格式
//类型&引用变量 = 已定义过的变量名

//引用的特点
//   1.一个变量可以右多个别名
//   2.引用必须进行初始化
//   3.引用只能在初始化的使用引用一次，不能改变为再引用其他的变量

//void TestReferencel(){
//    int  a= 1;
//    //使b作为a的一个别名
//    int& b = a;
//    cout<<"a:address->"<<&a<<endl;
//    cout<<"b:address->"<<&b<<endl;
//
//    a = 2;
//    b = 3;
//    //引用一个引用变量，别名的别名
//    int &c = b;
//    c = 4;
//    cout<<"a->"<<a<<endl;
//    cout<<"b->"<<b<<endl;
//    cout<<"c->"<<c<<endl;
//    cout<<"c:address->"<<&c<<endl;
//}
//
//
////主函数
//int main(){
//    TestReferencel();
//    return 0;
//}

//根据所得结果可以知道，三个变量的地址都是相同的，
//说明使用引用 时，不进行空间的开辟

//#include<iostream>
//using namespace std;
////const引用
//void TestReference2(){
//    int d1 = 4;
//    const int& d2 = d1;
//    d1 = 5;//
//
//    const int d3 = 1;
//    const int& d4 = d3;
//    //int& d5 = d4;//const int 的别名不可以为int
//    //int & d5 = 5;
//    const int& d6 = 5;//常量具有常性，只有常引用可以引用常量
//
//    double d7 = 1.1;
//    //int& d8 = d7;//d7是double类型。d8是int类型，d7赋值给d8时
//                   //要生成一个临时变量，也就是说d8引用的是这个
//                   //带有常性的临时变量，所以不能赋值
//
//    const int& d9 = d7;
//    cout<<"d1->"<<d1<<endl;
//    cout<<"d2->"<<d2<<endl;
//    cout<<"d3->"<<d3<<endl;
//    cout<<"d4->"<<d4<<endl;
//    //cout<<"d5->"<<d5<<endl;
//    cout<<"d6->"<<d6<<endl;
//    cout<<"d7->"<<d7<<endl;
//    cout<<"d8->"<<d8<<endl;
//    cout<<"d9->"<<d9<<endl;
//}
////主函数
//int main(){
//    TestReference2();
//    return 0;
//}

//
//#include<iostream>
//using namespace std;
////引用作为参数
//
////值传递：如果形参为非引用的传值方式，则生成局部临时
////变量接受实参的值
////void Swap(int left,int right){
////    int tmp = left;
////    left = right;
////    right = tmp;
////}
//////引用传递：如果形参为引用类型，则形参是实参的别名
////void Swap(int& left,int& right){
////    int tmp = left;
////    left = right;
////    right = tmp;
////}
////指针传递
//void Swap(int *left,int *right){
//    int tmp = *left;
//    *left = *right;
//    *right = tmp;
//}
//
////测试函数
//void TestReference3(){
//    int a = 1;
//    int b = 2;
//    cout<<"a->"<<a<<endl;
//    cout<<"b->"<<b<<endl;
//    Swap(&a,&b);
//    cout<<"a->"<<a<<endl;
//    cout<<"b->"<<b<<endl;
//}
//
////主函数
//int main(){
//    TestReference3();
//    return 0;
//}


#include<iostream>
using namespace std;
//测试值传递/引用传递的效率


//主函数
int main(){
    return 0;
}








