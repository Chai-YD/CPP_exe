//文件名：7_14_1.cpp
//判断闰年
//
//#include<iostream>
//using namespace std;
//
//int main(){
//    int year;
//    bool result;
//    cout<<"输入想要验证的 年份： ";
//    cin>>year;
//    result = ((year % 4 ==0 &&year %100 != 0)|| year %400 == 0);
//    if(result)
//        cout<<year<<"是闰年"<<endl;
//    else{
//        cout<<year<<"不是闰年"<<endl;
//    }
//    return 0;
//}


//求一元二次方程的解
//#include<iostream>
//#include<math.h>
//using  namespace std;
//
//int main(){
//    float a,b,c,x1,x2,val;//a,b,c表示三个参数；x1,x2表示
//                        //输出的结果，val表示需要比较的值
//    cout<<"输入三个参数："<<endl;
//    cout<<"输入a： ";
//    cin>>a;
//    cout<<"输入b： ";
//    cin>>b;
//    cout<<"输入c: ";
//    cin>>c;
//    if(fabs(a) < 1e-6)
//        cout<<"不是一元二次方程"<<endl;
//    else{
//        val = b*b - 4*a*c;
//        if(val>= 0){
//            //有实根
//            x1 = (-b + sqrt(val))/(2*a);
//            x2 = (-b - sqrt(val))/(2*a);
//            cout<<"x1="<<x1<<"  x2="<<x2<<endl;
//        }else{
//            cout<<"无根"<<endl;
//        }
//    }
//    return 0;
//}


//将整数转换成一星期中的某一天名字的程序
//#include<iostream>
//using namespace std;
//
//int main(){
//    int day;
//    while(1){
//        cout<<"输入一个整型数(0：星期天...6：星期六)： ";
//        cin>>day;
//        if(day<0||day>6){
//            cout<<"输入错误，重新输入：";
//        }else{
//            switch(day){
//                case 0:
//                    cout<<"星期天"<<endl;
//                    break;
//                case 1:
//                    cout<<"星期一"<<endl;
//                    break;
//                default:
//                    cout<<"星期"<<endl;
//                    break;
//            }
//            break;
//        }
//    }
//    return 0;
//}


//分数转换函数
//#include<iostream>
//using namespace std;
//
//int main(){
//    int count;
//    cout<<"输入成绩：";
//    cin>>count;
//    switch(count){
//        case 0:
//            cout<<"A";
//            break;
//        default:
//            cout<<"B";
//            break;
//    }
//    return 0;
//}


//自动出题程序
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int num1,num2,op,result;
    srand(time(NULL));
    num1 = rand()%10;
    num2 = rand()%10;
    op = rand()%2;
    switch(op){
        case 0:
            cout<<num1<<"+"<<num2<<"=?";
            cin>>result;
            if(num1+num2 == result){
                cout<<"you are right"<<endl;
            }else{
                cout<<"you are wrong"<<endl;
            }
            break;
        default:
            cout<<num1<<"+"<<num2<<"=?";
            cin>>result;
            if(num1-num2 == result){
                cout<<"you are right"<<endl;
            }else{
                cout<<"you are wrong"<<endl;
            }
            break;
    }
    return 0;
}







