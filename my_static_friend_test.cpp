//静态成员
//实现点类
//#include<iostream>
//using namespace std;
//
//class PointX{
//    int x,y;
//public:
//    int no;
//    //构造函数
//    PointX(int x1,int y1):x(x1),y(y1),no(0){
//        no++;
//    }
//};//类结束后一定应该使用分号
//
//void Test(){
//    PointX p1(1,1),p2(2,3),p3(3,1);
//    cout<<p3.no;
//}
//int main(){
//    Test();
//    return 0;
//}
////结果显示为1，所以结果并不能将对象的个数给打印出来


//#include<iostream>
//using namespace std;
//
////注意；静态变量属于类，所以进行输出时，直接使用类就可以了
//class PointX{
//    int x,y;
//public:
//    static int no;
//    //构造函数
//    PointX(int x1,int y1):x(x1),y(y1){
//        no++;
//    }
//};//类结束以后，必须使用分号
////对静态变量进行初始化
//int PointX::no = 0;
//void Test(){
//    PointX p1(1,1),p2(1,2),p3(2,3);
//    cout<<PointX::no<<endl;
//}
//
//int main(){
//    Test();
//    return 0;
//}
//结果显示为3，
//在类中使用静态属性时可以直接使用静态属性名


//静态方法
#include<iostream>
using namespace std;

class PointX{
    int x,y;
    static int no;
public:
    PointX(int x1,int y1):x(x1),y(y1){
        no++;
    }
}

