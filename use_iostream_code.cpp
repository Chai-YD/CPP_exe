////标准输出示例程序
//#include<iostream>
//using std::cout;
//using std::endl;
//
//int main(){
//    int a = 5,*p = &a ;
//    double x = 3.1415926;
//    char ch = 'a';
//    cout<<"a = "<< a <<endl;
//    cout<<"x = "<< x <<endl;
//    cout<<" ch = "<<ch<<endl;
//    cout<<"p = "<<p<<endl;
//    cout<<"*p = "<<*p<<endl;
//    return 0;
//}

////指向字符的指针输出示例程序
//#include<iostream>
//using std::endl;
//using std::cout;
//
//int main(){
//    char* ptr = "abcdef";
//    cout<<"ptr指向的内容是： "<<ptr<<endl;
//    cout<<"ptr中保存的地址是："<<(void *)ptr<<endl;
//    return 0;
//}


////通过put成员函数进行字符的输出
//#include<iostream>
//using std::endl;
//using std::cout;
//
//int main(){
//    cout.put('A');
//    cout.put(65);
//    cout.put('A').put('\n');
//}


////通过write成员函数进行无格式的输出
//#include<iostream>
//using std::cout;
//
//int main(){
//    char buf[] = "HAPPY BIRTHDAY";
//    cout.write(buf,10);
//}


////标准输入示例程序
//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//
//int main(){
//    int grade,highestGrade = -1;
//    cout<<"Enter grade(enter end-of-file to end):";
//    while(cin>>grade){
//        if(grade > highestGrade){
//            highestGrade = grade;
//        }
//        cout<<"Enter grade(enter end-of-file to end):";
//    }
//    cout<<"\n highestGrade is :"<<highestGrade<<endl;
//    return 0;
//}


////通过get和getline成员函数进行字符和字符串的输入
//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int main(){
//    char ch;
//    while((ch = cin.get()) != EOF){
//        cout<<ch;
//    }
//    return 0;
//}


// #include<iostream>
// using namespace std;
// 
// int main(){
//     string str;
//     //getline(cin,str);
//     //cout<<str;
//     //cout<<str.size()<<endl;
//     char ch;
//     cin.get(ch);
//     cout<<ch;
//     return 0; 
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// 
// int main(){
//     char ch[20];
//     cin.get(ch[0]);
//     int i = 0;
//     for(;i < 20 && ch[i] != '\n';++i){
//         cin.get(ch[i + 1]);
//     }
//     cout<<i<<endl;
//     return 0;
// }


//通过read函数进行无格式的输入
#include<iostream>
using namespace std;
int main(){
    char buf[80];
    cin.read(buf,20);

    cout.write(buf,cin.gcount());
    cout<<endl;
    cout<<"总数："<<cin.gcount()<<endl;
    return 0;
}


