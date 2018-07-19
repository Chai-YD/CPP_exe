/***************************/
//探索单继承对象模型
/***************************/
//#include<iostream>
//#include<stdio.h>
//using  namespace std;
//
//class Base{
//public:
//    virtual void func1(){
//        cout<<"Base::func1()"<<endl;
//    }
//    virtual void func2(){
//        cout<<"Base::func2()"<<endl;
//    }
//private:
//    int a;
//};//类结束时必须写分号
//
//class Derive:public Base{
//public:
//    virtual void func1(){
//        cout<<"Derive::func1"<<endl;
//    }
//    virtual void func3(){
//        cout<<"Derive::func3"<<endl;
//    }
//    virtual void func4(){
//        cout<<"Derive::func4()"<<endl;
//    }
//private:
//    int b;
//};
//
//typedef  void (*FUNC) ();
//
//void PrintTable( int*VTable ){
//    cout<<"序表地址"<<endl;
//    int i = 0;
//    for(;0 != VTable[i];++i){
//        printf("%d->%p ",i,VTable[i]);
//        FUNC f = (FUNC)VTable[i];
//        f();
//    }
//    cout<<endl;
//}
//
//int main(){
//    Base b1;
//    Derive d1;
//    int *VTable1 = (int*)(*(int *)(&b1));
//    int *VTable2 = (int*)(*(int *)(&d1));
//    //PrintTable(VTable1);
//    PrintTable(VTable2);
//}

/****************************************
 * 探究多继承对象模型
 * *************************************/

//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//class Base1{
//public:
//    virtual void func1(){
//        cout<<"Base1::func1"<<endl;
//    }
//    virtual void func2(){
//        cout<<"Base1::func2"<<endl;
//    }
//private:
//    int a;
//};
//
//class Base2{
//public:
//    virtual void func1(){
//        cout<<"Base2::func1"<<endl;
//    }
//    virtual void func2(){
//        cout<<"Base2::func2"<<endl;
//    }
//private:
//    int b;
//};
//
//class Derive :public Base1,public Base2{
//public:
//    virtual void func1(){
//        cout<<"Derive::func1"<<endl;
//    }
//    virtual void func3(){
//        cout<<"Derive::func3"<<endl;
//    }
//private:
//    int c;
//};
//
//typedef void (*FUNC) ();
//void PrintTable(int* VTable){
//    int i = 0;
//    for(;0 != VTable[i];i++){
//        printf("%d->%p ",i,VTable[i]);
//        FUNC f = (FUNC)VTable[i];
//        f();
//        cout<<endl;
//    }
//}
//
//int  main(){
//    Base1 b1;
//    int *VTable1 = (int*)(*((int *)&b1));
//    cout<<sizeof(b1)<<endl;
//    PrintTable(VTable1);
//}


/*****************************************
 * 多态
 * **************************************/

//#include<iostream>
//using namespace std;
//
//class Base1{
//public:
//    virtual void func1(){
//        cout<<"Base1::func1()"<<endl;
//    }
//    virtual void func2(){
//        cout<<"Base1::func2()"<<endl;
//    }
//private:
//    int a;
//};
//class Derive:public Base1{
//public:
//    virtual void func1(){
//        cout<<"Derive::func1()"<<endl;
//    }
//    virtual void func3(){
//        cout<<"Derive::func3()"<<endl;
//    }
//private:
//    int b;
//};
//
//int main(){
//    Base1 b1;
//    Derive d1;
//    b1.func1();
//    d1.func1();
//    Base1* f;  //调用类中的函数时候，会根据对象的不同而调用不同类中的函数
//    f = &b1;
//    f->func1();
//    f = &d1;
//    f->func1();
//    return 0;
//}
