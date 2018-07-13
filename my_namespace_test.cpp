//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
////命名空间---名字隔离。解决命名冲突的问题
//namespace my{
//    int a = 10;
//    namespace one{
//        int a = 1;
//        int b = 2;
//    }
//}
//namespace your{
//     int a = 20;
//}
////张开命名空间
//using namespace your;
//
//int main(){
//    std::cout<<"hello world\n"<<std::endl;
//
//    int a = 20;
//    printf("%d\n",::a);
//    printf("%d\n",my::a);
//    printf("%d\n",a);
//    return 0;
//}


//#include<iostream>
//using namespace std;//当使用的时候，会出现命名冲突的情况
//
////在使用命名时，最好指定域
////在工程中，自己的命名规则，最好放在自己的命名域中，防止
////出现命名冲突
//
//int main(){
//    int ret = max(1,2);
//    cout<<"ret ->"<<ret<<endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
////CPP输入/输出流
////输出小数点,CPP 中很少用，所用直接使用c中的printf就OK了
////C语言可以做到的，CPP都可以做到，但是右先比较复杂，所以
////使用时，看那种语言简单，就使用那种语言就好
//
//int main(){
//    int i;
//    cin>>i;
//    cout<<i<<endl;
//    double d;
//    cin>>d;
//    cout<<d<<endl;
//
//    int* p = &i;
//    cout<<p<<endl;
//    return 0;
//}


//函数重载
//一组函数中，函数名可以相同，函数的参数不同（类型不同/参数顺序不同）
//CPP是如何实现函数重载？
#include<iostream>
using namespace std;
//#include<stdio.h>
void fun1(int a,int b){
    ;
}

void fun1(char a){
    ;
}
int main(){
    int a = 1;
    int b = 3;
    char c ='1';
    fun1(a,b);
}










