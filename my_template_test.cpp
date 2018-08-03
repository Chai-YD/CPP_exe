/********************************************
 * 模板
 * *****************************************/
//模板是范型编程的基础，范型编程就是编写与类型无关的逻辑代码，
//是一种复用的方式，模板可以分为模板类和模板函数
//#include<iostream>
//#include<string>
//using namespace std;
//
////使用继承来实现模板
//bool Iseqal(int left,int right){
//    return left==right;
//}
//bool Iseqal(string& left,string& right){
//    return left==right;
//}
//void Test(){
//    string s1("s1"),s2("s2");
//    cout<<Iseqal(s1,s2)<<endl;
//    cout<<Iseqal(1,1)<<endl;
//    return;
//}
//int main(){
//    Test();
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//template<typename T>
//
//bool Iseqal(const T& left,const T& right){
//    return left==right;
//}
//void Test(){
//    string s1("s"),s2("s");
//    cout<<Iseqal(s1,s2)<<endl;
//}
//
//int main(){
//    Test();
//    return 0;
//}

//#include<iostream>
//using namespace std;
////模板参数匹配及显示实例化
//template<class T>
//bool Iseqal(const T& left,const T& right){
//    return left == right;
//}
//void test(){
//    cout<<Iseqal(1,1)<<endl;
//    //cout<<Iseqal(1,1.1)<<endl;   //显示类型不匹配
//    cout<<Iseqal<int>(1,1.1)<<endl;  //进行显示类型转换
//    cout<<Iseqal<double>(1,1.1)<<endl;//进行显示的类型转换
//}
//
//int main(){
//    test();
//    return 0;
//}

//#include<iostream>
//using namespace std;
////重载函数模板
//bool Iseqal(const int& left,const int& right){
//    cout<<"template<int,int>"<<endl;
//    //return left == right;
//}
//template<class T>
//bool Iseqal(const T& left,const T& right){
//    cout<<"template<T,T>"<<endl;
//    //return left == right;
//}
//
//template<class T1,class T2>
//bool Iseqal(const T1& left,const T2& right){
//    cout<<"template<T1,T2>"<<endl;
//    //return left == right;
//}
//void test(){
//    Iseqal(1,1);      //调用<int,int>
//    Iseqal(1.1,1);    //调用<T1,T2>
//    Iseqal(1.1,1.1);  //调用<T,T>
//}
//int main(){
//    test();
//    return 0;
//}

///////////////////////////////////////////////
//模板类
//////////////////////////////////////////////

//普通类顺序表的定义
//typedef int dataType;
////typedef char dataType;
//class Seqlist{
//private:
//    dataType* _data;
//    int _size;
//    int _capacity;
//};//类结束，必须加上分号
//
////模板类
//template<class T>
//class Seqlist{
//private:
//    T* _data;
//    int _size;
//    int _capacity;
//};

//#include<iostream>
//using namespace std;
////模板类
//template<class T>
//class Seqlist{
//public:
//    Seqlist();//构造函数
//    ~Seqlist();//析垢函数
//private:
//    int _size;
//    int _capacity;
//    T* _data;
//};
//template<class T>
////成员函数的实现
//Seqlist<T>::Seqlist()
//    :_size(0)
//    ,_capacity(10)
//    ,_data(new T[_capacity])
//{}
//template<class T>
//Seqlist<T>::~Seqlist(){
//    delete[] _data;
//}
//void test(){
//    Seqlist<int> sl1;   //编译器模板推演处理进行实例化
//    Seqlist<double> sl2;
//}
//int main(){
//    test();
//    return 0;
//}









