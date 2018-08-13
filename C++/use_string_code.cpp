////////////////////////////////////////
//str.erase函数使用
////////////////////////////////////////
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(){
//    string str("This is an example sentence");
//    cout<<str<<endl;
//    str.erase(10,8);
//    cout<<str<<endl;
//    str.erase(str.begin()+9);
//    cout<<str<<endl;
//    str.erase(str.begin()+5,str.end()-9);
//    cout<<str<<endl;
//}

#include<iostream>
#include<string>

using namespace std;
int main(){
    string d_str;
    char c;
    do{
        c = std::cin.get();
        d_str += c;
    }while(c != '\n');
    string s_str;
    do{
        c = std::cin.get();
        s_str += c;
    }while(c != '\n');
    cout<<d_str<<endl;
    cout<<s_str<<endl;
    int i = 0;
    for(;i<d_str.size();++i){
        int j = 0;
        for(;j<s_str.size();++j){
            if(d_str[i] == s_str[j]){
                d_str.erase(i,1);
            }
        }
    }
    cout<<d_str<<endl;
}











