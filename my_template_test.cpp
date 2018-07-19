/********************************************
 * 模板
 * *****************************************/
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


#include<iostream>
#include<string>
using namespace std;

template<typename T>

bool Iseqal(const T& left,const T& right){
    return left==right;
}
void Test(){
    string s1("s"),s2("s");
    cout<<Iseqal(s1,s2)<<endl;
}

int main(){
    Test();
    return 0;
}





