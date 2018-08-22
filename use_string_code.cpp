#include<iostream>
#include<string>
using namespace std;

int main(){
    string str("heheh");
    cout<<str<<endl;
    str.push_back('n');
    str.push_back('!');
    cout<<str<<endl;
    str.erase(1,2);
    cout<<str<<endl;
    string str1(" hello ");
    str.insert(5,str1);
    cout<<str<<endl;
    str.insert(5,str1,3,4);
    cout<<str<<endl;
    cout<<str[2]<<endl;
    return 0;
}
